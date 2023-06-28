﻿using System.Runtime.CompilerServices;
using FFXIVClientStructs.FFXIV.Application.Network.WorkDefinitions;

namespace FFXIVClientStructs.FFXIV.Client.Game;

// idk if this is a manager, but I don't know what else to call it
[StructLayout(LayoutKind.Explicit, Size = 0xEC8)]
public unsafe partial struct QuestManager
{
	[FieldOffset(0x10)] public QuestListArray Quest;

	[FieldOffset(0x10)] public fixed byte NormalQuests[0x18 * 30];

	[FieldOffset(0x560)] public fixed byte DailyQuests[0x10 * 12];

	[FieldOffset(0x650)] public fixed byte TrackedQuests[0x10 * 5];

	[FieldOffset(0xB60)] public fixed byte BeastReputation[0x10 * 16];

	[FieldOffset(0xC60)] public fixed byte LeveQuests[0x18 * 16];

	public Span<QuestWork> QuestSpan => new(Unsafe.AsPointer(ref NormalQuests[0]), 30);
	public Span<TrackingWork> TrackedQuestSpan => new(Unsafe.AsPointer(ref TrackedQuests[0]), 5);
	public Span<DailyQuestWork> DailyQuestSpan => new(Unsafe.AsPointer(ref DailyQuests[0]), 12);
	public Span<BeastReputationWork> BeastReputationSpan => new(Unsafe.AsPointer(ref BeastReputation[0]), 16);
	public Span<LeveWork> LeveQuestSpan => new(Unsafe.AsPointer(ref LeveQuests[0]), 16);

    [MemberFunction("E8 ?? ?? ?? ?? 66 BA 10 0C", IsStatic = true)]
    public static partial QuestManager* Instance();

    [MemberFunction("E8 ?? ?? ?? ?? 41 88 84 2C", IsStatic = true)]
    public static partial bool IsQuestComplete(ushort questId);
    public static bool IsQuestComplete(uint questId) => IsQuestComplete((ushort)(questId & 0xFFFF));

    [MemberFunction("E8 ?? ?? ?? ?? 3A 43 06", IsStatic = true)]
    public static partial bool IsQuestCurrent(ushort questId);
    public static bool IsQuestCurrent(uint questId) => IsQuestCurrent((ushort)(questId & 0xFFFF));

    public byte GetQuestSequence(ushort questId) {
	    var quest = GetQuestById(questId);
	    return quest == null ? (byte)0 : quest->Sequence;
    }

    public bool IsQuestAccepted(ushort questId) {
	    var quest = GetQuestById(questId);
	    return quest != null && quest->Sequence != 0;
    }

    public bool IsDailyQuestCompleted(ushort questId) {
	    var quest = GetDailyQuestById(questId);
	    return quest != null && (quest->Flags & 1) != 0;
    }

    public QuestWork* GetQuestById(ushort questId) {
	    var span = QuestSpan;
	    for (var i = 0; i < span.Length; i++) {
		    if (span[i].QuestId == questId)
			    return (QuestWork*)Unsafe.AsPointer(ref span[i]);
	    }
	    return null;
    }

    public DailyQuestWork* GetDailyQuestById(ushort questId) {
	    var span = DailyQuestSpan;
	    for (var i = 0; i < span.Length; i++) {
		    if (span[i].QuestId == questId)
			    return (DailyQuestWork*)Unsafe.AsPointer(ref span[i]);
	    }
	    return null;
    }

    public LeveWork* GetLeveQuestById(ushort leveId) {
        var span = LeveQuestSpan;
	    for (var i = 0; i < span.Length; i++) {
		    if (span[i].LeveId == leveId)
			    return (LeveWork*)Unsafe.AsPointer(ref span[i]);
	    }
	    return null;
    }

    public BeastReputationWork* GetBeastReputationById(uint beastTribeId)
    {
	    var index = beastTribeId - 1;
	    var span = BeastReputationSpan;
	    if (index >= span.Length) return null; 
	    return (BeastReputationWork*)Unsafe.AsPointer(ref span[(int)index]);
    }
    
    [StructLayout(LayoutKind.Explicit)]
    public struct QuestListArray
    {
        [FieldOffset(0x00)] private fixed byte data[0x18 * 30];

        public Quest* this[int index]
        {
            get
            {
                if (index < 0 || index > 30) return null;

                fixed (byte* pointer = data)
                {
                    return (Quest*) (pointer + sizeof(Quest) * index);
                }
            }
        }

        [StructLayout(LayoutKind.Explicit, Size = 0x18)]
        public struct Quest
        {
            [FieldOffset(0x08)] public ushort QuestID;
            [FieldOffset(0x0B)] public QuestFlags Flags; // 1 for Priority, 8 for Hidden

            public bool IsHidden => Flags.HasFlag(QuestFlags.Hidden);

            [Flags]
            public enum QuestFlags : byte
            {
                None,
                Priority,
                Hidden = 0x8
            }
        }
    }
}