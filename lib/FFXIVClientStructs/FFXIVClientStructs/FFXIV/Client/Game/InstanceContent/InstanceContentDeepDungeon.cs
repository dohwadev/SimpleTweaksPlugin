﻿using System.Runtime.CompilerServices;

namespace FFXIVClientStructs.FFXIV.Client.Game.InstanceContent; 

[StructLayout(LayoutKind.Explicit, Size = 0x2308)]
public unsafe struct InstanceContentDeepDungeon {
	[FieldOffset(0x00)] public InstanceContentDirector InstanceContentDirector;

	[FieldOffset(0x1870)] public fixed byte Party[0x08 * 4];
	[FieldOffset(0x1890)] public fixed byte Items[0x03 * 16];
	[FieldOffset(0x18C0)] public fixed byte Chests[0x02 * 16];
	
	[FieldOffset(0x18E4)] public uint BonusLootItemId;
	[FieldOffset(0x18E8)] public byte Floor;
	[FieldOffset(0x18E9)] public byte ReturnProgress;
	[FieldOffset(0x18EA)] public byte PassageProgress;

	[FieldOffset(0x18EC)] public byte WeaponLevel;
	[FieldOffset(0x18ED)] public byte ArmorLevel;
	[FieldOffset(0x18EF)] public byte HoardCount;

	public Span<DeepDungeonPartyInfo> PartySpan => new(Unsafe.AsPointer(ref Party[0]), 4);
	public Span<DeepDungeonItemInfo> ItemSpan => new(Unsafe.AsPointer(ref Items[0]), 16);
	public Span<DeepDungeonChestInfo> ChestSpan => new(Unsafe.AsPointer(ref Chests[0]), 16);

	[StructLayout(LayoutKind.Explicit, Size = 0x08)]
	public struct DeepDungeonPartyInfo {
		[FieldOffset(0x00)] public uint ObjectId;
		[FieldOffset(0x04)] public sbyte RoomIndex;
	}

	[StructLayout(LayoutKind.Explicit, Size = 0x03)]
	public struct DeepDungeonItemInfo {
		[FieldOffset(0x00)] public byte ItemId;
		[FieldOffset(0x01)] public byte Count;
		[FieldOffset(0x02)] public byte Flags;

		public bool IsUsable => (Flags & (1 << 0)) != 0;
		public bool IsActive => (Flags & (1 << 1)) != 0;
	}

	[StructLayout(LayoutKind.Explicit, Size = 0x02)]
	public struct DeepDungeonChestInfo {
		[FieldOffset(0x00)] public byte ChestType;
		[FieldOffset(0x01)] public sbyte RoomIndex;
	}
}
