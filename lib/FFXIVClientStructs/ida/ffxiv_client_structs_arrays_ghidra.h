// Forward References
struct Common_Math_Matrix2x2;
struct Common_Math_Matrix4x4;
struct Common_Math_Quaternion;
struct Common_Math_Rectangle;
struct Common_Math_Vector2;
struct Common_Math_Vector3;
struct Common_Math_Vector4;
struct Common_Lua_LuaState;
struct Common_Lua_lua_State;
struct Common_Lua_LuaThread;
struct Common_Log_LogModule;
struct Common_Configuration_ConfigProperties;
struct Common_Configuration_ConfigValue;
struct Common_Configuration_ConfigEntry;
struct Common_Configuration_ChangeEventInterface;
struct Common_Configuration_ConfigBase;
struct Common_Configuration_DevConfig;
struct Common_Configuration_SystemConfig;
struct Common_Component_BGCollision_BGCollisionModule;
struct Common_Component_BGCollision_RaycastHit;
struct Common_Component_BGCollision_Object;
struct Component_Exd_ExdModule;
struct Component_Excel_ExcelModule;
struct Component_Excel_ExcelModuleInterface;
struct Component_Excel_ExcelSheet;
struct Component_GUI_AgentHudLayout;
struct Component_GUI_AgentInterface;
struct Component_GUI_AtkArrayData;
struct Component_GUI_AtkArrayDataHolder;
struct Component_GUI_AtkCollisionNode;
struct Component_GUI_AtkComponentBase;
struct Component_GUI_AtkComponentButton;
struct Component_GUI_AtkComponentCheckBox;
struct Component_GUI_AtkComponentDragDrop;
struct Component_GUI_AtkComponentDropDownList;
struct Component_GUI_AtkComponentGaugeBar;
struct Component_GUI_AtkComponentGuildLeveCard;
struct Component_GUI_AtkComponentHoldButton;
struct Component_GUI_AtkComponentIcon;
struct Component_GUI_AtkComponentIconText;
struct Component_GUI_AtkComponentInputBase;
struct Component_GUI_AtkComponentJournalCanvas;
struct Component_GUI_AtkComponentList;
struct Component_GUI_AtkComponentListItemRenderer;
struct Component_GUI_AtkComponentNode;
struct Component_GUI_AtkComponentNumericInput;
struct Component_GUI_AtkComponentRadioButton;
struct Component_GUI_AtkComponentScrollBar;
struct Component_GUI_AtkComponentSlider;
struct Component_GUI_AtkComponentTextInput;
struct Component_GUI_AtkComponentTextNineGrid;
struct Component_GUI_AtkComponentTreeList;
struct Component_GUI_AtkComponentWindow;
struct Component_GUI_AtkCounterNode;
struct Component_GUI_AtkCursor;
struct Component_GUI_AtkDragDropManager;
struct Component_GUI_AtkEvent;
struct Component_GUI_AtkEventListener;
struct Component_GUI_AtkEventListenerUnk1;
struct Component_GUI_AtkEventManager;
struct Component_GUI_AtkEventTarget;
struct Component_GUI_AtkImageNode;
struct Component_GUI_AtkLinkedList;
struct Component_GUI_AtkModule;
struct Component_GUI_AtkEventInterface;
struct Component_GUI_AtkNineGridNode;
struct Component_GUI_AtkResNode;
struct Component_GUI_AtkStage;
struct Component_GUI_AtkTextNode;
struct Component_GUI_AtkTexture;
struct Component_GUI_AtkTextureResource;
struct Component_GUI_AtkTimelineManager;
struct Component_GUI_AtkTooltipManager;
struct Component_GUI_AtkUldAsset;
struct Component_GUI_AtkUldComponentDataBase;
struct Component_GUI_AtkUldComponentDataButton;
struct Component_GUI_AtkUldComponentDataCheckBox;
struct Component_GUI_AtkUldComponentDataDragDrop;
struct Component_GUI_AtkUldComponentDataDropDownList;
struct Component_GUI_AtkUldComponentDataGaugeBar;
struct Component_GUI_AtkUldComponentDataGuildLeveCard;
struct Component_GUI_AtkUldComponentDataHoldButton;
struct Component_GUI_AtkUldComponentDataIcon;
struct Component_GUI_AtkUldComponentDataIconText;
struct Component_GUI_AtkUldComponentDataInputBase;
struct Component_GUI_AtkUldComponentDataJournalCanvas;
struct Component_GUI_AtkUldComponentDataList;
struct Component_GUI_AtkUldComponentDataListItemRenderer;
struct Component_GUI_AtkUldComponentDataMap;
struct Component_GUI_AtkUldComponentDataMultipurpose;
struct Component_GUI_AtkUldComponentDataNumericInput;
struct Component_GUI_AtkUldComponentDataPreview;
struct Component_GUI_AtkUldComponentDataRadioButton;
struct Component_GUI_AtkUldComponentDataScrollBar;
struct Component_GUI_AtkUldComponentDataSlider;
struct Component_GUI_AtkUldComponentDataTextInput;
struct Component_GUI_AtkUldComponentDataTextNineGrid;
struct Component_GUI_AtkUldComponentDataTreeList;
struct Component_GUI_AtkUldComponentDataWindow;
struct Component_GUI_AtkUldComponentInfo;
struct Component_GUI_AtkUldManager;
struct Component_GUI_AtkUldObjectInfo;
struct Component_GUI_AtkUldPart;
struct Component_GUI_AtkUldPartsList;
struct Component_GUI_AtkUldWidgetInfo;
struct Component_GUI_AtkUnitBase;
struct Component_GUI_AtkUnitList;
struct Component_GUI_AtkUnitManager;
struct Component_GUI_AtkValue;
struct Component_GUI_ExtendArrayData;
struct Component_GUI_InventoryNumberArray;
struct Component_GUI_NumberArrayData;
struct Component_GUI_StringArrayData;
struct Component_GUI_ULD_AtkUldComponentDataTab;
struct Client_UI_AddonActionBar;
struct Client_UI_AddonActionBarBase;
struct Client_UI_ActionBarSlot;
struct Client_UI_AddonActionCross;
struct Client_UI_AddonActionBarX;
struct Client_UI_AddonActionDoubleCrossBase;
struct Client_UI_AddonAOZNotebook;
struct Client_UI_AddonBank;
struct Client_UI_AddonCastBar;
struct Client_UI_AddonCharacterInspect;
struct Client_UI_AddonChatLogPanel;
struct Client_UI_AddonChocoboBreedTraining;
struct Client_UI_AddonContentsFinder;
struct Client_UI_AddonContentsFinderConfirm;
struct Client_UI_AddonContextIconMenu;
struct Client_UI_AddonContextMenu;
struct Client_UI_AddonEnemyList;
struct Client_UI_AddonExp;
struct Client_UI_AddonFateReward;
struct Client_UI_AddonFieldMarker;
struct Client_UI_AddonWaymarkInfo;
struct Client_UI_AddonGathering;
struct Client_UI_AddonGatheringMasterpiece;
struct Client_UI_AddonGcArmyCapture;
struct Client_UI_AddonGcArmyExpedition;
struct Client_UI_AddonGcArmyExpeditionResult;
struct Client_UI_AddonGrandCompanySupplyList;
struct Client_UI_AddonGrandCompanySupplyReward;
struct Client_UI_AddonGuildLeve;
struct Client_UI_AddonHudLayoutScreen;
struct Client_UI_MoveableAddonInfoStruct;
struct Client_UI_AddonHudLayoutWindow;
struct Client_UI_AddonImage;
struct Client_UI_AddonInventoryRetainerLarge;
struct Client_UI_AddonItemInspectionList;
struct Client_UI_AddonItemInspectionResult;
struct Client_UI_AddonItemSearchResult;
struct Client_UI_AddonJournalDetail;
struct Client_UI_AddonJournalResult;
struct Client_UI_AddonLookingForGroupDetail;
struct Client_UI_AddonLotteryDaily;
struct Client_UI_AddonMacro;
struct Client_UI_AddonMaterializeDialog;
struct Client_UI_AddonMateriaRetrieveDialog;
struct Client_UI_AddonNamePlate;
struct Client_UI_AddonNeedGreed;
struct Client_UI_AddonPartyList;
struct Client_UI_AddonRaceChocoboResult;
struct Client_UI_AddonRaidFinder;
struct Client_UI_RaidFinderDutyEntry;
struct Client_UI_AddonRecipeNote;
struct Client_UI_AddonReconstructionBox;
struct Client_UI_AddonItemDonationInfo;
struct Client_UI_AddonRelicNoteBook;
struct Client_UI_AddonRepair;
struct Client_UI_AddonRequest;
struct Client_UI_AddonRetainerGrid0;
struct Client_UI_AddonRetainerList;
struct Client_UI_AddonRetainerSell;
struct Client_UI_AddonRetainerTaskAsk;
struct Client_UI_AddonRetainerTaskList;
struct Client_UI_AddonRetainerTaskResult;
struct Client_UI_AddonSalvageDialog;
struct Client_UI_AddonSalvageItemSelector;
struct Client_UI_AddonSatisfactionSupply;
struct Client_UI_AddonDeliveryItemInfo;
struct Client_UI_AddonSelectIconString;
struct Client_UI_AddonSelectOk;
struct Client_UI_AddonSelectString;
struct Client_UI_AddonSelectYesno;
struct Client_UI_AddonShopCardDialog;
struct Client_UI_SynthesisAtkValues;
struct Client_UI_AddonSynthesis;
struct Client_UI_AddonTalk;
struct Client_UI_AddonTeleport;
struct Client_UI_AddonWeeklyBingo;
struct Client_UI_DutySlotList;
struct Client_UI_DutySlot;
struct Client_UI_StringThing;
struct Client_UI_StickerSlotList;
struct Client_UI_StickerSlot;
struct Client_UI_AddonWeeklyPuzzle;
struct Client_UI_PopupMenu;
struct Client_UI_RaptureAtkModule;
struct Client_UI_RaptureAtkUnitManager;
struct Client_UI_UI3DModule;
struct Client_UI_UIModule;
struct Client_UI_Shell_RaptureShellModule;
struct Client_UI_Misc_CharaView;
struct Client_UI_Misc_ConfigModule;
struct Client_UI_Misc_FieldMarkerModule;
struct Client_UI_Misc_GamePresetPoint;
struct Client_UI_Misc_FieldMarkerPreset;
struct Client_UI_Misc_ItemFinderModule;
struct Client_UI_Misc_ItemFinderModuleResult;
struct Client_UI_Misc_ItemFinderModuleRetainerResult;
struct Client_UI_Misc_ItemOrderModule;
struct Client_UI_Misc_ItemOrderModuleSorter;
struct Client_UI_Misc_ItemOrderModuleSorterRetainerEntry;
struct Client_UI_Misc_ItemOrderModuleSorterItemEntry;
struct Client_UI_Misc_ItemOrderModuleSorterPreviousOrderEntry;
struct Client_UI_Misc_ItemOrderModuleSorterSortFunctionEntry;
struct Client_UI_Misc_PronounModule;
struct Client_UI_Misc_RaptureGearsetModule;
struct Client_UI_Misc_RaptureHotbarModule;
struct Client_UI_Misc_HotBars;
struct Client_UI_Misc_HotBar;
struct Client_UI_Misc_HotBarSlots;
struct Client_UI_Misc_HotBarSlot;
struct Client_UI_Misc_SavedHotBars;
struct Client_UI_Misc_RaptureLogModule;
struct Client_UI_Misc_LogMessageSource;
struct Client_UI_Misc_RaptureLogModuleTab;
struct Client_UI_Misc_RaptureMacroModule;
struct Client_UI_Misc_RaptureTextModule;
struct Client_UI_Misc_RaptureUiDataModule;
struct Client_UI_Misc_RecommendEquipModule;
struct Client_UI_Misc_RetainerCommentModule;
struct Client_UI_Misc_ScreenLog;
struct Client_UI_Misc_UiSavePackModule;
struct Client_UI_Misc_UserFileManager_UserFileEvent;
struct Client_UI_Info_InfoModule;
struct Client_UI_Info_InfoProxy11;
struct Client_UI_Info_InfoProxy17;
struct Client_UI_Info_InfoProxy20;
struct Client_UI_Info_InfoProxy21;
struct Client_UI_Info_InfoProxy22;
struct Client_UI_Info_InfoProxy23;
struct Client_UI_Info_InfoProxy24;
struct Client_UI_Info_InfoProxy25;
struct Client_UI_Info_InfoProxy26;
struct Client_UI_Info_InfoProxy27;
struct Client_UI_Info_InfoProxy28;
struct Client_UI_Info_InfoProxyBlacklist;
struct Client_UI_Info_InfoProxyCircle;
struct Client_UI_Info_InfoProxyCircleFinder;
struct Client_UI_Info_InfoProxyCircleList;
struct Client_UI_Info_InfoProxyCommonList;
struct Client_UI_Info_InfoProxyCrossRealm;
struct Client_UI_Info_CrossRealmGroup;
struct Client_UI_Info_CrossRealmMember;
struct Client_UI_Info_InfoProxyCrossWorldLinkShell;
struct Client_UI_Info_InfoProxyCrossWorldLinkShellMember;
struct Client_UI_Info_InfoProxyFreeCompany;
struct Client_UI_Info_InfoProxyFreeCompanyCreate;
struct Client_UI_Info_InfoProxyFreeCompanyMember;
struct Client_UI_Info_InfoProxyFriendList;
struct Client_UI_Info_InfoProxyInterface;
struct Client_UI_Info_InfoProxyInvitedInterface;
struct Client_UI_Info_InfoProxyPageInterface;
struct Client_UI_Info_InfoProxyInvitedList;
struct Client_UI_Info_InfoProxyItemSearch;
struct Client_UI_Info_InfoProxyLetter;
struct Client_UI_Info_InfoProxyLinkShell;
struct Client_UI_Info_InfoProxyLinkShellChat;
struct Client_UI_Info_InfoProxyLinkshellMember;
struct Client_UI_Info_InfoProxyParty;
struct Client_UI_Info_InfoProxyPartyInvite;
struct Client_UI_Info_InfoProxySearch;
struct Client_UI_Info_InfoProxySearchComment;
struct Client_UI_Agent_AgentAozContentBriefing;
struct Client_UI_Agent_AozContentData;
struct Client_UI_Agent_AozArrangementData;
struct Client_UI_Agent_AozWeeklyReward;
struct Client_UI_Agent_AgentAozContentResult;
struct Client_UI_Agent_AozContentResultData;
struct Client_UI_Agent_AgentArchiveItem;
struct Client_UI_Agent_ArchiveItem;
struct Client_UI_Agent_AgentBannerInterface;
struct Client_UI_Agent_AgentBannerMIP;
struct Client_UI_Agent_AgentBannerParty;
struct Client_UI_Agent_AgentCharaCard;
struct Client_UI_Agent_AgentCompanyCraftMaterial;
struct Client_UI_Agent_AgentContentsFinder;
struct Client_UI_Agent_ContentsFinderRewards;
struct Client_UI_Agent_ItemReward;
struct Client_UI_Agent_AgentContext;
struct Client_UI_Agent_ContextMenu;
struct Client_UI_Agent_ContextMenuTarget;
struct Client_UI_Agent_AgentCraftActionSimulator;
struct Client_UI_Agent_ProgressEfficiencyCalculations;
struct Client_UI_Agent_QualityEfficiencyCalculations;
struct Client_UI_Agent_EfficiencyCalculation;
struct Client_UI_Agent_ProgressEfficiencyCalculation;
struct Client_UI_Agent_QualityEfficiencyCalculation;
struct Client_UI_Agent_AgentDeepDungeonInspect;
struct Client_UI_Agent_AgentDeepDungeonMap;
struct Client_UI_Agent_AgentDeepDungeonMapData;
struct Client_UI_Agent_AgentDeepDungeonStatus;
struct Client_UI_Agent_DeepDungeonStatusData;
struct Client_UI_Agent_DeepDungeonStatusItem;
struct Client_UI_Agent_AgentAirshipExplorationResult;
struct Client_UI_Agent_AgentSubmersibleExplorationResult;
struct Client_UI_Agent_AgentExplorationResultInterface;
struct Client_UI_Agent_ExplorationResultData;
struct Client_UI_Agent_ExplorationResultDataItemReturn;
struct Client_UI_Agent_AgentFieldMarker;
struct Client_UI_Agent_AgentFishGuide;
struct Client_UI_Agent_AgentFreeCompany;
struct Client_UI_Agent_AgentFreeCompanyCrestEditor;
struct Client_UI_Agent_AgentFreeCompanyProfile;
struct Client_UI_Agent_CrestData;
struct Client_UI_Agent_AgentGatheringNote;
struct Client_UI_Agent_AgentGcArmyExpedition;
struct Client_UI_Agent_GcArmyExpeditionData;
struct Client_UI_Agent_MissionInfo;
struct Client_UI_Agent_AgentGrandCompanySupply;
struct Client_UI_Agent_SupplyProvisioningData;
struct Client_UI_Agent_SupplyProvisioningItem;
struct Client_UI_Agent_GrandCompanyItem;
struct Client_UI_Agent_AgentHUD;
struct Client_UI_Agent_HudPartyMemberEnmity;
struct Client_UI_Agent_HudPartyMember;
struct Client_UI_Agent_AgentInspect;
struct Client_UI_Agent_AgentInventoryContext;
struct Client_UI_Agent_AgentItemSearch;
struct Client_UI_Agent_AgentLobby;
struct Client_UI_Agent_AgentLoot;
struct Client_UI_Agent_AgentMap;
struct Client_UI_Agent_MapMarkerBase;
struct Client_UI_Agent_FlagMapMarker;
struct Client_UI_Agent_MapMarkerInfo;
struct Client_UI_Agent_TempMapMarker;
struct Client_UI_Agent_MiniMapMarker;
struct Client_UI_Agent_OpenMapInfo;
struct Client_UI_Agent_AgentMiragePrismPrismBox;
struct Client_UI_Agent_MiragePrismPrismBoxData;
struct Client_UI_Agent_PrismBoxItem;
struct Client_UI_Agent_PrismBoxCrystallizeItem;
struct Client_UI_Agent_AgentMJIPouch;
struct Client_UI_Agent_PouchInventoryItem;
struct Client_UI_Agent_AgentModule;
struct Client_UI_Agent_AgentMonsterNote;
struct Client_UI_Agent_AgentReadyCheck;
struct Client_UI_Agent_AgentRecipeNote;
struct Client_UI_Agent_AgentReconstructionBox;
struct Client_UI_Agent_AgentItemDonationInfo;
struct Client_UI_Agent_AgentRequest;
struct Client_UI_Agent_AgentRetainerItemTransfer;
struct Client_UI_Agent_AgentRetainerItemTransferData;
struct Client_UI_Agent_AgentRetainerList;
struct Client_UI_Agent_AgentRevive;
struct Client_UI_Agent_AgentSalvage;
struct Client_UI_Agent_SalvageResult;
struct Client_UI_Agent_AgentSatisfactionSupply;
struct Client_UI_Agent_AgentDeliveryItemInfo;
struct Client_UI_Agent_BalloonInfo;
struct Client_UI_Agent_BalloonSlot;
struct Client_UI_Agent_AgentScreenLog;
struct Client_UI_Agent_AgentTeleport;
struct Client_System_String_Utf8String;
struct Client_System_Scheduler_Resource_SchedulerResource;
struct Client_System_Scheduler_Resource_SchedulerResourceManagement;
struct Client_System_Scheduler_Base_SchedulerState;
struct Client_System_Scheduler_Base_SchedulerTimeline;
struct Client_System_Scheduler_Base_TimelineController;
struct Client_System_Resource_ResourceGraph;
struct Client_System_Resource_ResourceManager;
struct Client_System_Resource_Handle_MaterialResourceHandle;
struct Client_System_Resource_Handle_ResourceHandle;
struct Client_System_Resource_Handle_SkeletonResourceHandle;
struct Client_System_Resource_Handle_TextureResourceHandle;
struct Client_System_Memory_IMemorySpace;
struct Client_System_Framework_Framework;
struct Client_System_Framework_GameVersion;
struct Client_System_File_FileDescriptor;
struct Client_System_Configuration_DevConfig;
struct Client_System_Configuration_SystemConfig;
struct Client_LayoutEngine_LayoutManager;
struct Client_LayoutEngine_IndoorAreaLayoutData;
struct Client_LayoutEngine_IndoorFloorLayoutData;
struct Client_LayoutEngine_LayoutWorld;
struct Client_Graphics_ByteColor;
struct Client_Graphics_Ray;
struct Client_Graphics_ReferencedClassBase;
struct Client_Graphics_Transform;
struct Client_Graphics_Vfx_VfxData;
struct Client_Graphics_Scene_Camera;
struct Client_Graphics_Scene_CameraManager;
struct Client_Graphics_Scene_CharacterBase;
struct Client_Graphics_Scene_Demihuman;
struct Client_Graphics_Scene_DrawObject;
struct Client_Graphics_Scene_EnvLocation;
struct Client_Graphics_Scene_EnvScene;
struct Client_Graphics_Scene_EnvSpace;
struct Client_Graphics_Scene_Human;
struct Client_Graphics_Scene_Monster;
struct Client_Graphics_Scene_Object;
struct Client_Graphics_Scene_Weapon;
struct Client_Graphics_Scene_World;
struct Client_Graphics_Physics_BoneSimulators;
struct Client_Graphics_Physics_BonePhysicsModule;
struct Client_Graphics_Physics_BoneSimulator;
struct Client_Graphics_Render_Notifier;
struct Client_Graphics_Render_Texture;
struct Client_Graphics_Render_Camera;
struct Client_Graphics_Render_Manager;
struct Client_Graphics_Render_OffscreenRenderingManager;
struct Client_Graphics_Render_PartialSkeleton;
struct Client_Graphics_Render_RenderTargetManager;
struct Client_Graphics_Render_ShadowCamera;
struct Client_Graphics_Render_Skeleton;
struct Client_Graphics_Render_SubView;
struct Client_Graphics_Render_View;
struct Client_Graphics_Kernel_CVector;
struct Client_Graphics_Kernel_Device;
struct Client_Graphics_Kernel_PixelShader;
struct Client_Graphics_Kernel_ShaderNode;
struct Client_Graphics_Kernel_ShaderPackage;
struct Client_Graphics_Kernel_SwapChain;
struct Client_Graphics_Kernel_VertexShader;
struct Client_Graphics_Environment_EnvManager;
struct Client_Graphics_Environment_EnvSimulator;
struct Client_Graphics_Environment_EnvSoundState;
struct Client_Graphics_Environment_EnvState;
struct Client_Graphics_Animation_AnimationResourceHandle;
struct Client_Game_ActionManager;
struct Client_Game_RecastDetail;
struct Client_Game_ComboDetail;
struct Client_Game_ActionTimelineManager;
struct Client_Game_ActionTimelineDriver;
struct Client_Game_Balloon;
struct Client_Game_Camera;
struct Client_Game_LobbyCamera;
struct Client_Game_Camera3;
struct Client_Game_LowCutCamera;
struct Client_Game_Camera4;
struct Client_Game_CameraBase;
struct Client_Game_GameMain;
struct Client_Game_InventoryManager;
struct Client_Game_InventoryContainer;
struct Client_Game_InventoryItem;
struct Client_Game_JobGaugeManager;
struct Client_Game_MonsterNoteManager;
struct Client_Game_MonsterNoteRankInfo;
struct Client_Game_RankData;
struct Client_Game_QuestManager;
struct Client_Game_RaceChocoboManager;
struct Client_Game_ReconstructionBoxManager;
struct Client_Game_ReconstructionBoxData;
struct Client_Game_RetainerManager;
struct Client_Game_SatisfactionSupplyManager;
struct Client_Game_Status;
struct Client_Game_StatusManager;
struct Client_Game_UI_AreaInstance;
struct Client_Game_UI_Buddy;
struct Client_Game_UI_Cabinet;
struct Client_Game_UI_ContentsFinder;
struct Client_Game_UI_ContentsNote;
struct Client_Game_UI_Hate;
struct Client_Game_UI_HateInfo;
struct Client_Game_UI_Hater;
struct Client_Game_UI_HaterInfo;
struct Client_Game_UI_Hotbar;
struct Client_Game_UI_LimitBreakController;
struct Client_Game_UI_Loot;
struct Client_Game_UI_LootItem;
struct Client_Game_UI_Map;
struct Client_Game_UI_MarkingController;
struct Client_Game_UI_FieldMarker;
struct Client_Game_UI_MobHunt;
struct Client_Game_UI_PlayerState;
struct Client_Game_UI_PvPProfile;
struct Client_Game_UI_RecipeNote;
struct Client_Game_UI_RelicNote;
struct Client_Game_UI_Revive;
struct Client_Game_UI_RouletteController;
struct Client_Game_UI_Telepo;
struct Client_Game_UI_TeleportInfo;
struct Client_Game_UI_SelectUseTicketInvoker;
struct Client_Game_UI_TerritoryInfo;
struct Client_Game_UI_UIState;
struct Client_Game_UI_WeaponState;
struct Client_Game_Object_ClientObjectManager;
struct Client_Game_Object_GameObjectID;
struct Client_Game_Object_GameObject;
struct Client_Game_Object_GameObjectManager;
struct Client_Game_MJI_IslandState;
struct Client_Game_MJI_MJIWorkshops;
struct Client_Game_MJI_MJIGranaries;
struct Client_Game_MJI_MJIFarmPasture;
struct Client_Game_MJI_MJIFarmState;
struct Client_Game_MJI_MJIManager;
struct Client_Game_MJI_MJIBuildingPlacement;
struct Client_Game_MJI_MJILandmarkPlacement;
struct Client_Game_MJI_MJIFarmPasturePlacement;
struct Client_Game_MJI_MJIPastureHandler;
struct Client_Game_MJI_MJIAnimal;
struct Client_Game_MJI_MJIMinionSlot;
struct Client_Game_InstanceContent_ContentDirector;
struct Client_Game_InstanceContent_InstanceContentDeepDungeon;
struct Client_Game_InstanceContent_InstanceContentDirector;
struct Client_Game_InstanceContent_PublicContentDirector;
struct Client_Game_Housing_HousingManager;
struct Client_Game_Housing_HousingTerritory;
struct Client_Game_Housing_HousingWorkshopTerritory;
struct Client_Game_Housing_HousingWorkshopAirshipData;
struct Client_Game_Housing_HousingWorkshopSubmersibleData;
struct Client_Game_Housing_HousingWorkshopAirshipSubData;
struct Client_Game_Housing_HousingWorkshopGatheredData;
struct Client_Game_Housing_HousingWorkshopSubmersibleSubData;
struct Client_Game_Group_GroupManager;
struct Client_Game_Group_PartyMember;
struct Client_Game_Gauge_JobGauge;
struct Client_Game_Gauge_WhiteMageGauge;
struct Client_Game_Gauge_ScholarGauge;
struct Client_Game_Gauge_AstrologianGauge;
struct Client_Game_Gauge_SageGauge;
struct Client_Game_Gauge_BlackMageGauge;
struct Client_Game_Gauge_SummonerGauge;
struct Client_Game_Gauge_RedMageGauge;
struct Client_Game_Gauge_BardGauge;
struct Client_Game_Gauge_MachinistGauge;
struct Client_Game_Gauge_DancerGauge;
struct Client_Game_Gauge_MonkGauge;
struct Client_Game_Gauge_DragoonGauge;
struct Client_Game_Gauge_NinjaGauge;
struct Client_Game_Gauge_SamuraiGauge;
struct Client_Game_Gauge_ReaperGauge;
struct Client_Game_Gauge_DarkKnightGauge;
struct Client_Game_Gauge_PaladinGauge;
struct Client_Game_Gauge_WarriorGauge;
struct Client_Game_Gauge_GunbreakerGauge;
struct Client_Game_Fate_FateContext;
struct Client_Game_Fate_FateDirector;
struct Client_Game_Fate_FateManager;
struct Client_Game_Event_Director;
struct Client_Game_Event_DirectorModule;
struct Client_Game_Event_EventFramework;
struct Client_Game_Event_EventGPoseController;
struct Client_Game_Event_EventHandler;
struct Client_Game_Event_EventHandlerInfo;
struct Client_Game_Event_EventId;
struct Client_Game_Event_EventHandlerModule;
struct Client_Game_Event_EventSceneModule;
struct Client_Game_Event_EventSceneModuleUsualImpl;
struct Client_Game_Event_EventSceneModuleImplBase;
struct Client_Game_Event_EventState;
struct Client_Game_Event_LuaActor;
struct Client_Game_Event_LuaActorModule;
struct Client_Game_Event_LuaEventHandler;
struct Client_Game_Event_ModuleBase;
struct Client_Game_Control_CameraManager;
struct Client_Game_Control_Control;
struct Client_Game_Control_InputManager;
struct Client_Game_Control_TargetSystem;
struct Client_Game_Control_GameObjectArray;
struct Client_Game_Character_BattleChara;
struct Client_Game_Character_Character;
struct Client_Game_Character_CharacterManager;
struct Client_Game_Character_Companion;
struct Client_Game_Character_DrawDataContainer;
struct Client_Game_Character_DrawObjectData;
struct Client_Game_Character_CustomizeData;
struct Client_Game_Character_WeaponModelId;
struct Client_Game_Character_EquipmentModelId;
struct Client_Game_Character_Ornament;
struct Application_Network_WorkDefinitions_BeastReputationWork;
struct Application_Network_WorkDefinitions_DailyQuestWork;
struct Application_Network_WorkDefinitions_LeveWork;
struct Application_Network_WorkDefinitions_QuestWork;
struct Application_Network_WorkDefinitions_TrackingWork;
struct Common_Configuration_ConfigProperties_UIntProperties;
struct Common_Configuration_ConfigProperties_FloatProperties;
struct Common_Configuration_ConfigProperties_StringProperties;
struct Component_Excel_ExcelModule_ExcelModuleVTable;
struct Component_Excel_ExcelModuleInterface_ExcelModuleInterfaceVTable;
struct Component_GUI_AgentInterface_AgentInterfaceVTable;
struct Component_GUI_AtkComponentBase_AtkComponentBaseVTable;
struct Component_GUI_AtkComponentList_ListItem;
struct Component_GUI_AtkLinkedList_Node;
struct Component_GUI_AtkModule_AtkModuleVTable;
struct Component_GUI_AtkResNode_AtkResNodeVTable;
struct Component_GUI_AtkTexture_AtkTextureVTable;
struct Component_GUI_AtkTooltipManager_AtkTooltipArgs;
struct Component_GUI_AtkTooltipManager_AtkTooltipInfo;
struct Component_GUI_AtkUldManager_DuplicateNodeInfo;
struct Component_GUI_AtkUldManager_DuplicateObjectList;
struct Component_GUI_AtkUnitBase_AtkUnitBaseVTable;
struct Component_GUI_AtkUnitManager_AtkUnitManagerVTable;
struct Component_GUI_InventoryNumberArray_Item;
struct Client_UI_AddonActionBarBase_AddonActionBarBaseVTable;
struct Client_UI_AddonAOZNotebook_SpellbookBlock;
struct Client_UI_AddonAOZNotebook_ActiveActions;
struct Client_UI_AddonBank_AddonBankVTable;
struct Client_UI_AddonContentsFinder_AddonContentsFinderVTable;
struct Client_UI_AddonContentsFinderConfirm_AddonContentsFinderConfirmVTable;
struct Client_UI_AddonInventoryRetainerLarge_AddonInventoryRetainerLargeVTable;
struct Client_UI_AddonLotteryDaily_GameTileRow;
struct Client_UI_AddonLotteryDaily_GameTileBoard;
struct Client_UI_AddonLotteryDaily_LaneTileSelector;
struct Client_UI_AddonLotteryDaily_GameNumberRow;
struct Client_UI_AddonLotteryDaily_GameBoardNumbers;
struct Client_UI_AddonNamePlate_BakePlateRenderer;
struct Client_UI_AddonNamePlate_BakeData;
struct Client_UI_AddonNamePlate_NamePlateObject;
struct Client_UI_AddonNeedGreed_LootItemInfo;
struct Client_UI_AddonPartyList_PartyMembers;
struct Client_UI_AddonPartyList_TrustMembers;
struct Client_UI_AddonPartyList_PartyListMemberStruct;
struct Client_UI_AddonRaceChocoboResult_AddonRaceChocoboResultVTable;
struct Client_UI_AddonRelicNoteBook_TargetNode;
struct Client_UI_AddonRetainerGrid0_AddonRetainerGrid0VTable;
struct Client_UI_AddonRetainerList_AddonRetainerListVTable;
struct Client_UI_AddonRetainerTaskAsk_AddonRetainerTaskAskVTable;
struct Client_UI_AddonRetainerTaskList_AddonRetainerTaskListVTable;
struct Client_UI_AddonRetainerTaskResult_AddonRetainerTaskResultVTable;
struct Client_UI_AddonSalvageItemSelector_SalvageItem;
struct Client_UI_AddonSelectIconString_PopupMenuDerive;
struct Client_UI_AddonSelectString_PopupMenuDerive;
struct Client_UI_AddonSelectString_AddonSelectStringVTable;
struct Client_UI_AddonSynthesis_CraftEffect;
struct Client_UI_AddonWeeklyPuzzle_RewardPanelItem;
struct Client_UI_AddonWeeklyPuzzle_GameTileBoard;
struct Client_UI_AddonWeeklyPuzzle_GameTileRow;
struct Client_UI_AddonWeeklyPuzzle_GameTileItem;
struct Client_UI_RaptureAtkModule_NamePlateInfo;
struct Client_UI_UI3DModule_MapInfo;
struct Client_UI_UI3DModule_ObjectInfo;
struct Client_UI_UI3DModule_MemberInfo;
struct Client_UI_UI3DModule_UnkInfo;
struct Client_UI_UIModule_Unk1;
struct Client_UI_UIModule_Unk2;
struct Client_UI_UIModule_Unk3;
struct Client_UI_UIModule_UIModuleVTable;
struct Client_UI_Misc_CharaView_UnkStruct;
struct Client_UI_Misc_ConfigModule_Option;
struct Client_UI_Misc_RaptureGearsetModule_Gearsets;
struct Client_UI_Misc_RaptureGearsetModule_GearsetItem;
struct Client_UI_Misc_RaptureGearsetModule_GearsetEntry;
struct Client_UI_Misc_SavedHotBars_SavedHotBarClassJob;
struct Client_UI_Misc_SavedHotBars_SavedHotBarClassJobBars;
struct Client_UI_Misc_SavedHotBars_SavedHotBarClassJobSlots;
struct Client_UI_Misc_RaptureMacroModule_Macro;
struct Client_UI_Misc_RaptureMacroModule_MacroPage;
struct Client_UI_Misc_RetainerCommentModule_RetainerCommentList;
struct Client_UI_Misc_RetainerCommentModule_RetainerComment;
struct Client_UI_Misc_UiSavePackModule_UiSavePackModuleVTable;
struct Client_UI_Misc_UserFileManager_UserFileEvent_UserFileEventVTable;
struct Client_UI_Info_InfoProxyCircle_Unk1;
struct Client_UI_Info_InfoProxyCommonList_CharacterDict;
struct Client_UI_Info_InfoProxyCommonList_CharacterArray;
struct Client_UI_Info_InfoProxyCrossWorldLinkShell_CWLSEntry;
struct Client_UI_Info_InfoProxyFreeCompany_RankData;
struct Client_UI_Info_InfoProxyFriendList_StrBuf;
struct Client_UI_Info_InfoProxyInterface_InfoProxyInterfaceVTable;
struct Client_UI_Info_InfoProxyInvitedInterface_Unk18;
struct Client_UI_Info_InfoProxyItemSearch_Entry;
struct Client_UI_Info_InfoProxyLetter_Letter;
struct Client_UI_Info_InfoProxyLinkShell_Entry;
struct Client_UI_Agent_AgentBannerInterface_Storage;
struct Client_UI_Agent_AgentCharaCard_Storage;
struct Client_UI_Agent_AgentDeepDungeonInspect_AgentDeepDungeonInspectData;
struct Client_UI_Agent_AgentFreeCompany_FreeCompanyActionTimer;
struct Client_UI_Agent_AgentFreeCompanyProfile_FCProfile;
struct Client_UI_Agent_AgentInspect_FreeCompanyData;
struct Client_UI_Agent_AgentInspect_ItemData;
struct Client_UI_Agent_AgentMJIPouch_PouchIndexInfo;
struct Client_UI_Agent_AgentMJIPouch_PouchInventoryData;
struct Client_UI_Agent_AgentReadyCheck_ReadyCheckEntry;
struct Client_UI_Agent_AgentRetainerItemTransferData_DuplicateItemEntry;
struct Client_UI_Agent_AgentRetainerList_RetainerList;
struct Client_UI_Agent_AgentRetainerList_Retainer;
struct Client_UI_Agent_AgentSalvage_SalvageListItem;
struct Client_System_Scheduler_Resource_SchedulerResource_ResourceName;
struct Client_System_Scheduler_Base_SchedulerTimeline_SchedulerTimelineVTable;
struct Client_System_Resource_ResourceGraph_CategoryContainer;
struct Client_System_Resource_Handle_SkeletonResourceHandle_SkeletonHeader;
struct Client_System_Memory_IMemorySpace_IMemorySpaceVTable;
struct Client_Graphics_Scene_CharacterBase_CharacterBaseVTable;
struct Client_Graphics_Scene_Object_ObjectVTable;
struct Client_Graphics_Kernel_ShaderNode_ShaderPass;
struct Client_Graphics_Kernel_ShaderPackage_MaterialElement;
struct Client_Graphics_Kernel_ShaderPackage_ConstantSamplerUnknown;
struct Client_Game_QuestManager_QuestListArray;
struct Client_Game_RetainerManager_RetainerList;
struct Client_Game_UI_Buddy_BuddyMember;
struct Client_Game_UI_Map_QuestMarkerArray;
struct Client_Game_UI_Map_MapMarkerInfo;
struct Client_Game_UI_MobHunt_KillCounts;
struct Client_Game_UI_RecipeNote_RecipeData;
struct Client_Game_UI_RecipeNote_RecipeEntry;
struct Client_Game_Object_GameObject_GameObjectVTable;
struct Client_Game_InstanceContent_InstanceContentDeepDungeon_DeepDungeonPartyInfo;
struct Client_Game_InstanceContent_InstanceContentDeepDungeon_DeepDungeonItemInfo;
struct Client_Game_InstanceContent_InstanceContentDeepDungeon_DeepDungeonChestInfo;
struct Client_Game_Character_Character_CastInfo;
struct Client_Game_Character_Character_ForayInfo;
struct Client_Game_Character_Character_MountContainer;
struct Client_Game_Character_Character_CompanionContainer;
struct Client_Game_Character_Character_OrnamentContainer;
struct Client_Game_Character_Character_CharacterVTable;
struct Client_UI_AddonPartyList_PartyListMemberStruct_StatusIcons;
struct Client_UI_Misc_SavedHotBars_SavedHotBarClassJobBars_SavedHotBarClassJobBar;
struct Client_UI_Misc_SavedHotBars_SavedHotBarClassJobSlots_SavedHotBarClassJobSlot;
struct Client_UI_Misc_RaptureMacroModule_Macro_Lines;
struct Client_UI_Info_InfoProxyCommonList_CharacterDict_Entry;
struct Client_UI_Info_InfoProxyCommonList_CharacterArray_Entry;
struct Client_UI_Info_InfoProxyLetter_Letter_ItemAttachment;
struct Client_UI_Agent_AgentBannerInterface_Storage_CharacterData;
struct Client_UI_Agent_AgentInspect_ItemData_ColorRGB;
struct Client_Game_QuestManager_QuestListArray_Quest;
struct Client_Game_RetainerManager_RetainerList_Retainer;

// Definitions
struct Common_Math_Quaternion /* Size=0x10 */
{
    /* 0x00 */ float X;
    /* 0x04 */ float Y;
    /* 0x08 */ float Z;
    /* 0x0C */ float W;
};

struct Common_Math_Rectangle /* Size=0x10 */
{
    /* 0x00 */ float Left;
    /* 0x04 */ float Top;
    /* 0x08 */ float Right;
    /* 0x0C */ float Bottom;
};

struct Common_Math_Vector2 /* Size=0x8 */
{
    /* 0x0 */ float X;
    /* 0x4 */ float Y;
};

struct Common_Math_Vector3 /* Size=0x10 */
{
    /* 0x00 */ float X;
    /* 0x04 */ float Y;
    /* 0x08 */ float Z;
    /*      */ byte _gap_0xC[0x4];
};

struct Common_Math_Vector4 /* Size=0x10 */
{
    /* 0x00 */ float X;
    /* 0x04 */ float Y;
    /* 0x08 */ float Z;
    /* 0x0C */ float W;
};

struct Common_Lua_lua_State /* Size=0xB0 */
{
    /*      */ byte _gap_0x0[0xB0];
};

struct Common_Lua_LuaState /* Size=0x28 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ Common_Lua_lua_State* State;
    /* 0x10 */ bool GCEnabled;
    /*      */ byte _gap_0x11;
    /*      */ byte _gap_0x12[0x2];
    /*      */ byte _gap_0x14[0x4];
    /* 0x18 */ __int64 LastGCRestart;
    /* 0x20 */ __int64 db_errorfb;
};

enum Common_Lua_LuaType0x4 /* Size=0x4 */
{
    Nil = 0,
    Boolean = 1,
    LightUserData = 2,
    Number = 3,
    String = 4,
    Table = 5,
    Function = 6,
    UserData = 7,
    Thread = 8,
    Proto = 9,
    Upval = 10,
    None = -1
};

struct Common_Lua_LuaThread /* Size=0x28 */
{
    /* 0x00 */ Common_Lua_LuaState LuaState;
};

struct StdVector_System_Int32 /* Size=0x18 */
{
    /* 0x00 */ __int32* First;
    /* 0x08 */ __int32* Last;
    /* 0x10 */ __int32* End;
};

struct StdVector_System_Byte /* Size=0x18 */
{
    /* 0x00 */ byte* First;
    /* 0x08 */ byte* Last;
    /* 0x10 */ byte* End;
};

struct Common_Log_LogModule /* Size=0x80 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ unsigned __int64 LocalPlayerContentId;
    /*      */ byte _gap_0x10[0x4];
    /* 0x14 */ __int32 LogMessageCount;
    /*      */ byte _gap_0x18[0x30];
    /* 0x48 */ StdVector_System_Int32 LogMessageIndex;
    /* 0x60 */ StdVector_System_Byte LogMessageData;
    /*      */ byte _gap_0x78[0x8];
};

enum Common_Configuration_ConfigType0x4 /* Size=0x4 */
{
    Unused = 0,
    Category = 1,
    UInt = 2,
    Float = 3,
    String = 4
};

struct Common_Configuration_ConfigProperties_UIntProperties /* Size=0xC */
{
    /* 0x0 */ unsigned __int32 DefaultValue;
    /* 0x4 */ unsigned __int32 MinValue;
    /* 0x8 */ unsigned __int32 MaxValue;
};

struct Common_Configuration_ConfigProperties_FloatProperties /* Size=0xC */
{
    /* 0x0 */ float DefaultValue;
    /* 0x4 */ float MinValue;
    /* 0x8 */ float MaxValue;
};

struct Client_System_String_Utf8String /* Size=0x68 */
{
    /* 0x00 */ byte* StringPtr;
    /* 0x08 */ __int64 BufSize;
    /* 0x10 */ __int64 BufUsed;
    /* 0x18 */ __int64 StringLength;
    /* 0x20 */ byte IsEmpty;
    /* 0x21 */ byte IsUsingInlineBuffer;
    /* 0x22 */ byte InlineBuffer[0x40];
    /*      */ byte _gap_0x62[0x2];
    /*      */ byte _gap_0x64[0x4];
};

struct Common_Configuration_ConfigProperties_StringProperties /* Size=0x8 */
{
    /* 0x0 */ Client_System_String_Utf8String* DefaultValue;
};

struct Common_Configuration_ConfigProperties /* Size=0x10 */
{
    union {
    /* 0x00 */ Common_Configuration_ConfigProperties_UIntProperties UInt;
    /* 0x00 */ Common_Configuration_ConfigProperties_FloatProperties Float;
    /* 0x00 */ Common_Configuration_ConfigProperties_StringProperties String;
    } _union_0x0;
    /*      */ byte _gap_0x8[0x8];
};

struct Common_Configuration_ConfigValue /* Size=0x8 */
{
    union {
    /* 0x0 */ unsigned __int32 UInt;
    /* 0x0 */ float Float;
    /* 0x0 */ Client_System_String_Utf8String* String;
    } _union_0x0;
};

struct Common_Configuration_ChangeEventInterface /* Size=0x18 */
{
    /* 0x00 */ void* vtbl;
    /* 0x08 */ Common_Configuration_ChangeEventInterface* Next;
    /* 0x10 */ Common_Configuration_ConfigBase* Owner;
};

struct Common_Configuration_ConfigBase /* Size=0x110 */
{
    /* 0x000 */ void* vtbl;
    /* 0x008 */ Common_Configuration_ChangeEventInterface* Listener;
    /*       */ byte _gap_0x10[0x4];
    /* 0x014 */ unsigned __int32 ConfigCount;
    /* 0x018 */ Common_Configuration_ConfigEntry* ConfigEntry;
    /*       */ byte _gap_0x20[0x30];
    /* 0x050 */ Client_System_String_Utf8String UnkString;
    /*       */ byte _gap_0xB8[0x58];
};

struct Common_Configuration_ConfigEntry /* Size=0x38 */
{
    /* 0x00 */ Common_Configuration_ConfigProperties Properties;
    /* 0x10 */ byte* Name;
    /* 0x18 */ __int32 Type;
    /*      */ byte _gap_0x1C[0x4];
    /* 0x20 */ Common_Configuration_ConfigValue Value;
    /* 0x28 */ Common_Configuration_ConfigBase* Owner;
    /* 0x30 */ unsigned __int32 Index;
    /* 0x34 */ unsigned __int32 _Padding;
};

struct Common_Configuration_DevConfig /* Size=0x110 */
{
    /* 0x000 */ Common_Configuration_ConfigBase ConfigBase;
};

struct Common_Configuration_SystemConfig /* Size=0x450 */
{
    /* 0x000 */ Common_Configuration_ConfigBase ConfigBase;
    /*       */ byte _gap_0x110[0x8];
    /* 0x118 */ Common_Configuration_ConfigBase UiConfig;
    /* 0x228 */ Common_Configuration_ConfigBase UiControlConfig;
    /*       */ byte _gap_0x338[0x118];
};

struct Common_Component_BGCollision_BGCollisionModule /* Size=0xC0 */
{
    /*      */ byte _gap_0x0[0xC0];
};

struct System_Numerics_Vector3 /* Size=0xC */
{
    /* 0x0 */ float X;
    /* 0x4 */ float Y;
    /* 0x8 */ float Z;
};

struct Common_Component_BGCollision_Object /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct Common_Component_BGCollision_RaycastHit /* Size=0x50 */
{
    /* 0x00 */ System_Numerics_Vector3 Point;
    /* 0x0C */ System_Numerics_Vector3 V1;
    /* 0x18 */ System_Numerics_Vector3 V2;
    /* 0x24 */ System_Numerics_Vector3 V3;
    /* 0x30 */ System_Numerics_Vector3 Unk30;
    /* 0x3C */ __int32 Flags;
    /* 0x40 */ __int32 Unk40;
    /* 0x44 */ float Distance;
    /* 0x48 */ Common_Component_BGCollision_Object* Object;
};

struct Component_Excel_ExcelModule_ExcelModuleVTable /* Size=0x20 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ __int64 GetSheetByIndex;
    /* 0x10 */ __int64 GetSheetByName;
    /* 0x18 */ __int64 LoadSheet;
};

struct Component_Excel_ExcelModule /* Size=0x818 */
{
    /* 0x000 */ Component_Excel_ExcelModule_ExcelModuleVTable* VTable;
    /*       */ byte _gap_0x8[0x810];
};

struct Component_Exd_ExdModule /* Size=0x28 */
{
    /*      */ byte _gap_0x0[0x20];
    /* 0x20 */ Component_Excel_ExcelModule* ExcelModule;
};

struct Component_Excel_ExcelModuleInterface_ExcelModuleInterfaceVTable /* Size=0x18 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ __int64 GetSheetByIndex;
    /* 0x10 */ __int64 GetSheetByName;
};

struct Component_Excel_ExcelModuleInterface /* Size=0x10 */
{
    /* 0x00 */ Component_Excel_ExcelModuleInterface_ExcelModuleInterfaceVTable* VTable;
    /* 0x08 */ Component_Exd_ExdModule* ExdModule;
};

struct Component_Excel_ExcelSheet /* Size=0x110 */
{
    union {
    /* 0x000 */ void* vtbl;
    /* 0x000 */ void** vfunc;
    } _union_0x0;
    /*       */ byte _gap_0x8[0x8];
    /* 0x010 */ byte* SheetName;
    /*       */ byte _gap_0x18[0x8];
    /* 0x020 */ unsigned __int32 RowCount;
    /*       */ byte _gap_0x24[0x4];
    /*       */ byte _gap_0x28[0xE8];
};

struct Component_GUI_AtkEventInterface /* Size=0x8 */
{
    /* 0x0 */ void** vtbl;
};

struct Component_GUI_AgentInterface_AgentInterfaceVTable /* Size=0x48 */
{
    /* 0x00 */ __int64 ReceiveEvent;
    /*      */ byte _gap_0x8[0x10];
    /* 0x18 */ __int64 Show;
    /* 0x20 */ __int64 Hide;
    /* 0x28 */ __int64 IsAgentActive;
    /*      */ byte _gap_0x30[0x10];
    /* 0x40 */ __int64 GetAddonID;
};

struct Client_UI_UIModule_UIModuleVTable /* Size=0x670 */
{
    /*       */ byte _gap_0x0[0x28];
    /* 0x028 */ __int64 GetExcelModule;
    /* 0x030 */ __int64 GetRaptureTextModule;
    /* 0x038 */ __int64 GetRaptureAtkModule;
    /* 0x040 */ __int64 GetRaptureAtkModule2;
    /* 0x048 */ __int64 GetRaptureShellModule;
    /* 0x050 */ __int64 GetPronounModule;
    /* 0x058 */ __int64 GetRaptureLogModule;
    /* 0x060 */ __int64 GetRaptureMacroModule;
    /* 0x068 */ __int64 GetRaptureHotbarModule;
    /* 0x070 */ __int64 GetRaptureGearsetModule;
    /* 0x078 */ __int64 GetAcquaintanceModule;
    /* 0x080 */ __int64 GetItemOrderModule;
    /* 0x088 */ __int64 GetItemFinderModule;
    /* 0x090 */ __int64 GetConfigModule;
    /* 0x098 */ __int64 GetAddonConfig;
    /* 0x0A0 */ __int64 GetUiSavePackModule;
    /* 0x0A8 */ __int64 GetLetterDataModule;
    /* 0x0B0 */ __int64 GetRetainerTaskDataModule;
    /* 0x0B8 */ __int64 GetFlagStatusModule;
    /*       */ byte _gap_0xC0[0x10];
    /* 0x0D0 */ __int64 GetRaptureUiDataModule;
    /*       */ byte _gap_0xD8[0x18];
    /* 0x0F0 */ __int64 GetRaptureTeleportHistory;
    /*       */ byte _gap_0xF8[0x8];
    /* 0x100 */ __int64 GetRecommendEquipModule;
    /*       */ byte _gap_0x108[0x8];
    /* 0x110 */ __int64 GetInfoModule;
    /*       */ byte _gap_0x118[0x8];
    /* 0x120 */ __int64 GetAgentModule;
    /*       */ byte _gap_0x128[0x8];
    /* 0x130 */ __int64 GetUI3DModule;
    /*       */ byte _gap_0x138[0x50];
    /* 0x188 */ __int64 GetFieldMarkerModule;
    /*       */ byte _gap_0x190[0x38];
    /* 0x1C8 */ __int64 GetRetainerCommentModule;
    /*       */ byte _gap_0x1D0[0x30];
    /* 0x200 */ __int64 GetUIInputData;
    /* 0x208 */ __int64 GetUIInputModule;
    /*       */ byte _gap_0x210[0x8];
    /* 0x218 */ __int64 GetLogFilterConfig;
    /*       */ byte _gap_0x220[0x38];
    /* 0x258 */ __int64 EnterGPose;
    /* 0x260 */ __int64 ExitGPose;
    /*       */ byte _gap_0x268[0x8];
    /* 0x270 */ __int64 EnterIdleCam;
    /* 0x278 */ __int64 ExitIdleCam;
    /*       */ byte _gap_0x280[0x1E8];
    /* 0x468 */ __int64 ToggleUi;
    /*       */ byte _gap_0x470[0x48];
    /* 0x4B8 */ __int64 ShowGoldSaucerReward;
    /* 0x4C0 */ __int64 HideGoldSaucerReward;
    /* 0x4C8 */ __int64 ShowTextRelicAtma;
    /*       */ byte _gap_0x4D0[0x30];
    /* 0x500 */ __int64 ShowHousingHarvest;
    /*       */ byte _gap_0x508[0x18];
    /* 0x520 */ __int64 ShowImage;
    /* 0x528 */ __int64 ShowText;
    /* 0x530 */ __int64 ShowTextChain;
    /* 0x538 */ __int64 ShowAreaText;
    /* 0x540 */ __int64 ShowPoisonText;
    /* 0x548 */ __int64 ShowErrorText;
    /* 0x550 */ __int64 ShowTextClassChange;
    /* 0x558 */ __int64 ShowGetAction;
    /* 0x560 */ __int64 ShowLocationTitle;
    /*       */ byte _gap_0x568[0x18];
    /* 0x580 */ __int64 ShowGrandCompany1;
    /*       */ byte _gap_0x588[0x10];
    /* 0x598 */ __int64 ShowStreak;
    /* 0x5A0 */ __int64 ShowAddonKillStreakForManeuvers;
    /* 0x5A8 */ __int64 ShowBalloonMessage;
    /* 0x5B0 */ __int64 ShowBattleTalk;
    /* 0x5B8 */ __int64 ShowBattleTalkImage;
    /*       */ byte _gap_0x5C0[0x8];
    /* 0x5C8 */ __int64 ShowBattleTalkSound;
    /*       */ byte _gap_0x5D0[0x20];
    /* 0x5F0 */ __int64 ExecuteMainCommand;
    /* 0x5F8 */ __int64 IsMainCommandUnlocked;
    /*       */ byte _gap_0x600[0x68];
    /* 0x668 */ __int64 Test205;
};

struct Client_UI_UIModule_Unk1 /* Size=0x8 */
{
    union {
    /* 0x0 */ void* vtbl;
    /* 0x0 */ void** vfunc;
    } _union_0x0;
};

struct Client_UI_UIModule_Unk2 /* Size=0x8 */
{
    union {
    /* 0x0 */ void* vtbl;
    /* 0x0 */ void** vfunc;
    } _union_0x0;
};

struct Client_UI_UIModule_Unk3 /* Size=0x8 */
{
    union {
    /* 0x0 */ void* vtbl;
    /* 0x0 */ void** vfunc;
    } _union_0x0;
};

struct Client_UI_Misc_RaptureTextModule /* Size=0xE58 */
{
    /*       */ byte _gap_0x0[0xE58];
};

struct Client_UI_Misc_LogMessageSource /* Size=0x10 */
{
    /* 0x00 */ unsigned __int64 ContentId;
    /* 0x08 */ __int32 LogMessageIndex;
    /* 0x0C */ __int16 World;
    /* 0x0E */ __int16 ChatType;
};

struct Client_UI_Misc_RaptureLogModule /* Size=0x3480 */
{
    /* 0x0000 */ Common_Log_LogModule LogModule;
    /*        */ byte _gap_0x80[0x68];
    /* 0x00E8 */ Component_Excel_ExcelModuleInterface* ExcelModuleInterface;
    /* 0x00F0 */ Client_UI_Misc_RaptureTextModule* RaptureTextModule;
    /*        */ byte _gap_0xF8[0x430];
    /* 0x0528 */ byte ChatTabs[0x2DC8];
    /*        */ byte _gap_0x32F0[0x180];
    /* 0x3470 */ Client_UI_Misc_LogMessageSource* MsgSourceArray;
    /* 0x3478 */ __int32 MsgSourceArrayLength;
    /*        */ byte _gap_0x347C[0x4];
};

struct Client_UI_Misc_UserFileManager_UserFileEvent_UserFileEventVTable /* Size=0x68 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ __int64 ReadFile;
    /* 0x10 */ __int64 WriteFile;
    /*      */ byte _gap_0x18[0x8];
    /* 0x20 */ __int64 GetFileSize;
    /* 0x28 */ __int64 GetDataSize;
    /* 0x30 */ __int64 GetFileVersion;
    /* 0x38 */ __int64 GetFileType;
    /*      */ byte _gap_0x40[0x8];
    /* 0x48 */ __int64 GetHasChanges;
    /* 0x50 */ __int64 GetIsSavePending;
    /* 0x58 */ __int64 SetCharacterContentId;
    /* 0x60 */ __int64 SaveFile;
};

struct Client_UI_Misc_UserFileManager_UserFileEvent /* Size=0x40 */
{
    /* 0x00 */ Client_UI_Misc_UserFileManager_UserFileEvent_UserFileEventVTable* VTable;
    /* 0x08 */ unsigned __int64 CharacterContentID;
    /* 0x10 */ __int64 UserFileManager;
    /* 0x18 */ __int64 TempDataPtr;
    /* 0x20 */ unsigned __int32 TempDataBytesWritten;
    /*      */ byte _gap_0x24[0x4];
    /*      */ byte _gap_0x28[0x8];
    /* 0x30 */ byte FileName[0xC];
    /* 0x3C */ byte Unk3C;
    /* 0x3D */ byte IsSavePending;
    /* 0x3E */ byte HasChanges;
    /* 0x3F */ byte IsVirtual;
};

struct Client_UI_Misc_HotBars /* Size=0xFC00 */
{
    /*        */ byte _gap_0x0[0xFC00];
};

struct Client_UI_Misc_SavedHotBars /* Size=0x15720 */
{
    /*         */ byte _gap_0x0[0x15720];
};

struct Client_UI_Misc_RaptureHotbarModule /* Size=0x27278 */
{
    /* 0x00000 */ Client_UI_Misc_UserFileManager_UserFileEvent UserFileEvent;
    /*         */ byte _gap_0x40[0x8];
    /* 0x00048 */ Client_UI_UIModule* UiModule;
    /*         */ byte _gap_0x50[0x40];
    /* 0x00090 */ Client_UI_Misc_HotBars HotBar;
    /*         */ byte _gap_0xFC90[0x1CE0];
    /*         */ byte _gap_0x11970[0x4];
    /* 0x11974 */ Client_UI_Misc_SavedHotBars SavedClassJob;
    /*         */ byte _gap_0x27094[0x4];
    /*         */ byte _gap_0x27098[0x1E0];
};

struct Client_UI_Misc_RaptureGearsetModule_Gearsets /* Size=0xAF2C */
{
    /*        */ byte _gap_0x0[0xAF28];
    /*        */ byte _gap_0xAF28[0x4];
};

struct Client_UI_Misc_RaptureGearsetModule /* Size=0xB670 */
{
    union {
    /* 0x0000 */ Client_UI_Misc_UserFileManager_UserFileEvent UserFileEvent;
    /* 0x0000 */ void* vtbl;
    } _union_0x0;
    /*        */ byte _gap_0x8[0x40];
    /* 0x0048 */ Client_UI_Misc_RaptureGearsetModule_Gearsets Gearset;
    /*        */ byte _gap_0xAF74[0x4];
    /*        */ byte _gap_0xAF78[0x6F8];
};

struct Client_UI_Misc_UiSavePackModule_UiSavePackModuleVTable /* Size=0x70 */
{
    /*      */ byte _gap_0x0[0x68];
    /* 0x68 */ __int64 GetSegment;
};

struct Client_UI_Misc_UiSavePackModule /* Size=0x50 */
{
    union {
    /* 0x00 */ Client_UI_Misc_UserFileManager_UserFileEvent UserFileEvent;
    /* 0x00 */ Client_UI_Misc_UiSavePackModule_UiSavePackModuleVTable* VTable;
    } _union_0x0;
    /*      */ byte _gap_0x8[0x48];
};

enum Client_Game_InventoryType0x4 /* Size=0x4 */
{
    Inventory1 = 0,
    Inventory2 = 1,
    Inventory3 = 2,
    Inventory4 = 3,
    EquippedItems = 1000,
    Currency = 2000,
    Crystals = 2001,
    Mail = 2003,
    KeyItems = 2004,
    HandIn = 2005,
    DamagedGear = 2007,
    Examine = 2009,
    ArmoryOffHand = 3200,
    ArmoryHead = 3201,
    ArmoryBody = 3202,
    ArmoryHands = 3203,
    ArmoryWaist = 3204,
    ArmoryLegs = 3205,
    ArmoryFeets = 3206,
    ArmoryEar = 3207,
    ArmoryNeck = 3208,
    ArmoryWrist = 3209,
    ArmoryRings = 3300,
    ArmorySoulCrystal = 3400,
    ArmoryMainHand = 3500,
    SaddleBag1 = 4000,
    SaddleBag2 = 4001,
    PremiumSaddleBag1 = 4100,
    PremiumSaddleBag2 = 4101,
    RetainerPage1 = 10000,
    RetainerPage2 = 10001,
    RetainerPage3 = 10002,
    RetainerPage4 = 10003,
    RetainerPage5 = 10004,
    RetainerPage6 = 10005,
    RetainerPage7 = 10006,
    RetainerEquippedItems = 11000,
    RetainerGil = 12000,
    RetainerCrystals = 12001,
    RetainerMarket = 12002,
    FreeCompanyPage1 = 20000,
    FreeCompanyPage2 = 20001,
    FreeCompanyPage3 = 20002,
    FreeCompanyPage4 = 20003,
    FreeCompanyPage5 = 20004,
    FreeCompanyGil = 22000,
    FreeCompanyCrystals = 22001,
    HousingExteriorAppearance = 25000,
    HousingExteriorPlacedItems = 25001,
    HousingInteriorAppearance = 25002,
    HousingInteriorPlacedItems1 = 25003,
    HousingInteriorPlacedItems2 = 25004,
    HousingInteriorPlacedItems3 = 25005,
    HousingInteriorPlacedItems4 = 25006,
    HousingInteriorPlacedItems5 = 25007,
    HousingInteriorPlacedItems6 = 25008,
    HousingInteriorPlacedItems7 = 25009,
    HousingInteriorPlacedItems8 = 25010,
    HousingExteriorStoreroom = 27000,
    HousingInteriorStoreroom1 = 27001,
    HousingInteriorStoreroom2 = 27002,
    HousingInteriorStoreroom3 = 27003,
    HousingInteriorStoreroom4 = 27004,
    HousingInteriorStoreroom5 = 27005,
    HousingInteriorStoreroom6 = 27006,
    HousingInteriorStoreroom7 = 27007,
    HousingInteriorStoreroom8 = 27008
};

enum Client_Game_InventoryItem_ItemFlags0x1 /* Size=0x1 */
{
    None = 0,
    HQ = 1,
    CompanyCrestApplied = 2,
    Relic = 4,
    Collectable = 8
};

struct Client_Game_InventoryItem /* Size=0x38 */
{
    /* 0x00 */ Client_Game_InventoryType0x4 Container;
    /* 0x04 */ __int16 Slot;
    /*      */ byte _gap_0x6[0x2];
    /* 0x08 */ unsigned __int32 ItemID;
    /* 0x0C */ unsigned __int32 Quantity;
    /* 0x10 */ unsigned __int16 Spiritbond;
    /* 0x12 */ unsigned __int16 Condition;
    /* 0x14 */ Client_Game_InventoryItem_ItemFlags0x1 Flags;
    /*      */ byte _gap_0x15;
    /*      */ byte _gap_0x16[0x2];
    /* 0x18 */ unsigned __int64 CrafterContentID;
    /* 0x20 */ unsigned __int16 Materia[0x5];
    /* 0x2A */ byte MateriaGrade[0x5];
    /* 0x2F */ byte Stain;
    /* 0x30 */ unsigned __int32 GlamourID;
    /*      */ byte _gap_0x34[0x4];
};

struct Component_GUI_AtkModule_AtkModuleVTable /* Size=0xD8 */
{
    /*      */ byte _gap_0x0[0x48];
    /* 0x48 */ __int64 GetNumberArrayData;
    /* 0x50 */ __int64 GetStringArrayData;
    /* 0x58 */ __int64 GetExtendArrayData;
    /*      */ byte _gap_0x60[0x70];
    /* 0xD0 */ __int64 IsAddonReady;
};

struct Component_GUI_AtkEventListener /* Size=0x8 */
{
    union {
    /* 0x0 */ void* vtbl;
    /* 0x0 */ void** vfunc;
    } _union_0x0;
};

struct Component_GUI_AtkUnitBase_AtkUnitBaseVTable /* Size=0x190 */
{
    /*       */ byte _gap_0x0[0x18];
    /* 0x018 */ __int64 Open;
    /* 0x020 */ __int64 Close;
    /* 0x028 */ __int64 Show;
    /* 0x030 */ __int64 Hide;
    /* 0x038 */ __int64 SetPosition;
    /*       */ byte _gap_0x40[0x138];
    /* 0x178 */ __int64 OnSetup;
    /*       */ byte _gap_0x180[0x8];
    /* 0x188 */ __int64 OnUpdate;
};

struct Component_GUI_AtkTexture_AtkTextureVTable /* Size=0x8 */
{
    /* 0x0 */ __int64 Destroy;
};

enum Client_System_Resource_ResourceCategory0x4 /* Size=0x4 */
{
    Common = 0,
    BgCommon = 1,
    Bg = 2,
    Cut = 3,
    Chara = 4,
    Shader = 5,
    Ui = 6,
    Sound = 7,
    Vfx = 8,
    UiScript = 9,
    Exd = 10,
    GameScript = 11,
    Music = 12,
    SqpackTest = 18,
    Debug = 19,
    MaxCount = 20
};

struct StdString /* Size=0x20 */
{
    union {
    /* 0x00 */ byte* BufferPtr;
    /* 0x00 */ byte Buffer[0x10];
    } _union_0x0;
    /*      */ byte _gap_0x8[0x8];
    /* 0x10 */ unsigned __int64 Length;
    /* 0x18 */ unsigned __int64 Capacity;
};

struct Client_System_Resource_Handle_ResourceHandle /* Size=0xB0 */
{
    union {
    /* 0x00 */ void* vtbl;
    /* 0x00 */ void** vfunc;
    } _union_0x0;
    /* 0x08 */ Client_System_Resource_ResourceCategory0x4 Category;
    /* 0x0C */ unsigned __int32 FileType;
    /* 0x10 */ unsigned __int32 Id;
    /*      */ byte _gap_0x14[0x4];
    /*      */ byte _gap_0x18[0x10];
    /* 0x28 */ unsigned __int32 FileSize;
    /* 0x2C */ unsigned __int32 FileSize2;
    /*      */ byte _gap_0x30[0x4];
    /* 0x34 */ unsigned __int32 FileSize3;
    /*      */ byte _gap_0x38[0x10];
    /* 0x48 */ StdString FileName;
    /*      */ byte _gap_0x68[0x40];
    /*      */ byte _gap_0xA8[0x4];
    /* 0xAC */ unsigned __int32 RefCount;
};

struct Client_System_Resource_Handle_TextureResourceHandle /* Size=0x140 */
{
    /* 0x000 */ Client_System_Resource_Handle_ResourceHandle ResourceHandle;
    /*       */ byte _gap_0xB0[0x90];
};

struct Client_Graphics_Render_Notifier /* Size=0x18 */
{
    /* 0x00 */ void* vtbl;
    /* 0x08 */ Client_Graphics_Render_Notifier* Next;
    /* 0x10 */ Client_Graphics_Render_Notifier* Prev;
};

enum Client_Graphics_Render_TextureFormat0x4 /* Size=0x4 */
{
    R8G8B8A8 = 5200,
    D24S8 = 16976
};

struct Client_Graphics_Render_Texture /* Size=0xC0 */
{
    /* 0x00 */ void* vtbl;
    /*      */ byte _gap_0x8[0x18];
    /* 0x20 */ Client_Graphics_Render_Notifier Notifier;
    /* 0x38 */ unsigned __int32 Width;
    /* 0x3C */ unsigned __int32 Height;
    /* 0x40 */ unsigned __int32 Width2;
    /* 0x44 */ unsigned __int32 Height2;
    /* 0x48 */ unsigned __int32 Width3;
    /* 0x4C */ unsigned __int32 Height3;
    /* 0x50 */ unsigned __int32 Depth;
    /* 0x54 */ byte MipLevel;
    /* 0x55 */ byte Unk_55;
    /* 0x56 */ byte Unk_56;
    /* 0x57 */ byte Unk_57;
    /* 0x58 */ Client_Graphics_Render_TextureFormat0x4 TextureFormat;
    /* 0x5C */ unsigned __int32 Flags;
    /* 0x60 */ byte Unk_60;
    /*      */ byte _gap_0x61;
    /*      */ byte _gap_0x62[0x2];
    /*      */ byte _gap_0x64[0x4];
    /* 0x68 */ void* D3D11Texture2D;
    /* 0x70 */ void* D3D11ShaderResourceView;
    /*      */ byte _gap_0x78[0x48];
};

struct Component_GUI_AtkTextureResource /* Size=0x20 */
{
    /* 0x00 */ unsigned __int32 TexPathHash;
    /* 0x04 */ __int32 IconID;
    /* 0x08 */ Client_System_Resource_Handle_TextureResourceHandle* TexFileResourceHandle;
    /* 0x10 */ Client_Graphics_Render_Texture* KernelTextureObject;
    /* 0x18 */ unsigned __int16 Count_1;
    /* 0x1A */ byte Count_2;
    /*      */ byte _gap_0x1B;
    /*      */ byte _gap_0x1C[0x4];
};

enum Component_GUI_TextureType0x1 /* Size=0x1 */
{
    Resource = 1,
    Crest = 2,
    KernelTexture = 3
};

struct Component_GUI_AtkTexture /* Size=0x18 */
{
    union {
    /* 0x00 */ void* vtbl;
    /* 0x00 */ Component_GUI_AtkTexture_AtkTextureVTable* VTable;
    } _union_0x0;
    union {
    /* 0x08 */ Component_GUI_AtkTextureResource* Resource;
    /* 0x08 */ void* Crest;
    /* 0x08 */ Client_Graphics_Render_Texture* KernelTexture;
    } _union_0x8;
    /* 0x10 */ Component_GUI_TextureType0x1 TextureType;
    /* 0x11 */ byte UnkBool_2;
    /*      */ byte _gap_0x12[0x2];
    /*      */ byte _gap_0x14[0x4];
};

struct Component_GUI_AtkUldAsset /* Size=0x20 */
{
    /* 0x00 */ unsigned __int32 Id;
    /*      */ byte _gap_0x4[0x4];
    /* 0x08 */ Component_GUI_AtkTexture AtkTexture;
};

struct Component_GUI_AtkUldPart /* Size=0x10 */
{
    /* 0x00 */ Component_GUI_AtkUldAsset* UldAsset;
    /* 0x08 */ unsigned __int16 U;
    /* 0x0A */ unsigned __int16 V;
    /* 0x0C */ unsigned __int16 Width;
    /* 0x0E */ unsigned __int16 Height;
};

struct Component_GUI_AtkUldPartsList /* Size=0x10 */
{
    /* 0x00 */ unsigned __int32 Id;
    /* 0x04 */ unsigned __int32 PartCount;
    /* 0x08 */ Component_GUI_AtkUldPart* Parts;
};

struct Component_GUI_AtkEventTarget /* Size=0x8 */
{
    union {
    /* 0x0 */ void* vtbl;
    /* 0x0 */ void** vfunc;
    } _union_0x0;
};

struct Component_GUI_AtkResNode_AtkResNodeVTable /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ __int64 Destroy;
};

enum Component_GUI_AtkEventType0x1 /* Size=0x1 */
{
    MouseDown = 3,
    MouseUp = 4,
    MouseMove = 5,
    MouseOver = 6,
    MouseOut = 7,
    MouseClick = 9,
    InputReceived = 12,
    FocusStart = 18,
    FocusStop = 19,
    ButtonPress = 23,
    ButtonRelease = 24,
    ButtonClick = 25,
    ListItemRollOver = 33,
    ListItemRollOut = 34,
    ListItemToggle = 35,
    DragDropRollOver = 52,
    DragDropRollOut = 53,
    DragDropUnk54 = 54,
    DragDropUnk55 = 55,
    IconTextRollOver = 56,
    IconTextRollOut = 57,
    IconTextClick = 58,
    WindowLoad = 66,
    WindowRollOver = 67,
    WindowRollOut = 68,
    WindowChangeScale = 69,
    WindowVisible = 76
};

struct Component_GUI_AtkEvent /* Size=0x31 */
{
    /* 0x00 */ Component_GUI_AtkResNode* Node;
    /* 0x08 */ Component_GUI_AtkEventTarget* Target;
    /* 0x10 */ Component_GUI_AtkEventListener* Listener;
    /* 0x18 */ unsigned __int32 Param;
    /*      */ byte _gap_0x1C[0x4];
    /* 0x20 */ Component_GUI_AtkEvent* NextEvent;
    /* 0x28 */ Component_GUI_AtkEventType0x1 Type;
    /* 0x29 */ byte Unk29;
    /*      */ byte _gap_0x2A[0x2];
    /*      */ byte _gap_0x2C[0x4];
    /* 0x30 */ byte Flags;
};

struct Component_GUI_AtkEventManager /* Size=0x8 */
{
    /* 0x0 */ Component_GUI_AtkEvent* Event;
};

enum Component_GUI_NodeType0x2 /* Size=0x2 */
{
    Res = 1,
    Image = 2,
    Text = 3,
    NineGrid = 4,
    Counter = 5,
    Collision = 8
};

struct Client_Graphics_ByteColor /* Size=0x4 */
{
    /* 0x0 */ byte R;
    /* 0x1 */ byte G;
    /* 0x2 */ byte B;
    /* 0x3 */ byte A;
};

struct Component_GUI_AtkResNode /* Size=0xA8 */
{
    union {
    /* 0x00 */ Component_GUI_AtkEventTarget AtkEventTarget;
    /* 0x00 */ Component_GUI_AtkResNode_AtkResNodeVTable* VTable;
    } _union_0x0;
    /* 0x08 */ unsigned __int32 NodeID;
    /*      */ byte _gap_0xC[0x4];
    /* 0x10 */ void* TimelineObject;
    /* 0x18 */ Component_GUI_AtkEventManager AtkEventManager;
    /* 0x20 */ Component_GUI_AtkResNode* ParentNode;
    /* 0x28 */ Component_GUI_AtkResNode* PrevSiblingNode;
    /* 0x30 */ Component_GUI_AtkResNode* NextSiblingNode;
    /* 0x38 */ Component_GUI_AtkResNode* ChildNode;
    /* 0x40 */ Component_GUI_NodeType0x2 Type;
    /* 0x42 */ unsigned __int16 ChildCount;
    /* 0x44 */ float X;
    /* 0x48 */ float Y;
    /* 0x4C */ float ScaleX;
    /* 0x50 */ float ScaleY;
    /* 0x54 */ float Rotation;
    /* 0x58 */ Common_Math_Matrix2x2 Transform;
    /* 0x68 */ float ScreenX;
    /* 0x6C */ float ScreenY;
    /* 0x70 */ Client_Graphics_ByteColor Color;
    /* 0x74 */ float Depth;
    /* 0x78 */ float Depth_2;
    /* 0x7C */ unsigned __int16 AddRed;
    /* 0x7E */ unsigned __int16 AddGreen;
    /* 0x80 */ unsigned __int16 AddBlue;
    /* 0x82 */ unsigned __int16 AddRed_2;
    /* 0x84 */ unsigned __int16 AddGreen_2;
    /* 0x86 */ unsigned __int16 AddBlue_2;
    /* 0x88 */ byte MultiplyRed;
    /* 0x89 */ byte MultiplyGreen;
    /* 0x8A */ byte MultiplyBlue;
    /* 0x8B */ byte MultiplyRed_2;
    /* 0x8C */ byte MultiplyGreen_2;
    /* 0x8D */ byte MultiplyBlue_2;
    /* 0x8E */ byte Alpha_2;
    /* 0x8F */ byte UnkByte_1;
    /* 0x90 */ unsigned __int16 Width;
    /* 0x92 */ unsigned __int16 Height;
    /* 0x94 */ float OriginX;
    /* 0x98 */ float OriginY;
    /* 0x9C */ unsigned __int16 Priority;
    /* 0x9E */ __int16 Flags;
    union {
    /* 0xA0 */ unsigned __int32 Flags_2;
    /* 0xA0 */ unsigned __int32 DrawFlags;
    } _union_0xA0;
};

struct Component_GUI_AtkUldObjectInfo /* Size=0x10 */
{
    /* 0x00 */ unsigned __int32 Id;
    /* 0x04 */ __int32 NodeCount;
    /* 0x08 */ Component_GUI_AtkResNode** NodeList;
};

struct Component_GUI_AtkUldComponentDataBase /* Size=0x9 */
{
    /* 0x0 */ byte Index;
    /* 0x1 */ byte Up;
    /* 0x2 */ byte Down;
    /* 0x3 */ byte Left;
    /* 0x4 */ byte Right;
    /* 0x5 */ byte Cursor;
    /* 0x6 */ byte OffsetX;
    /* 0x7 */ byte OffsetY;
    /* 0x8 */ byte Unk;
};

struct Component_GUI_AtkUldManager_DuplicateNodeInfo /* Size=0x8 */
{
    /* 0x0 */ unsigned __int32 NodeId;
    /* 0x4 */ unsigned __int32 Count;
};

struct Component_GUI_AtkTimelineManager /* Size=0x58 */
{
    /*      */ byte _gap_0x0[0x58];
};

struct Pointer_Component_GUI_AtkUldManager_DuplicateObjectList /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct Component_GUI_AtkLinkedList_Node_Pointer_Component_GUI_AtkUldManager_DuplicateObjectList /* Size=0x18 */
{
    /* 0x00 */ Pointer_Component_GUI_AtkUldManager_DuplicateObjectList Value;
    /* 0x08 */ Component_GUI_AtkLinkedList_Node_Pointer_Component_GUI_AtkUldManager_DuplicateObjectList* Next;
    /* 0x10 */ Component_GUI_AtkLinkedList_Node_Pointer_Component_GUI_AtkUldManager_DuplicateObjectList* Previous;
};

struct Component_GUI_AtkLinkedList_Pointer_Component_GUI_AtkUldManager_DuplicateObjectList /* Size=0x18 */
{
    /* 0x00 */ Component_GUI_AtkLinkedList_Node_Pointer_Component_GUI_AtkUldManager_DuplicateObjectList* End;
    /* 0x08 */ Component_GUI_AtkLinkedList_Node_Pointer_Component_GUI_AtkUldManager_DuplicateObjectList* Start;
    /* 0x10 */ unsigned __int32 Count;
    /*      */ byte _gap_0x14[0x4];
};

enum Component_GUI_AtkLoadState0x1 /* Size=0x1 */
{
    Unloaded = 0,
    ResourceLoading = 1,
    TexturesLoading = 2,
    Loaded = 3,
    LoadError = 4
};

struct Component_GUI_AtkUldManager /* Size=0x90 */
{
    /* 0x00 */ Component_GUI_AtkUldAsset* Assets;
    /* 0x08 */ Component_GUI_AtkUldPartsList* PartsList;
    /* 0x10 */ Component_GUI_AtkUldObjectInfo* Objects;
    /* 0x18 */ Component_GUI_AtkUldComponentDataBase* ComponentData;
    /* 0x20 */ unsigned __int16 AssetCount;
    /* 0x22 */ unsigned __int16 PartsListCount;
    /* 0x24 */ unsigned __int16 ObjectCount;
    /* 0x26 */ unsigned __int16 DuplicateObjectCount;
    /* 0x28 */ Client_System_Resource_Handle_ResourceHandle* UldResourceHandle;
    /* 0x30 */ Component_GUI_AtkUldManager_DuplicateNodeInfo* DuplicateNodeInfoList;
    /* 0x38 */ Component_GUI_AtkTimelineManager* TimelineManager;
    /* 0x40 */ unsigned __int16 Unk40;
    /* 0x42 */ unsigned __int16 NodeListCount;
    /*      */ byte _gap_0x44[0x4];
    /* 0x48 */ void* AtkResourceRendererManager;
    /* 0x50 */ Component_GUI_AtkResNode** NodeList;
    /* 0x58 */ Component_GUI_AtkLinkedList_Pointer_Component_GUI_AtkUldManager_DuplicateObjectList DuplicateObjects;
    /*      */ byte _gap_0x70[0x8];
    /* 0x78 */ Component_GUI_AtkResNode* RootNode;
    /* 0x80 */ unsigned __int16 RootNodeWidth;
    /* 0x82 */ unsigned __int16 RootNodeHeight;
    /* 0x84 */ unsigned __int16 NodeListSize;
    /* 0x86 */ byte Flags1;
    /*      */ byte _gap_0x87;
    /*      */ byte _gap_0x88;
    /* 0x89 */ Component_GUI_AtkLoadState0x1 LoadedState;
    /*      */ byte _gap_0x8A[0x2];
    /*      */ byte _gap_0x8C[0x4];
};

struct Component_GUI_AtkComponentBase_AtkComponentBaseVTable /* Size=0x58 */
{
    /*      */ byte _gap_0x0[0x50];
    /* 0x50 */ __int64 SetEnabledState;
};

struct Component_GUI_AtkComponentNode /* Size=0xB0 */
{
    /* 0x00 */ Component_GUI_AtkResNode AtkResNode;
    /* 0xA8 */ Component_GUI_AtkComponentBase* Component;
};

struct Component_GUI_AtkComponentBase /* Size=0xC0 */
{
    union {
    /* 0x00 */ Component_GUI_AtkEventListener AtkEventListener;
    /* 0x00 */ Component_GUI_AtkComponentBase_AtkComponentBaseVTable* VTable;
    } _union_0x0;
    /* 0x08 */ Component_GUI_AtkUldManager UldManager;
    /*      */ byte _gap_0x98[0x10];
    /* 0xA8 */ Component_GUI_AtkComponentNode* OwnerNode;
    /*      */ byte _gap_0xB0[0x10];
};

struct Component_GUI_AtkCollisionNode /* Size=0xB8 */
{
    /* 0x00 */ Component_GUI_AtkResNode AtkResNode;
    /* 0xA8 */ unsigned __int16 CollisionType;
    /* 0xAA */ unsigned __int16 Uses;
    /*      */ byte _gap_0xAC[0x4];
    /* 0xB0 */ Component_GUI_AtkComponentBase* LinkedComponent;
};

enum Component_GUI_ValueType0x4 /* Size=0x4 */
{
    Bool = 2,
    Int = 3,
    UInt = 4,
    Float = 5,
    String = 6,
    String8 = 8,
    Vector = 9,
    AllocatedString = 38,
    AllocatedVector = 41
};

struct StdVector_Component_GUI_AtkValue /* Size=0x18 */
{
    /* 0x00 */ Component_GUI_AtkValue* First;
    /* 0x08 */ Component_GUI_AtkValue* Last;
    /* 0x10 */ Component_GUI_AtkValue* End;
};

struct Component_GUI_AtkValue /* Size=0x10 */
{
    /* 0x00 */ Component_GUI_ValueType0x4 Type;
    union {
    /* 0x04 */ __int32 Int;
    /* 0x04 */ unsigned __int32 UInt;
    /* 0x04 */ byte* String;
    /* 0x04 */ float Float;
    /* 0x04 */ byte Byte;
    /* 0x04 */ StdVector_Component_GUI_AtkValue* Vector;
    } _union_0x8;
    /*      */ byte _gap_0xC[0x4];
};

struct Component_GUI_AtkUnitBase /* Size=0x220 */
{
    union {
    /* 0x000 */ Component_GUI_AtkEventListener AtkEventListener;
    /* 0x000 */ Component_GUI_AtkUnitBase_AtkUnitBaseVTable* VTable;
    } _union_0x0;
    /* 0x008 */ byte Name[0x20];
    /* 0x028 */ Component_GUI_AtkUldManager UldManager;
    /*       */ byte _gap_0xB8[0x10];
    /* 0x0C8 */ Component_GUI_AtkResNode* RootNode;
    /* 0x0D0 */ Component_GUI_AtkCollisionNode* WindowCollisionNode;
    /* 0x0D8 */ Component_GUI_AtkCollisionNode* WindowHeaderCollisionNode;
    /* 0x0E0 */ Component_GUI_AtkResNode* CursorTarget;
    /*       */ byte _gap_0xE8[0x20];
    /* 0x108 */ Component_GUI_AtkComponentNode* WindowNode;
    /*       */ byte _gap_0x110[0x50];
    /* 0x160 */ Component_GUI_AtkValue* AtkValues;
    /*       */ byte _gap_0x168[0x18];
    /*       */ byte _gap_0x180[0x2];
    /* 0x182 */ byte Flags;
    /*       */ byte _gap_0x183;
    /*       */ byte _gap_0x184[0x4];
    /*       */ byte _gap_0x188[0x20];
    /*       */ byte _gap_0x1A8[0x4];
    /* 0x1AC */ float Scale;
    /*       */ byte _gap_0x1B0[0x4];
    /*       */ byte _gap_0x1B4[0x2];
    /* 0x1B6 */ byte VisibilityFlags;
    /*       */ byte _gap_0x1B7;
    /*       */ byte _gap_0x1B8[0x4];
    /* 0x1BC */ __int16 X;
    /* 0x1BE */ __int16 Y;
    /*       */ byte _gap_0x1C0[0x8];
    /*       */ byte _gap_0x1C8[0x2];
    /* 0x1CA */ unsigned __int16 AtkValuesCount;
    /* 0x1CC */ unsigned __int16 ID;
    /* 0x1CE */ unsigned __int16 ParentID;
    /* 0x1D0 */ unsigned __int16 UnknownID;
    /* 0x1D2 */ unsigned __int16 ContextMenuParentID;
    /*       */ byte _gap_0x1D4;
    /* 0x1D5 */ byte Alpha;
    /*       */ byte _gap_0x1D6[0x2];
    /* 0x1D8 */ Component_GUI_AtkResNode** CollisionNodeList;
    /* 0x1E0 */ unsigned __int32 CollisionNodeListCount;
    /*       */ byte _gap_0x1E4[0x4];
    /*       */ byte _gap_0x1E8[0x38];
};

struct Component_GUI_AtkArrayData /* Size=0x20 */
{
    /* 0x00 */ void* vtbl;
    /* 0x08 */ __int32 Size;
    /*      */ byte _gap_0xC[0x4];
    /*      */ byte _gap_0x10[0x8];
    /*      */ byte _gap_0x18[0x4];
    /* 0x1C */ byte Unk1C;
    /* 0x1D */ byte Unk1D;
    /* 0x1E */ bool HasModifiedData;
    /* 0x1F */ byte Unk1F;
};

struct Component_GUI_NumberArrayData /* Size=0x28 */
{
    /* 0x00 */ Component_GUI_AtkArrayData AtkArrayData;
    /* 0x20 */ __int32* IntArray;
};

struct Component_GUI_StringArrayData /* Size=0x30 */
{
    /* 0x00 */ Component_GUI_AtkArrayData AtkArrayData;
    /* 0x20 */ byte** StringArray;
    /* 0x28 */ byte** ManagedStringArray;
};

struct Component_GUI_ExtendArrayData /* Size=0x28 */
{
    /* 0x00 */ Component_GUI_AtkArrayData AtkArrayData;
    /* 0x20 */ void** DataArray;
};

struct Component_GUI_AtkArrayDataHolder /* Size=0x50 */
{
    /* 0x00 */ __int16 NumberArrayCount;
    /* 0x02 */ __int16 StringArrayCount;
    /* 0x04 */ __int16 ExtendArrayCount;
    /*      */ byte _gap_0x6[0x2];
    /* 0x08 */ __int16* NumberArrayKeys;
    /* 0x10 */ Component_GUI_NumberArrayData** _NumberArrays;
    /* 0x18 */ Component_GUI_NumberArrayData** NumberArrays;
    /* 0x20 */ __int16* StringArrayKeys;
    /* 0x28 */ Component_GUI_StringArrayData** _StringArrays;
    /* 0x30 */ Component_GUI_StringArrayData** StringArrays;
    /* 0x38 */ __int16* ExtendArrayKeys;
    /* 0x40 */ Component_GUI_ExtendArrayData** _ExtendArrays;
    /* 0x48 */ Component_GUI_ExtendArrayData** ExtendArrays;
};

struct Component_GUI_AtkModule /* Size=0x8240 */
{
    union {
    /* 0x0000 */ void* vtbl;
    /* 0x0000 */ Component_GUI_AtkModule_AtkModuleVTable* VTable;
    } _union_0x0;
    /*        */ byte _gap_0x8[0x1B08];
    /* 0x1B10 */ Component_GUI_AtkUnitBase* IntersectingAddon;
    /* 0x1B18 */ Component_GUI_AtkCollisionNode* IntersectingCollisionNode;
    /*        */ byte _gap_0x1B20[0x28];
    /* 0x1B48 */ Component_GUI_AtkArrayDataHolder AtkArrayDataHolder;
    /*        */ byte _gap_0x1B98[0x66A8];
};

struct Component_GUI_AtkUnitManager_AtkUnitManagerVTable /* Size=0x60 */
{
    /*      */ byte _gap_0x0[0x58];
    /* 0x58 */ __int64 UpdateAddonById;
};

struct Component_GUI_AtkUnitList /* Size=0x810 */
{
    /* 0x000 */ void* vtbl;
    /* 0x008 */ Component_GUI_AtkUnitBase* AtkUnitEntries;
    /*       */ byte _gap_0x10[0x7F8];
    /* 0x808 */ unsigned __int32 Count;
    /*       */ byte _gap_0x80C[0x4];
};

struct Component_GUI_AtkUnitManager /* Size=0x9C88 */
{
    union {
    /* 0x0000 */ Component_GUI_AtkEventListener AtkEventListener;
    /* 0x0000 */ Component_GUI_AtkUnitManager_AtkUnitManagerVTable* VTable;
    } _union_0x0;
    /*        */ byte _gap_0x8[0x28];
    /* 0x0030 */ Component_GUI_AtkUnitList DepthLayerOneList;
    /* 0x0840 */ Component_GUI_AtkUnitList DepthLayerTwoList;
    /* 0x1050 */ Component_GUI_AtkUnitList DepthLayerThreeList;
    /* 0x1860 */ Component_GUI_AtkUnitList DepthLayerFourList;
    /* 0x2070 */ Component_GUI_AtkUnitList DepthLayerFiveList;
    /* 0x2880 */ Component_GUI_AtkUnitList DepthLayerSixList;
    /* 0x3090 */ Component_GUI_AtkUnitList DepthLayerSevenList;
    /* 0x38A0 */ Component_GUI_AtkUnitList DepthLayerEightList;
    /* 0x40B0 */ Component_GUI_AtkUnitList DepthLayerNineList;
    /* 0x48C0 */ Component_GUI_AtkUnitList DepthLayerTenList;
    /* 0x50D0 */ Component_GUI_AtkUnitList DepthLayerElevenList;
    /* 0x58E0 */ Component_GUI_AtkUnitList DepthLayerTwelveList;
    /* 0x60F0 */ Component_GUI_AtkUnitList DepthLayerThirteenList;
    /* 0x6900 */ Component_GUI_AtkUnitList AllLoadedUnitsList;
    /* 0x7110 */ Component_GUI_AtkUnitList FocusedUnitsList;
    /* 0x7920 */ Component_GUI_AtkUnitList UnitList16;
    /* 0x8130 */ Component_GUI_AtkUnitList UnitList17;
    /* 0x8940 */ Component_GUI_AtkUnitList UnitList18;
    /*        */ byte _gap_0x9150[0xB38];
};

struct Client_UI_RaptureAtkUnitManager /* Size=0x9D10 */
{
    /* 0x0000 */ Component_GUI_AtkUnitManager AtkUnitManager;
    /*        */ byte _gap_0x9C88[0x88];
};

struct Client_Game_Object_GameObjectID /* Size=0x8 */
{
    /* 0x0 */ unsigned __int32 ObjectID;
    /* 0x4 */ byte Type;
    /*     */ byte _gap_0x5;
    /*     */ byte _gap_0x6[0x2];
};

struct Client_UI_RaptureAtkModule_NamePlateInfo /* Size=0x248 */
{
    /* 0x000 */ Client_Game_Object_GameObjectID ObjectID;
    /*       */ byte _gap_0x8[0x28];
    /* 0x030 */ Client_System_String_Utf8String Name;
    /* 0x098 */ Client_System_String_Utf8String FcName;
    /* 0x100 */ Client_System_String_Utf8String Title;
    /* 0x168 */ Client_System_String_Utf8String DisplayTitle;
    /* 0x1D0 */ Client_System_String_Utf8String LevelText;
    /*       */ byte _gap_0x238[0x8];
    /* 0x240 */ __int32 Flags;
    /*       */ byte _gap_0x244[0x4];
};

struct Client_UI_RaptureAtkModule /* Size=0x289F8 */
{
    /* 0x00000 */ Component_GUI_AtkModule AtkModule;
    /*         */ byte _gap_0x8240[0x9450];
    /* 0x11690 */ Client_UI_RaptureAtkUnitManager RaptureAtkUnitManager;
    /*         */ byte _gap_0x1B3A0[0x278];
    /* 0x1B618 */ __int32 NameplateInfoCount;
    /*         */ byte _gap_0x1B61C[0x4];
    /* 0x1B620 */ Client_UI_RaptureAtkModule_NamePlateInfo NamePlateInfoArray;
    /*         */ byte _gap_0x1B868[0xD190];
};

struct Client_UI_UIModule /* Size=0xEB180 */
{
    union {
    /* 0x00000 */ void* vtbl;
    /* 0x00000 */ void** vfunc;
    /* 0x00000 */ Client_UI_UIModule_UIModuleVTable* VTable;
    } _union_0x0;
    /* 0x00008 */ Client_UI_UIModule_Unk1 UnkObj1;
    /* 0x00010 */ Client_UI_UIModule_Unk2 UnkObj2;
    /* 0x00018 */ Client_UI_UIModule_Unk3 UnkObj3;
    /* 0x00020 */ void* unk;
    /* 0x00028 */ void* SystemConfig;
    /*         */ byte _gap_0x30[0x718];
    /* 0x00748 */ Client_UI_Misc_RaptureTextModule* RaptureTextModule;
    /*         */ byte _gap_0x750[0x11C8];
    /* 0x01918 */ Client_UI_Misc_RaptureLogModule* RaptureLogModule;
    /*         */ byte _gap_0x1920[0x3478];
    /* 0x04D98 */ void* UserFileManager;
    /*         */ byte _gap_0x4DA0[0x18];
    /* 0x04DB8 */ void* UserFileEvent;
    /*         */ byte _gap_0x4DC0[0x51AA0];
    /* 0x56860 */ Client_UI_Misc_RaptureHotbarModule* RaptureHotbarModule;
    /*         */ byte _gap_0x56868[0x27270];
    /* 0x7DAD8 */ Client_UI_Misc_RaptureGearsetModule* RaptureGearsetModule;
    /*         */ byte _gap_0x7DAE0[0xB668];
    /* 0x89148 */ void* ACQModule;
    /*         */ byte _gap_0x89150[0x10F0];
    /* 0x8A240 */ void* ItemOrderModule;
    /*         */ byte _gap_0x8A248[0xD0];
    /* 0x8A318 */ void* ItemFinderModule;
    /*         */ byte _gap_0x8A320[0x11C8];
    /* 0x8B4E8 */ void* AddonModule;
    /*         */ byte _gap_0x8B4F0[0x60];
    /* 0x8B550 */ void* LogFilterModule;
    /*         */ byte _gap_0x8B558[0x520];
    /* 0x8BA78 */ Client_UI_Misc_UiSavePackModule* UiSavePackModule;
    /*         */ byte _gap_0x8BA80[0x48];
    /* 0x8BAC8 */ void* LetterModule;
    /*         */ byte _gap_0x8BAD0[0xA40];
    /* 0x8C510 */ void* RetainerTaskModule;
    /*         */ byte _gap_0x8C518[0xA8];
    /* 0x8C5C0 */ void* FlagsModule;
    /*         */ byte _gap_0x8C5C8[0x2A0];
    /* 0x8C868 */ void* RCFAVModule;
    /*         */ byte _gap_0x8C870[0x180];
    /* 0x8C9F0 */ void* CraftModule;
    /*         */ byte _gap_0x8C9F8[0x50];
    /* 0x8CA48 */ void* RaptureUIDataModule;
    /*         */ byte _gap_0x8CA50[0x59B8];
    /* 0x92408 */ void* GSModule;
    /*         */ byte _gap_0x92410[0x2C0];
    /* 0x926D0 */ void* RaptureTeleportHistory;
    /*         */ byte _gap_0x926D8[0xB0];
    /* 0x92788 */ void* ITCCModule;
    /*         */ byte _gap_0x92790[0x188];
    /* 0x92918 */ Client_UI_Misc_RecommendEquipModule* RecommendEquipModule;
    /*         */ byte _gap_0x92920[0x78];
    /* 0x92998 */ void* PvpSetModule;
    /*         */ byte _gap_0x929A0[0xB0];
    /* 0x92A50 */ void* EMTHModule;
    /*         */ byte _gap_0x92A58[0x170];
    /* 0x92BC8 */ void* MinionListModule;
    /*         */ byte _gap_0x92BD0[0x90];
    /* 0x92C60 */ void* MUNTListModule;
    /*         */ byte _gap_0x92C68[0x90];
    /* 0x92CF8 */ void* EMJModule;
    /*         */ byte _gap_0x92D00[0xB8];
    /* 0x92DB8 */ void* AOZModule;
    /*         */ byte _gap_0x92DC0[0xD20];
    /* 0x93AE0 */ void* CrossWorldLinkShellModule;
    /*         */ byte _gap_0x93AE8[0x168];
    /* 0x93C50 */ void* AchievementListModule;
    /*         */ byte _gap_0x93C58[0x78];
    /* 0x93CD0 */ void* GroupPoseModule;
    /*         */ byte _gap_0x93CD8[0x128];
    /* 0x93E00 */ void* FieldMarkerModule;
    /*         */ byte _gap_0x93E08[0xC80];
    /* 0x94A88 */ void* MYCNOTModule;
    /*         */ byte _gap_0x94A90[0xA8];
    /* 0x94B38 */ void* ORNMListModule;
    /*         */ byte _gap_0x94B40[0x50];
    /* 0x94B90 */ void* MYCItemModule;
    /*         */ byte _gap_0x94B98[0x110];
    /* 0x94CA8 */ void* GPStampModule;
    /*         */ byte _gap_0x94CB0[0x97E8];
    /* 0x9E498 */ void* MCAGGREModule;
    /*         */ byte _gap_0x9E4A0[0x2A0];
    /* 0x9E740 */ void* RetainerCommentModule;
    /*         */ byte _gap_0x9E748[0x448];
    /* 0x9EB90 */ void* BannerNoteModule;
    /*         */ byte _gap_0x9EB98[0x40];
    /* 0x9EBD8 */ void* ADVNoteModule;
    /*         */ byte _gap_0x9EBE0[0x50];
    /* 0x9EC30 */ void* AKTKNOTModule;
    /*         */ byte _gap_0x9EC38[0xA0];
    /* 0x9ECD8 */ void* VVNOTEModule;
    /*         */ byte _gap_0x9ECE0[0x48];
    /* 0x9ED28 */ void* VVDACTModule;
    /*         */ byte _gap_0x9ED30[0x40];
    /* 0x9ED70 */ void* TofuModule;
    /*         */ byte _gap_0x9ED78[0xD8];
    /* 0x9EE50 */ void* ConfigtModule;
    /*         */ byte _gap_0x9EE58[0xDC60];
    /* 0xACAB8 */ void* RaptureShellModule;
    /*         */ byte _gap_0xACAC0[0x1200];
    /* 0xADCC0 */ void* PronounModule;
    /*         */ byte _gap_0xADCC8[0x3A8];
    /* 0xAE070 */ void* UI3DModule;
    /*         */ byte _gap_0xAE078[0x11BD8];
    /* 0xBFC50 */ Client_UI_RaptureAtkModule* RaptureAtkModule;
    /*         */ byte _gap_0xBFC58[0x289F0];
    /* 0xE8648 */ void* InfoModule;
    /*         */ byte _gap_0xE8650[0x1C78];
    /* 0xEA2C8 */ Client_System_String_Utf8String* String1;
    /*         */ byte _gap_0xEA2D0[0x68];
    /* 0xEA338 */ Client_System_String_Utf8String* String2;
    /*         */ byte _gap_0xEA340[0x70];
    /* 0xEA3B0 */ Client_System_String_Utf8String* String3;
    /*         */ byte _gap_0xEA3B8[0x60];
    /* 0xEA418 */ Client_System_String_Utf8String* String41;
    /*         */ byte _gap_0xEA420[0x60];
    /* 0xEA480 */ Client_System_String_Utf8String* String42;
    union {
    /* 0xEA488 */ Client_System_String_Utf8String* String43;
    /* 0xEA488 */ Client_System_String_Utf8String* String5;
    } _union_0xEA4E8;
    /*         */ byte _gap_0xEA490[0xC0];
    /* 0xEA550 */ Client_System_String_Utf8String* String6;
    /*         */ byte _gap_0xEA558[0x60];
    /* 0xEA5B8 */ Client_System_String_Utf8String* String7;
    /*         */ byte _gap_0xEA5C0[0x60];
    /* 0xEA620 */ void* UIInputData;
    /*         */ byte _gap_0xEA628[0xA18];
    /* 0xEB040 */ void* UIInputModule;
    /*         */ byte _gap_0xEB048[0x138];
};

struct Component_GUI_AgentInterface /* Size=0x28 */
{
    union {
    /* 0x00 */ Component_GUI_AtkEventInterface AtkEventInterface;
    /* 0x00 */ Component_GUI_AgentInterface_AgentInterfaceVTable* VTable;
    } _union_0x0;
    /*      */ byte _gap_0x8[0x8];
    /* 0x10 */ Client_UI_UIModule* UiModule;
    /*      */ byte _gap_0x18[0x8];
    /* 0x20 */ unsigned __int32 AddonId;
    /*      */ byte _gap_0x24[0x4];
};

struct Component_GUI_AgentHudLayout /* Size=0x78 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /*      */ byte _gap_0x28[0x48];
    /* 0x70 */ bool NeedToSave;
    /*      */ byte _gap_0x71;
    /*      */ byte _gap_0x72[0x2];
    /*      */ byte _gap_0x74[0x4];
};

enum Component_GUI_CollisionType0x2 /* Size=0x2 */
{
    Hit = 0,
    Focus = 1,
    Move = 2
};

enum Component_GUI_ComponentType0x1 /* Size=0x1 */
{
    Base = 0,
    Button = 1,
    Window = 2,
    CheckBox = 3,
    RadioButton = 4,
    GaugeBar = 5,
    Slider = 6,
    TextInput = 7,
    NumericInput = 8,
    List = 9,
    DropDownList = 10,
    Tab = 11,
    TreeList = 12,
    ScrollBar = 13,
    ListItemRenderer = 14,
    Icon = 15,
    IconText = 16,
    DragDrop = 17,
    GuildLeveCard = 18,
    TextNineGrid = 19,
    JournalCanvas = 20,
    Multipurpose = 21,
    Map = 22,
    Preview = 23,
    HoldButton = 24
};

struct Component_GUI_AtkTextNode /* Size=0x158 */
{
    /* 0x000 */ Component_GUI_AtkResNode AtkResNode;
    /* 0x0A8 */ unsigned __int32 TextId;
    /* 0x0AC */ Client_Graphics_ByteColor TextColor;
    /* 0x0B0 */ Client_Graphics_ByteColor EdgeColor;
    /* 0x0B4 */ Client_Graphics_ByteColor BackgroundColor;
    /* 0x0B8 */ Client_System_String_Utf8String NodeText;
    /*       */ byte _gap_0x120[0x8];
    /* 0x128 */ void* UnkPtr_1;
    /*       */ byte _gap_0x130[0x8];
    /* 0x138 */ unsigned __int32 SelectStart;
    /* 0x13C */ unsigned __int32 SelectEnd;
    /*       */ byte _gap_0x140[0x8];
    /*       */ byte _gap_0x148[0x2];
    /* 0x14A */ byte LineSpacing;
    /* 0x14B */ byte CharSpacing;
    /* 0x14C */ byte AlignmentFontType;
    /* 0x14D */ byte FontSize;
    /* 0x14E */ byte SheetType;
    /*       */ byte _gap_0x14F;
    /* 0x150 */ unsigned __int16 FontCacheHandle;
    /* 0x152 */ byte TextFlags;
    /* 0x153 */ byte TextFlags2;
    /*       */ byte _gap_0x154[0x4];
};

struct Component_GUI_AtkComponentButton /* Size=0xF0 */
{
    /* 0x00 */ Component_GUI_AtkComponentBase AtkComponentBase;
    /* 0xC0 */ __int16 Left;
    /* 0xC2 */ __int16 Top;
    /* 0xC4 */ __int16 Right;
    /* 0xC6 */ __int16 Bottom;
    /* 0xC8 */ Component_GUI_AtkTextNode* ButtonTextNode;
    /* 0xD0 */ Component_GUI_AtkResNode* ButtonBGNode;
    /*      */ byte _gap_0xD8[0x10];
    /* 0xE8 */ unsigned __int32 Flags;
    /*      */ byte _gap_0xEC[0x4];
};

struct Component_GUI_AtkComponentCheckBox /* Size=0x110 */
{
    /* 0x000 */ Component_GUI_AtkComponentButton AtkComponentButton;
    /*       */ byte _gap_0xF0[0x20];
};

struct Component_GUI_AtkImageNode /* Size=0xB8 */
{
    /* 0x00 */ Component_GUI_AtkResNode AtkResNode;
    /* 0xA8 */ Component_GUI_AtkUldPartsList* PartsList;
    /* 0xB0 */ unsigned __int16 PartId;
    /* 0xB2 */ byte WrapMode;
    /* 0xB3 */ byte Flags;
    /*      */ byte _gap_0xB4[0x4];
};

enum Component_GUI_IconComponentFlags0x4 /* Size=0x4 */
{
    None = 0,
    DyeIcon = 8,
    Macro = 16,
    GlamourIcon = 32,
    Moving = 256,
    Casting = 1024,
    InventoryItem = 2048
};

struct Component_GUI_AtkComponentIcon /* Size=0x118 */
{
    /* 0x000 */ Component_GUI_AtkComponentBase AtkComponentBase;
    /* 0x0C0 */ __int64 IconId;
    /* 0x0C8 */ Component_GUI_AtkUldAsset* Texture;
    /* 0x0D0 */ Component_GUI_AtkResNode* IconAdditionsContainer;
    /* 0x0D8 */ Component_GUI_AtkResNode* ComboBorder;
    /* 0x0E0 */ Component_GUI_AtkResNode* Frame;
    /* 0x0E8 */ __int64 Unknown0E8;
    /* 0x0F0 */ Component_GUI_AtkImageNode* IconImage;
    /* 0x0F8 */ Component_GUI_AtkImageNode* FrameIcon;
    /* 0x100 */ Component_GUI_AtkImageNode* UnknownImageNode;
    /* 0x108 */ Component_GUI_AtkTextNode* QuantityText;
    /*       */ byte _gap_0x110[0x4];
    /* 0x114 */ Component_GUI_IconComponentFlags0x4 Flags;
};

struct Component_GUI_AtkComponentDragDrop /* Size=0x110 */
{
    /* 0x000 */ Component_GUI_AtkComponentBase AtkComponentBase;
    /*       */ byte _gap_0xC0[0x38];
    /* 0x0F8 */ Component_GUI_AtkComponentIcon* AtkComponentIcon;
    /*       */ byte _gap_0x100[0x10];
};

struct Component_GUI_AtkComponentDropDownList /* Size=0x224 */
{
    /* 0x000 */ Component_GUI_AtkComponentBase AtkComponentBase;
    /*       */ byte _gap_0xC0[0x160];
    /*       */ byte _gap_0x220[0x4];
};

struct Component_GUI_AtkComponentGaugeBar /* Size=0x1A8 */
{
    /* 0x000 */ Component_GUI_AtkComponentBase AtkComponentBase;
    /*       */ byte _gap_0xC0[0xE8];
};

struct Component_GUI_AtkComponentGuildLeveCard /* Size=0xF0 */
{
    /* 0x00 */ Component_GUI_AtkComponentBase AtkComponentBase;
    /*      */ byte _gap_0xC0[0x30];
};

struct Component_GUI_AtkComponentHoldButton /* Size=0x120 */
{
    /* 0x000 */ Component_GUI_AtkComponentButton AtkComponentButton;
    /*       */ byte _gap_0xF0[0x30];
};

struct Component_GUI_AtkComponentIconText /* Size=0xE8 */
{
    /* 0x00 */ Component_GUI_AtkComponentBase AtkComponentBase;
    /*      */ byte _gap_0xC0[0x28];
};

struct Component_GUI_AtkComponentInputBase /* Size=0x1B0 */
{
    /* 0x000 */ Component_GUI_AtkComponentBase AtkComponentBase;
    /*       */ byte _gap_0xC0[0x8];
    /* 0x0C8 */ Component_GUI_AtkTextNode* AtkTextNode;
    /*       */ byte _gap_0xD0[0x10];
    /* 0x0E0 */ Client_System_String_Utf8String UnkText1;
    /* 0x148 */ Client_System_String_Utf8String UnkText2;
};

struct Component_GUI_AtkComponentJournalCanvas /* Size=0x520 */
{
    /* 0x000 */ Component_GUI_AtkComponentBase AtkComponentBase;
    /*       */ byte _gap_0xC0[0x460];
};

struct Component_GUI_AtkComponentListItemRenderer /* Size=0x1A8 */
{
    /* 0x000 */ Component_GUI_AtkComponentButton AtkComponentButton;
    /*       */ byte _gap_0xF0[0xB8];
};

struct Component_GUI_AtkComponentScrollBar /* Size=0x140 */
{
    /* 0x000 */ Component_GUI_AtkComponentBase AtkComponentBase;
    /*       */ byte _gap_0xC0[0x80];
};

struct Component_GUI_AtkComponentList_ListItem /* Size=0x18 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ Component_GUI_AtkComponentListItemRenderer* AtkComponentListItemRenderer;
    /*      */ byte _gap_0x10[0x8];
};

struct Component_GUI_AtkComponentList /* Size=0x1A8 */
{
    /* 0x000 */ Component_GUI_AtkComponentBase AtkComponentBase;
    /* 0x0C0 */ Component_GUI_AtkComponentListItemRenderer* FirstAtkComponentListItemRenderer;
    /* 0x0C8 */ Component_GUI_AtkComponentScrollBar* AtkComponentScrollBarC8;
    /*       */ byte _gap_0xD0[0x20];
    /* 0x0F0 */ Component_GUI_AtkComponentList_ListItem* ItemRendererList;
    /*       */ byte _gap_0xF8[0x20];
    /* 0x118 */ __int32 ListLength;
    /*       */ byte _gap_0x11C[0x4];
    /*       */ byte _gap_0x120[0x8];
    /*       */ byte _gap_0x128[0x4];
    /* 0x12C */ __int32 SelectedItemIndex;
    /* 0x130 */ __int32 HeldItemIndex;
    /* 0x134 */ __int32 HoveredItemIndex;
    /*       */ byte _gap_0x138[0x10];
    /* 0x148 */ Component_GUI_AtkCollisionNode* HoveredItemCollisionNode;
    /* 0x150 */ __int32 HoveredItemIndex2;
    /*       */ byte _gap_0x154[0x4];
    /* 0x158 */ __int32 HoveredItemIndex3;
    /*       */ byte _gap_0x15C[0x4];
    /*       */ byte _gap_0x160[0x48];
};

struct Component_GUI_AtkUldComponentDataInputBase /* Size=0x10 */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ Client_Graphics_ByteColor FocusColor;
};

struct Component_GUI_AtkUldComponentDataNumericInput /* Size=0x3C */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataInputBase InputBase;
    /* 0x10 */ unsigned __int32 Nodes[0x5];
    /* 0x24 */ __int32 Value;
    /* 0x28 */ __int32 Min;
    /* 0x2C */ __int32 Max;
    /* 0x30 */ __int32 Add;
    /* 0x34 */ unsigned __int32 EndLetterId;
    /* 0x38 */ byte Comma;
    /*      */ byte _gap_0x39;
    /*      */ byte _gap_0x3A[0x2];
};

struct Component_GUI_AtkComponentNumericInput /* Size=0x338 */
{
    /* 0x000 */ Component_GUI_AtkComponentInputBase AtkComponentInputBase;
    /*       */ byte _gap_0x1B0[0x148];
    /* 0x2F8 */ Component_GUI_AtkUldComponentDataNumericInput Data;
    /*       */ byte _gap_0x334[0x4];
};

struct Component_GUI_AtkComponentRadioButton /* Size=0xF8 */
{
    /* 0x00 */ Component_GUI_AtkComponentBase AtkComponentBase;
    /*      */ byte _gap_0xC0[0x38];
};

struct Component_GUI_AtkComponentSlider /* Size=0x100 */
{
    /* 0x000 */ Component_GUI_AtkComponentBase AtkComponentBase;
    /*       */ byte _gap_0xC0[0x40];
};

struct Component_GUI_AtkComponentTextInput /* Size=0x600 */
{
    /* 0x000 */ Component_GUI_AtkComponentInputBase AtkComponentInputBase;
    /*       */ byte _gap_0x1B0[0xD0];
    /* 0x280 */ Client_System_String_Utf8String UnkText1;
    /* 0x2E8 */ Client_System_String_Utf8String UnkText2;
    /* 0x350 */ Client_System_String_Utf8String UnkText3;
    /*       */ byte _gap_0x3B8[0x98];
    /* 0x450 */ Client_System_String_Utf8String UnkText4;
    /* 0x4B8 */ Client_System_String_Utf8String UnkText5;
    /*       */ byte _gap_0x520[0xE0];
};

struct Component_GUI_AtkComponentTextNineGrid /* Size=0xD8 */
{
    /* 0x00 */ Component_GUI_AtkComponentBase AtkComponentBase;
    /*      */ byte _gap_0xC0[0x18];
};

struct Component_GUI_AtkComponentTreeList /* Size=0x228 */
{
    /* 0x000 */ Component_GUI_AtkComponentList AtkComponentList;
    /*       */ byte _gap_0x1A8[0x80];
};

struct Component_GUI_AtkComponentWindow /* Size=0x108 */
{
    /* 0x000 */ Component_GUI_AtkComponentBase AtkComponentBase;
    /*       */ byte _gap_0xC0[0x48];
};

struct Component_GUI_AtkCounterNode /* Size=0x128 */
{
    /* 0x000 */ Component_GUI_AtkResNode AtkResNode;
    /* 0x0A8 */ Component_GUI_AtkUldPartsList* PartsList;
    /* 0x0B0 */ unsigned __int32 PartId;
    /* 0x0B4 */ byte NumberWidth;
    /* 0x0B5 */ byte CommaWidth;
    /* 0x0B6 */ byte SpaceWidth;
    /*       */ byte _gap_0xB7;
    /* 0x0B8 */ unsigned __int16 TextAlign;
    /*       */ byte _gap_0xBA[0x2];
    /* 0x0BC */ float Width;
    /* 0x0C0 */ Client_System_String_Utf8String NodeText;
};

enum Component_GUI_AtkCursor_CursorType0x1 /* Size=0x1 */
{
    Arrow = 0,
    Boot = 1,
    Search = 2,
    ChatPointer = 3,
    Interact = 4,
    Attack = 5,
    Hand = 6,
    ResizeWE = 7,
    ResizeNS = 8,
    ResizeNWSR = 9,
    ResizeNESW = 10,
    Clickable = 11,
    TextInput = 12,
    TextClick = 13,
    Grab = 14,
    ChatBubble = 15,
    NoAccess = 16,
    Hidden = 17
};

struct Component_GUI_AtkCursor /* Size=0x10 */
{
    /* 0x00 */ Component_GUI_AtkCursor_CursorType0x1 Type;
    /*      */ byte _gap_0x1;
    /*      */ byte _gap_0x2[0x2];
    /*      */ byte _gap_0x4[0x4];
    /*      */ byte _gap_0x8[0x4];
    /*      */ byte _gap_0xC[0x2];
    /* 0x0E */ byte Visible;
    /*      */ byte _gap_0xF;
};

struct Pointer_Component_GUI_AtkResNode /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct Pointer_Component_GUI_AtkTooltipManager_AtkTooltipInfo /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct StdPair_Pointer_Component_GUI_AtkResNode_Pointer_Component_GUI_AtkTooltipManager_AtkTooltipInfo /* Size=0x10 */
{
    /* 0x00 */ Pointer_Component_GUI_AtkResNode Item1;
    /* 0x08 */ Pointer_Component_GUI_AtkTooltipManager_AtkTooltipInfo Item2;
};

struct StdMap_Node_Pointer_Component_GUI_AtkResNode_Pointer_Component_GUI_AtkTooltipManager_AtkTooltipInfo /* Size=0x38 */
{
    /* 0x00 */ StdMap_Node_Pointer_Component_GUI_AtkResNode_Pointer_Component_GUI_AtkTooltipManager_AtkTooltipInfo* Left;
    /* 0x08 */ StdMap_Node_Pointer_Component_GUI_AtkResNode_Pointer_Component_GUI_AtkTooltipManager_AtkTooltipInfo* Parent;
    /* 0x10 */ StdMap_Node_Pointer_Component_GUI_AtkResNode_Pointer_Component_GUI_AtkTooltipManager_AtkTooltipInfo* Right;
    /* 0x18 */ byte Color;
    /*      */ byte _gap_0x19;
    /*      */ byte _gap_0x1A[0x2];
    /* 0x1C */ bool IsNil;
    /*      */ byte _gap_0x1D;
    /*      */ byte _gap_0x1E[0x2];
    /* 0x20 */ byte _18;
    /* 0x21 */ byte _19;
    /*      */ byte _gap_0x22[0x2];
    /*      */ byte _gap_0x24[0x4];
    /* 0x28 */ StdPair_Pointer_Component_GUI_AtkResNode_Pointer_Component_GUI_AtkTooltipManager_AtkTooltipInfo KeyValuePair;
};

struct StdMap_Pointer_Component_GUI_AtkResNode_Pointer_Component_GUI_AtkTooltipManager_AtkTooltipInfo /* Size=0x10 */
{
    /* 0x00 */ StdMap_Node_Pointer_Component_GUI_AtkResNode_Pointer_Component_GUI_AtkTooltipManager_AtkTooltipInfo* Head;
    /* 0x08 */ unsigned __int64 Count;
};

struct Component_GUI_AtkTooltipManager /* Size=0x150 */
{
    /* 0x000 */ Component_GUI_AtkEventListener AtkEventListener;
    /* 0x008 */ StdMap_Pointer_Component_GUI_AtkResNode_Pointer_Component_GUI_AtkTooltipManager_AtkTooltipInfo TooltipMap;
    /* 0x018 */ Component_GUI_AtkStage* AtkStage;
    /*       */ byte _gap_0x20[0x130];
};

struct Component_GUI_AtkStage /* Size=0x75DF8 */
{
    /* 0x00000 */ Component_GUI_AtkEventTarget AtkEventTarget;
    /*         */ byte _gap_0x8[0x18];
    /* 0x00020 */ Client_UI_RaptureAtkUnitManager* RaptureAtkUnitManager;
    /*         */ byte _gap_0x28[0x50];
    /* 0x00078 */ Component_GUI_AtkDragDropManager DragDropManager;
    /*         */ byte _gap_0x140[0x28];
    /* 0x00168 */ Component_GUI_AtkTooltipManager TooltipManager;
    /*         */ byte _gap_0x2B8[0x80];
    /* 0x00338 */ Component_GUI_AtkCursor AtkCursor;
    /*         */ byte _gap_0x348[0x75AB0];
};

struct Component_GUI_AtkDragDropManager /* Size=0xC8 */
{
    /* 0x00 */ Component_GUI_AtkEventListener AtkEventListener;
    /*      */ byte _gap_0x8[0x88];
    /* 0x90 */ Component_GUI_AtkStage* AtkStage;
    /*      */ byte _gap_0x98[0x20];
    /* 0xB8 */ __int16 DragStartX;
    /* 0xBA */ __int16 DragStartY;
    /*      */ byte _gap_0xBC[0x4];
    /*      */ byte _gap_0xC0[0x8];
};

struct Component_GUI_AtkEventListenerUnk1 /* Size=0x60 */
{
    union {
    /* 0x00 */ void* vtbl;
    /* 0x00 */ void** vfunc;
    } _union_0x0;
    /* 0x08 */ void* Unk;
    /*      */ byte _gap_0x10[0x10];
    /* 0x20 */ Component_GUI_AtkUnitBase* AtkUnitBase;
    /* 0x28 */ Component_GUI_AtkStage* AtkStage;
    /*      */ byte _gap_0x30[0x30];
};

enum Component_GUI_ImageNodeFlags0x4 /* Size=0x4 */
{
    FlipH = 1,
    FlipV = 2,
    AutoFit = 128
};

struct Component_GUI_AtkLinkedList; /* Size=unknown due to generic type with parameters */
struct Component_GUI_AtkNineGridNode /* Size=0xC8 */
{
    /* 0x00 */ Component_GUI_AtkResNode AtkResNode;
    /* 0xA8 */ Component_GUI_AtkUldPartsList* PartsList;
    /* 0xB0 */ unsigned __int32 PartID;
    /* 0xB4 */ __int16 TopOffset;
    /* 0xB6 */ __int16 BottomOffset;
    /* 0xB8 */ __int16 LeftOffset;
    /* 0xBA */ __int16 RightOffset;
    /* 0xBC */ unsigned __int32 BlendMode;
    /* 0xC0 */ byte PartsTypeRenderType;
    /*      */ byte _gap_0xC1;
    /*      */ byte _gap_0xC2[0x2];
    /*      */ byte _gap_0xC4[0x4];
};

enum Component_GUI_NodeFlags0x4 /* Size=0x4 */
{
    AnchorTop = 1,
    AnchorLeft = 2,
    AnchorBottom = 4,
    AnchorRight = 8,
    Visible = 16,
    Enabled = 32,
    Clip = 64,
    Fill = 128,
    HasCollision = 256,
    RespondToMouse = 512,
    Focusable = 1024,
    Droppable = 2048,
    IsTopNode = 4096,
    EmitsEvents = 8192,
    UseDepthBasedPriority = 16384,
    UnkFlag2 = 32768
};

enum Component_GUI_TextFlags0x4 /* Size=0x4 */
{
    AutoAdjustNodeSize = 1,
    Bold = 2,
    Italic = 4,
    Edge = 8,
    Glare = 16,
    Emboss = 32,
    WordWrap = 64,
    MultiLine = 128
};

enum Component_GUI_TextFlags20x4 /* Size=0x4 */
{
    Ellipsis = 4
};

enum Component_GUI_FontType0x1 /* Size=0x1 */
{
    Axis = 0,
    MiedingerMed = 1,
    Miedinger = 2,
    TrumpGothic = 3,
    Jupiter = 4,
    JupiterLarge = 5
};

struct Component_GUI_AtkUldComponentDataButton /* Size=0x18 */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x2];
    /* 0x14 */ unsigned __int32 TextId;
};

struct Component_GUI_AtkUldComponentDataCheckBox /* Size=0x1C */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x3];
    /* 0x18 */ unsigned __int32 TextId;
};

struct Component_GUI_AtkUldComponentDataDragDrop /* Size=0x10 */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x1];
};

struct Component_GUI_AtkUldComponentDataDropDownList /* Size=0x14 */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x2];
};

struct Component_GUI_AtkUldComponentDataGaugeBar /* Size=0x3C */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x6];
    /* 0x24 */ unsigned __int16 MarginV;
    /* 0x26 */ unsigned __int16 MarginH;
    /* 0x28 */ byte Vertical;
    /*      */ byte _gap_0x29;
    /*      */ byte _gap_0x2A[0x2];
    /* 0x2C */ __int32 Indicator;
    /* 0x30 */ __int32 Min;
    /* 0x34 */ __int32 Max;
    /* 0x38 */ __int32 Value;
};

struct Component_GUI_AtkUldComponentDataGuildLeveCard /* Size=0x1C */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x3];
    /*      */ byte _gap_0x18[0x4];
};

struct Component_GUI_AtkUldComponentDataHoldButton /* Size=0x20 */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x4];
    /* 0x1C */ unsigned __int32 TextId;
};

struct Component_GUI_AtkUldComponentDataIcon /* Size=0x2C */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x8];
};

struct Component_GUI_AtkUldComponentDataIconText /* Size=0x14 */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x2];
};

struct Component_GUI_AtkUldComponentDataJournalCanvas /* Size=0x94 */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x20];
    /* 0x8C */ unsigned __int16 ItemMargin;
    /* 0x8E */ unsigned __int16 BasicMargin;
    /* 0x90 */ unsigned __int16 AnotherMargin;
    /* 0x92 */ unsigned __int16 Padding;
};

struct Component_GUI_AtkUldComponentDataList /* Size=0x28 */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x5];
    /* 0x20 */ byte Wrap;
    /* 0x21 */ byte Orientation;
    /* 0x22 */ unsigned __int16 RowNum;
    /* 0x24 */ unsigned __int16 ColNum;
    /*      */ byte _gap_0x26[0x2];
};

struct Component_GUI_AtkUldComponentDataListItemRenderer /* Size=0x20 */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x4];
    /* 0x1C */ byte CanToggle;
    /*      */ byte _gap_0x1D;
    /*      */ byte _gap_0x1E[0x2];
};

struct Component_GUI_AtkUldComponentDataMap /* Size=0x34 */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0xA];
};

struct Component_GUI_AtkUldComponentDataMultipurpose /* Size=0x18 */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x3];
};

struct Component_GUI_AtkUldComponentDataPreview /* Size=0x14 */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x2];
};

struct Component_GUI_AtkUldComponentDataRadioButton /* Size=0x24 */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x4];
    /* 0x1C */ unsigned __int32 TextId;
    /* 0x20 */ unsigned __int32 GroupId;
};

struct Component_GUI_AtkUldComponentDataScrollBar /* Size=0x20 */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x4];
    /* 0x1C */ unsigned __int16 Margin;
    /* 0x1E */ byte Vertical;
    /*      */ byte _gap_0x1F;
};

struct Component_GUI_AtkUldComponentDataSlider /* Size=0x34 */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x4];
    /* 0x1C */ __int32 Min;
    /* 0x20 */ __int32 Max;
    /* 0x24 */ __int32 Step;
    /* 0x28 */ __int32 OfffsetL;
    /* 0x2C */ __int32 OffsetR;
    /* 0x30 */ byte Vertical;
    /*      */ byte _gap_0x31;
    /*      */ byte _gap_0x32[0x2];
};

enum Component_GUI_TextInputFlags10x4 /* Size=0x4 */
{
    Capitalize = 1,
    Mask = 2,
    EnableDictionary = 4,
    EnableHistory = 8,
    EnableIME = 16,
    EscapeClears = 32,
    AllowUpperCase = 64,
    AllowLowerCase = 128
};

enum Component_GUI_TextInputFlags20x4 /* Size=0x4 */
{
    AllowNumberInput = 1,
    AllowSymbolInput = 2,
    WordWrap = 4,
    MultiLine = 8,
    AutoMaxWidth = 16
};

struct Component_GUI_AtkUldComponentDataTextInput /* Size=0x7C */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataInputBase InputBase;
    /* 0x10 */ unsigned __int32 Nodes[0x10];
    /* 0x50 */ Client_Graphics_ByteColor CandidateColor;
    /* 0x54 */ Client_Graphics_ByteColor IMEColor;
    /* 0x58 */ unsigned __int32 MaxWidth;
    /* 0x5C */ unsigned __int32 MaxLine;
    /* 0x60 */ unsigned __int32 MaxByte;
    /* 0x64 */ unsigned __int32 MaxChar;
    /* 0x68 */ unsigned __int16 CharSet;
    /* 0x6A */ byte Flags1;
    /* 0x6B */ byte Flags2;
    /* 0x6C */ byte CharSetExtras[0x10];
};

struct Component_GUI_AtkUldComponentDataTextNineGrid /* Size=0x18 */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x2];
    /* 0x14 */ unsigned __int32 TextId;
};

struct Component_GUI_AtkUldComponentDataTreeList /* Size=0x28 */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x5];
    /* 0x20 */ byte Wrap;
    /* 0x21 */ byte Orientation;
    /* 0x22 */ unsigned __int16 RowNum;
    /* 0x24 */ unsigned __int16 ColNum;
    /*      */ byte _gap_0x26[0x2];
};

struct Component_GUI_AtkUldComponentDataWindow /* Size=0x38 */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x8];
    /* 0x2C */ unsigned __int32 TitleTextId;
    /* 0x30 */ unsigned __int32 SubtitleTextId;
    /* 0x34 */ byte ShowCloseButton;
    /* 0x35 */ byte ShowConfigButton;
    /* 0x36 */ byte ShowHelpButton;
    /* 0x37 */ byte ShowHeader;
};

struct Component_GUI_AtkUldComponentInfo /* Size=0x18 */
{
    /* 0x00 */ Component_GUI_AtkUldObjectInfo ObjectInfo;
    /* 0x10 */ Component_GUI_ComponentType0x1 ComponentType;
    /*      */ byte _gap_0x11;
    /*      */ byte _gap_0x12[0x2];
    /*      */ byte _gap_0x14[0x4];
};

enum Component_GUI_AlignmentType0x4 /* Size=0x4 */
{
    TopLeft = 0,
    Top = 1,
    TopRight = 2,
    Left = 3,
    Center = 4,
    Right = 5,
    BottomLeft = 6,
    Bottom = 7,
    BottomRight = 8
};

struct Component_GUI_AtkUldWidgetInfo /* Size=0x20 */
{
    /* 0x00 */ Component_GUI_AtkUldObjectInfo ObjectInfo;
    /* 0x10 */ unsigned __int32 AlignmentType;
    /* 0x14 */ float X;
    /* 0x18 */ float Y;
    /*      */ byte _gap_0x1C[0x4];
};

struct Component_GUI_InventoryNumberArray_Item /* Size=0x14 */
{
    /*      */ byte _gap_0x0[0x8];
    /*      */ byte _gap_0x8[0x2];
    /* 0x0A */ unsigned __int32 Quantity;
    /*      */ byte _gap_0xE[0x2];
    /*      */ byte _gap_0x10[0x4];
};

struct Component_GUI_InventoryNumberArray /* Size=0x12EC */
{
    /* 0x0000 */ Component_GUI_InventoryNumberArray_Item* Items;
    /*        */ byte _gap_0x8[0x12D0];
    /* 0x12D8 */ unsigned __int32 TotalCount;
    /* 0x12DC */ unsigned __int32 Inventory1Count;
    /* 0x12E0 */ unsigned __int32 Inventory2Count;
    /* 0x12E4 */ unsigned __int32 Inventory3Count;
    /* 0x12E8 */ unsigned __int32 Inventory4Count;
};

struct Component_GUI_ULD_AtkUldComponentDataTab /* Size=0x24 */
{
    /* 0x00 */ Component_GUI_AtkUldComponentDataBase Base;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ unsigned __int32 Nodes[0x4];
    /* 0x1C */ unsigned __int32 TextId;
    /* 0x20 */ unsigned __int32 GroupId;
};

struct Client_UI_AddonActionBarBase_AddonActionBarBaseVTable /* Size=0x270 */
{
    /*       */ byte _gap_0x0[0x268];
    /* 0x268 */ __int64 PulseActionBarSlot;
};

struct Client_UI_ActionBarSlot /* Size=0xC8 */
{
    /*      */ byte _gap_0x0[0x4];
    /* 0x04 */ __int32 ActionId;
    /*      */ byte _gap_0x8[0x88];
    /* 0x90 */ Component_GUI_AtkComponentNode* Icon;
    /* 0x98 */ Component_GUI_AtkTextNode* ControlHintTextNode;
    /* 0xA0 */ Component_GUI_AtkResNode* IconFrame;
    /* 0xA8 */ Component_GUI_AtkImageNode* ChargeIcon;
    /* 0xB0 */ Component_GUI_AtkResNode* RecastOverlayContainer;
    /* 0xB8 */ byte* PopUpHelpTextPtr;
    /*      */ byte _gap_0xC0[0x8];
};

struct Client_UI_AddonActionBarBase /* Size=0x248 */
{
    union {
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x000 */ Client_UI_AddonActionBarBase_AddonActionBarBaseVTable* VTable;
    } _union_0x0;
    /*       */ byte _gap_0x8[0x218];
    /* 0x220 */ Client_UI_ActionBarSlot* ActionBarSlots;
    /*       */ byte _gap_0x228[0x10];
    /* 0x238 */ __int16 CurrentPulsingSlots;
    /*       */ byte _gap_0x23A[0x2];
    /* 0x23C */ byte RaptureHotbarId;
    /*       */ byte _gap_0x23D;
    /* 0x23E */ byte SlotCount;
    /*       */ byte _gap_0x23F;
    /* 0x240 */ bool IsSharedHotbar;
    /*       */ byte _gap_0x241;
    /*       */ byte _gap_0x242[0x2];
    /*       */ byte _gap_0x244[0x4];
};

struct Client_UI_AddonActionBarX /* Size=0x298 */
{
    /* 0x000 */ Client_UI_AddonActionBarBase AddonActionBarBase;
    /*       */ byte _gap_0x248[0x50];
};

struct Client_UI_AddonActionBar /* Size=0x2B8 */
{
    /* 0x000 */ Client_UI_AddonActionBarX AddonActionBarX;
    /*       */ byte _gap_0x298[0x20];
};

struct Client_UI_AddonActionCross /* Size=0x710 */
{
    /* 0x000 */ Client_UI_AddonActionBarBase ActionBarBase;
    /*       */ byte _gap_0x248[0x4A0];
    /* 0x6E8 */ __int32 ExpandedHoldControlsLTRT;
    /* 0x6EC */ __int32 ExpandedHoldControlsRTLT;
    /*       */ byte _gap_0x6F0[0x20];
};

struct Client_UI_AddonActionDoubleCrossBase /* Size=0x2F8 */
{
    /* 0x000 */ Client_UI_AddonActionBarBase ActionBarBase;
    /*       */ byte _gap_0x248[0x98];
    /*       */ byte _gap_0x2E0;
    /* 0x2E1 */ byte ShowDPadSlots;
    /*       */ byte _gap_0x2E2[0x2];
    /*       */ byte _gap_0x2E4[0x4];
    /* 0x2E8 */ byte BarTarget;
    /*       */ byte _gap_0x2E9;
    /*       */ byte _gap_0x2EA[0x2];
    /* 0x2EC */ byte UseLeftSide;
    /* 0x2ED */ byte MergedPositioning;
    /*       */ byte _gap_0x2EE[0x2];
    /*       */ byte _gap_0x2F0[0x8];
};

struct Client_UI_AddonAOZNotebook_SpellbookBlock /* Size=0x48 */
{
    /* 0x00 */ Component_GUI_AtkComponentBase* AtkComponentBase;
    /* 0x08 */ Component_GUI_AtkCollisionNode* AtkCollisionNode;
    /* 0x10 */ Component_GUI_AtkComponentCheckBox* AtkComponentCheckBox;
    /* 0x18 */ Component_GUI_AtkComponentIcon* AtkComponentIcon;
    /* 0x20 */ Component_GUI_AtkTextNode* AtkTextNode;
    /* 0x28 */ Component_GUI_AtkResNode* AtkResNode1;
    /* 0x30 */ Component_GUI_AtkResNode* AtkResNode2;
    /* 0x38 */ char* Name;
    /* 0x40 */ unsigned __int32 ActionID;
    /*      */ byte _gap_0x44[0x4];
};

struct Client_UI_AddonAOZNotebook_ActiveActions /* Size=0x20 */
{
    /* 0x00 */ Component_GUI_AtkComponentDragDrop* AtkComponentDragDrop;
    /* 0x08 */ Component_GUI_AtkTextNode* AtkTextNode;
    /* 0x10 */ char* Name;
    /* 0x18 */ __int32 ActionID;
    /*      */ byte _gap_0x1C[0x4];
};

struct Client_UI_AddonAOZNotebook /* Size=0xCD0 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0xE8];
    /* 0x308 */ Client_UI_AddonAOZNotebook_SpellbookBlock SpellbookBlock01;
    /* 0x350 */ Client_UI_AddonAOZNotebook_SpellbookBlock SpellbookBlock02;
    /* 0x398 */ Client_UI_AddonAOZNotebook_SpellbookBlock SpellbookBlock03;
    /* 0x3E0 */ Client_UI_AddonAOZNotebook_SpellbookBlock SpellbookBlock04;
    /* 0x428 */ Client_UI_AddonAOZNotebook_SpellbookBlock SpellbookBlock05;
    /* 0x470 */ Client_UI_AddonAOZNotebook_SpellbookBlock SpellbookBlock06;
    /* 0x4B8 */ Client_UI_AddonAOZNotebook_SpellbookBlock SpellbookBlock07;
    /* 0x500 */ Client_UI_AddonAOZNotebook_SpellbookBlock SpellbookBlock08;
    /* 0x548 */ Client_UI_AddonAOZNotebook_SpellbookBlock SpellbookBlock09;
    /* 0x590 */ Client_UI_AddonAOZNotebook_SpellbookBlock SpellbookBlock10;
    /* 0x5D8 */ Client_UI_AddonAOZNotebook_SpellbookBlock SpellbookBlock11;
    /* 0x620 */ Client_UI_AddonAOZNotebook_SpellbookBlock SpellbookBlock12;
    /* 0x668 */ Client_UI_AddonAOZNotebook_SpellbookBlock SpellbookBlock13;
    /* 0x6B0 */ Client_UI_AddonAOZNotebook_SpellbookBlock SpellbookBlock14;
    /* 0x6F8 */ Client_UI_AddonAOZNotebook_SpellbookBlock SpellbookBlock15;
    /* 0x740 */ Client_UI_AddonAOZNotebook_SpellbookBlock SpellbookBlock16;
    /*       */ byte _gap_0x788[0x98];
    /* 0x820 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions01;
    /* 0x840 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions02;
    /* 0x860 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions03;
    /* 0x880 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions04;
    /* 0x8A0 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions05;
    /* 0x8C0 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions06;
    /* 0x8E0 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions07;
    /* 0x900 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions08;
    /* 0x920 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions09;
    /* 0x940 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions10;
    /* 0x960 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions11;
    /* 0x980 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions12;
    /* 0x9A0 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions13;
    /* 0x9C0 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions14;
    /* 0x9E0 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions15;
    /* 0xA00 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions16;
    /* 0xA20 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions17;
    /* 0xA40 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions18;
    /* 0xA60 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions19;
    /* 0xA80 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions20;
    /* 0xAA0 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions21;
    /* 0xAC0 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions22;
    /* 0xAE0 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions23;
    /* 0xB00 */ Client_UI_AddonAOZNotebook_ActiveActions ActiveActions24;
    /*       */ byte _gap_0xB20[0x1B0];
};

struct Client_UI_AddonBank_AddonBankVTable /* Size=0x180 */
{
    /*       */ byte _gap_0x0[0x178];
    /* 0x178 */ __int64 OnSetup;
};

struct Client_UI_AddonBank /* Size=0x298 */
{
    union {
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x000 */ Client_UI_AddonBank_AddonBankVTable* VTable;
    } _union_0x0;
    /*       */ byte _gap_0x8[0x290];
};

struct Client_UI_AddonCastBar /* Size=0x500 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Client_System_String_Utf8String CastName;
    /*       */ byte _gap_0x288[0x30];
    /*       */ byte _gap_0x2B8[0x4];
    /* 0x2BC */ unsigned __int16 CastTime;
    /*       */ byte _gap_0x2BE[0x2];
    /* 0x2C0 */ float CastPercent;
    /*       */ byte _gap_0x2C4[0x4];
    /*       */ byte _gap_0x2C8[0x238];
};

struct Client_UI_AddonCharacterInspect /* Size=0x500 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x210];
    /* 0x430 */ Component_GUI_AtkComponentBase* PreviewComponent;
    /*       */ byte _gap_0x438[0xC8];
};

struct Client_UI_AddonChatLogPanel /* Size=0x3D0 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x60];
    /* 0x280 */ Component_GUI_AtkTextNode* ChatText;
    /*       */ byte _gap_0x288[0x28];
    /* 0x2B0 */ byte FontSize;
    /*       */ byte _gap_0x2B1;
    /*       */ byte _gap_0x2B2[0x2];
    /* 0x2B4 */ unsigned __int32 FirstLineVisible;
    /* 0x2B8 */ unsigned __int32 LastLineVisible;
    /*       */ byte _gap_0x2BC[0x4];
    /* 0x2C0 */ unsigned __int32 Unknown2C0;
    /* 0x2C4 */ unsigned __int32 TotalLineCount;
    /*       */ byte _gap_0x2C8[0x30];
    /* 0x2F8 */ unsigned __int32 MessagesAboveCurrent;
    /*       */ byte _gap_0x2FC[0x4];
    /*       */ byte _gap_0x300[0x40];
    /*       */ byte _gap_0x340;
    /* 0x341 */ byte IsScrolledBottom;
    /*       */ byte _gap_0x342[0x2];
    /*       */ byte _gap_0x344[0x4];
    /*       */ byte _gap_0x348[0x88];
};

struct Client_UI_AddonChocoboBreedTraining /* Size=0x230 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Component_GUI_AtkComponentButton* CommenceButton;
    /* 0x228 */ Component_GUI_AtkComponentButton* CancelButton;
};

struct Client_UI_AddonContentsFinder /* Size=0x16C8 */
{
    /* 0x0000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*        */ byte _gap_0x220[0x98];
    /* 0x02B8 */ Component_GUI_AtkComponentButton* ClearSelectionButton;
    /* 0x02C0 */ Component_GUI_AtkComponentButton* JoinButton;
    /* 0x02C8 */ Component_GUI_AtkComponentRadioButton* DutyRouletteRadioButton;
    /* 0x02D0 */ Component_GUI_AtkComponentRadioButton* Dungeons1RadioButton;
    /* 0x02D8 */ Component_GUI_AtkComponentRadioButton* Dungeons2RadioButton;
    /* 0x02E0 */ Component_GUI_AtkComponentRadioButton* GuildHeistsRadioButton;
    /* 0x02E8 */ Component_GUI_AtkComponentRadioButton* Trials1RadioButton;
    /* 0x02F0 */ Component_GUI_AtkComponentRadioButton* Trials2RadioButton;
    /* 0x02F8 */ Component_GUI_AtkComponentRadioButton* Raids1RadioButton;
    /* 0x0300 */ Component_GUI_AtkComponentRadioButton* Raids2RadioButton;
    /* 0x0308 */ Component_GUI_AtkComponentRadioButton* PvpRadioButton;
    /* 0x0310 */ Component_GUI_AtkComponentRadioButton* GoldSaucerRadioButton;
    /* 0x0318 */ byte SelectedDutyTextNode[0x28];
    /* 0x0340 */ Component_GUI_AtkComponentTreeList* DutyList;
    /* 0x0348 */ Component_GUI_AtkComponentDropDownList* OrderByButton;
    /* 0x0350 */ Component_GUI_AtkComponentButton* RefreshButton;
    /* 0x0358 */ Component_GUI_AtkComponentButton* DutyTypeButton;
    /* 0x0360 */ Component_GUI_AtkTextNode* JobNameTextNode;
    /* 0x0368 */ Component_GUI_AtkTextNode* UnkTextNode;
    /* 0x0370 */ Component_GUI_AtkTextNode* LevelTextNode;
    /* 0x0378 */ Component_GUI_AtkTextNode* ItemLevelTextNode;
    /* 0x0380 */ Component_GUI_AtkTextNode* RoleTextNode;
    /* 0x0388 */ Component_GUI_AtkTextNode* NumberSelectedTextNode;
    /* 0x0390 */ Component_GUI_AtkTextNode* ObtainingDataTextNode;
    /* 0x0398 */ Component_GUI_AtkTextNode* NumOtherPartiesRecruitingTextNode;
    /*        */ byte _gap_0x3A0[0x8];
    /* 0x03A8 */ Component_GUI_AtkImageNode* StarImageNode;
    /* 0x03B0 */ Component_GUI_AtkResNode* RoleIconResNode;
    /* 0x03B8 */ Component_GUI_AtkImageNode* RoleIconImageNode;
    /* 0x03C0 */ Component_GUI_AtkResNode* NumOtherPartiesRecruitingResNode;
    /* 0x03C8 */ byte SettingsButton[0x40];
    /*        */ byte _gap_0x408[0x12A0];
    /* 0x16A8 */ unsigned __int32 SelectedRadioButton;
    /*        */ byte _gap_0x16AC[0x4];
    /*        */ byte _gap_0x16B0[0x4];
    /* 0x16B4 */ unsigned __int32 SelectedRow;
    /* 0x16B8 */ unsigned __int32 NumEntries;
    /*        */ byte _gap_0x16BC[0x4];
    /*        */ byte _gap_0x16C0[0x8];
};

struct Client_UI_AddonContentsFinderConfirm /* Size=0x2A0 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x8];
    /* 0x228 */ Component_GUI_AtkTextNode* AtkTextNode228;
    /* 0x230 */ Component_GUI_AtkTextNode* AtkTextNode230;
    /* 0x238 */ Component_GUI_AtkTextNode* AtkTextNode238;
    /* 0x240 */ Component_GUI_AtkTextNode* AtkTextNode240;
    /* 0x248 */ Component_GUI_AtkTextNode* AtkTextNode248;
    /*       */ byte _gap_0x250[0x38];
    /* 0x288 */ Component_GUI_AtkComponentButton* CommenceButton;
    /* 0x290 */ Component_GUI_AtkComponentButton* WithdrawButton;
    /* 0x298 */ Component_GUI_AtkComponentButton* WaitButton;
};

struct Client_UI_AddonContextIconMenu /* Size=0x2B0 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ __int32 EntryCount;
    /*       */ byte _gap_0x224[0x4];
    /*       */ byte _gap_0x228[0x18];
    /* 0x240 */ Component_GUI_AtkComponentList* AtkComponentList240;
    /* 0x248 */ void* unk248;
    /* 0x250 */ Component_GUI_AtkComponentRadioButton* AtkComponentRadioButton250;
    /* 0x258 */ Component_GUI_AtkComponentRadioButton* AtkComponentRadioButton258;
    /* 0x260 */ Component_GUI_AtkComponentRadioButton* AtkComponentRadioButton260;
    /* 0x268 */ Component_GUI_AtkComponentRadioButton* AtkComponentRadioButton268;
    /* 0x270 */ Component_GUI_AtkComponentRadioButton* AtkComponentRadioButton270;
    /* 0x278 */ Component_GUI_AtkComponentRadioButton* AtkComponentRadioButton278;
    /* 0x280 */ Component_GUI_AtkComponentRadioButton* AtkComponentRadioButton280;
    /* 0x288 */ Component_GUI_AtkComponentRadioButton* AtkComponentRadioButton288;
    /* 0x290 */ Component_GUI_AtkComponentRadioButton* AtkComponentRadioButton290;
    /* 0x298 */ Component_GUI_AtkComponentRadioButton* AtkComponentRadioButton298;
    /*       */ byte _gap_0x2A0[0x10];
};

struct Client_UI_AddonContextMenu /* Size=0x2A0 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x80];
};

struct Client_UI_AddonEnemyList /* Size=0x278 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Component_GUI_AtkComponentButton** EnemyOneComponent;
    /*       */ byte _gap_0x228[0x48];
    /*       */ byte _gap_0x270[0x2];
    /* 0x272 */ byte EnemyCount;
    /* 0x273 */ byte HoveredIndex;
    /* 0x274 */ byte SelectedIndex;
    /*       */ byte _gap_0x275;
    /*       */ byte _gap_0x276[0x2];
};

struct Client_UI_AddonExp /* Size=0x290 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x50];
    /* 0x270 */ byte ClassJob;
    /*       */ byte _gap_0x271;
    /*       */ byte _gap_0x272[0x2];
    /*       */ byte _gap_0x274[0x4];
    /* 0x278 */ unsigned __int32 CurrentExp;
    /* 0x27C */ unsigned __int32 RequiredExp;
    /* 0x280 */ unsigned __int32 RestedExp;
    /*       */ byte _gap_0x284[0x4];
    /*       */ byte _gap_0x288[0x8];
};

struct Client_UI_AddonFateReward /* Size=0x570 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Component_GUI_AtkResNode* AtkResNode220;
    /* 0x228 */ Component_GUI_AtkImageNode* AtkImageNode228;
    /* 0x230 */ Component_GUI_AtkImageNode* AtkImageNode230;
    /* 0x238 */ Component_GUI_AtkResNode* AtkResNode238;
    /* 0x240 */ Component_GUI_AtkTextNode* AtkTextNode240;
    /* 0x248 */ Component_GUI_AtkTextNode* AtkTextNode248;
    /* 0x250 */ Component_GUI_AtkTextNode* AtkTextNode250;
    /* 0x258 */ Component_GUI_AtkImageNode* AtkImageNode258;
    /*       */ byte _gap_0x260[0x68];
    /* 0x2C8 */ Component_GUI_AtkComponentTextNineGrid* AtkComponentTextNineGrid2C8;
    /* 0x2D0 */ Component_GUI_AtkImageNode* AtkImageNode2D0;
    /* 0x2D8 */ Component_GUI_AtkResNode* AtkResNode2D8;
    /*       */ byte _gap_0x2E0[0x68];
    /* 0x348 */ Component_GUI_AtkComponentTextNineGrid* AtkComponentTextNineGrid348;
    /* 0x350 */ Component_GUI_AtkImageNode* AtkImageNode350;
    /* 0x358 */ Component_GUI_AtkResNode* AtkResNode358;
    /*       */ byte _gap_0x360[0x200];
    /* 0x560 */ Component_GUI_AtkResNode* AtkResNode560;
    /* 0x568 */ float ElapsedSeconds;
    /*       */ byte _gap_0x56C[0x4];
};

struct Client_UI_AddonFieldMarker /* Size=0x598 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x10];
    /* 0x230 */ __int32 HoveredButtonIndex;
    /*       */ byte _gap_0x234[0x4];
    /* 0x238 */ byte WaymarkInfo[0xC0];
    /*       */ byte _gap_0x2F8[0x280];
    /*       */ byte _gap_0x578[0x4];
    /* 0x57C */ __int32 HoveredPresetIndex;
    /* 0x580 */ byte SelectedPage;
    /*       */ byte _gap_0x581;
    /*       */ byte _gap_0x582[0x2];
    /*       */ byte _gap_0x584[0x4];
    /*       */ byte _gap_0x588[0x10];
};

struct Client_UI_AddonWaymarkInfo /* Size=0x18 */
{
    /* 0x00 */ __int32 IconId;
    /* 0x04 */ __int32 Active;
    /* 0x08 */ byte* TooltipString;
    /* 0x10 */ __int32 Slot;
    /*      */ byte _gap_0x14[0x4];
};

struct Client_UI_AddonGathering /* Size=0x300 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Component_GUI_AtkResNode* UnkResNode220;
    /* 0x228 */ Component_GUI_AtkComponentCheckBox* GatheredItemComponentCheckBox1;
    /* 0x230 */ Component_GUI_AtkComponentCheckBox* GatheredItemComponentCheckBox2;
    /* 0x238 */ Component_GUI_AtkComponentCheckBox* GatheredItemComponentCheckBox3;
    /* 0x240 */ Component_GUI_AtkComponentCheckBox* GatheredItemComponentCheckBox4;
    /* 0x248 */ Component_GUI_AtkComponentCheckBox* GatheredItemComponentCheckBox5;
    /* 0x250 */ Component_GUI_AtkComponentCheckBox* GatheredItemComponentCheckBox6;
    /* 0x258 */ Component_GUI_AtkComponentCheckBox* GatheredItemComponentCheckBox7;
    /* 0x260 */ Component_GUI_AtkComponentCheckBox* GatheredItemComponentCheckBox8;
    /* 0x268 */ Component_GUI_AtkTextNode* InventoryQuantityTextNode;
    /* 0x270 */ Component_GUI_AtkResNode* UnkResNode270;
    /* 0x278 */ Component_GUI_AtkComponentCheckBox* QuickGatheringComponentCheckBox;
    /* 0x280 */ Component_GUI_AtkResNode* UnkResNode;
    /* 0x288 */ unsigned __int64 unk288;
    /* 0x290 */ unsigned __int64 unk290;
    /* 0x298 */ unsigned __int64 unk298;
    /* 0x2A0 */ unsigned __int64 unk2A0;
    /* 0x2A8 */ unsigned __int64 unk2A8;
    /* 0x2B0 */ unsigned __int64 unk2B0;
    /* 0x2B8 */ unsigned __int64 unk2B8;
    /* 0x2C0 */ unsigned __int64 unk2C0;
    /* 0x2C8 */ unsigned __int32 GatheredItemId1;
    /* 0x2CC */ unsigned __int32 GatheredItemId2;
    /* 0x2D0 */ unsigned __int32 GatheredItemId3;
    /* 0x2D4 */ unsigned __int32 GatheredItemId4;
    /* 0x2D8 */ unsigned __int32 GatheredItemId5;
    /* 0x2DC */ unsigned __int32 GatheredItemId6;
    /* 0x2E0 */ unsigned __int32 GatheredItemId7;
    /* 0x2E4 */ unsigned __int32 GatheredItemId8;
    /* 0x2E8 */ unsigned __int64 unk2E8;
    /* 0x2F0 */ unsigned __int64 unk2F0;
    /* 0x2F8 */ __int32 unk2F8;
    /* 0x2FC */ __int16 unk2FC;
    /*       */ byte _gap_0x2FE[0x2];
};

struct Client_UI_AddonGatheringMasterpiece /* Size=0x7F8 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x168];
    /* 0x388 */ Component_GUI_AtkComponentDragDrop* CollectDragDrop;
    /*       */ byte _gap_0x390[0x468];
};

struct Client_UI_AddonGcArmyCapture /* Size=0x268 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Component_GUI_AtkComponentButton* DeployButton;
    /* 0x228 */ Component_GUI_AtkComponentList* MissionList;
    /* 0x230 */ Component_GUI_AtkComponentList* ChosenRecruitList;
    /* 0x238 */ Component_GUI_AtkTextNode* ScriptsTextNode;
    /* 0x240 */ Component_GUI_AtkTextNode* ExpRewardTextNode;
    /* 0x248 */ Component_GUI_AtkComponentBase* ExpRewardComponent;
    /* 0x250 */ Component_GUI_AtkTextNode* ExpendituresTextNode;
    /* 0x258 */ Component_GUI_AtkTextNode* MissionLevelTextNode;
    /* 0x260 */ Component_GUI_AtkTextNode* MissionRequirementsTextNode;
};

struct Client_UI_AddonGcArmyExpedition /* Size=0x2E8 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Component_GUI_AtkComponentButton* DeployButton;
    /* 0x228 */ Component_GUI_AtkComponentList* MissionList;
    /*       */ byte _gap_0x230[0x8];
    /* 0x238 */ Component_GUI_AtkTextNode* ListHeaderTextNode;
    /* 0x240 */ Component_GUI_AtkTextNode* ScriptsTextNode;
    /* 0x248 */ Component_GUI_AtkTextNode* MissionDescriptionTextNode;
    /*       */ byte _gap_0x250[0x8];
    /* 0x258 */ Component_GUI_AtkComponentBase* SquadronExpRewardComponentNode;
    /* 0x260 */ Component_GUI_AtkComponentBase* ItemRewardComponentNode;
    /* 0x268 */ Component_GUI_AtkTextNode* MissionSealCostTextNode;
    /* 0x270 */ Component_GUI_AtkResNode* MissionLevelResNode;
    /* 0x278 */ Component_GUI_AtkTextNode* MissionLevelTextNode;
    /*       */ byte _gap_0x280[0x18];
    /* 0x298 */ Component_GUI_AtkComponentBase* RequiredAttributesComponentNode;
    /* 0x2A0 */ Component_GUI_AtkComponentBase* CurrentAttributesComponentNode;
    /*       */ byte _gap_0x2A8[0x18];
    /* 0x2C0 */ Component_GUI_AtkResNode* SquadronSergeantImageResNode;
    /* 0x2C8 */ Component_GUI_AtkResNode* SquadronSergeantChatMessageResNode;
    /* 0x2D0 */ Component_GUI_AtkTextNode* SquadronSergeantChatMessageTextNode;
    /* 0x2D8 */ __int32 SelectedTab;
    /*       */ byte _gap_0x2DC[0x4];
    /*       */ byte _gap_0x2E0[0x8];
};

struct Client_UI_AddonGcArmyExpeditionResult /* Size=0x228 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Component_GUI_AtkComponentButton* CompleteButton;
};

struct Client_UI_AddonGrandCompanySupplyList /* Size=0x760 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x60];
    /* 0x280 */ Component_GUI_AtkComponentList* SupplyProvisioningList;
    /* 0x288 */ Component_GUI_AtkComponentList* ExpertDeliveryList;
    /* 0x290 */ Component_GUI_AtkComponentDropDownList* SortByDropdown;
    /* 0x298 */ Component_GUI_AtkComponentDropDownList* FilterDropdown;
    /* 0x2A0 */ Component_GUI_AtkComponentRadioButton* SupplyRadioButton;
    /* 0x2A8 */ Component_GUI_AtkComponentRadioButton* ProvisioningRadioButton;
    /* 0x2B0 */ Component_GUI_AtkComponentRadioButton* ExpertDeliveryRadioButton;
    /*       */ byte _gap_0x2B8[0x8];
    /* 0x2C0 */ Component_GUI_AtkTextNode* NextMissionAllowanceTextNode;
    /* 0x2C8 */ Component_GUI_AtkTextNode* ListEmptyTextNode;
    /* 0x2D0 */ Component_GUI_AtkTextNode* SealCountTextNode;
    /* 0x2D8 */ Component_GUI_AtkImageNode* SealIconNode;
    /*       */ byte _gap_0x2E0[0x8];
    /* 0x2E8 */ __int32 SelectedTab;
    /* 0x2EC */ __int32 SelectedSortBy;
    /* 0x2F0 */ __int32 SelectedFilter;
    /*       */ byte _gap_0x2F4[0x4];
    /*       */ byte _gap_0x2F8[0x468];
};

struct Client_UI_AddonGrandCompanySupplyReward /* Size=0x230 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Component_GUI_AtkComponentButton* DeliverButton;
    /* 0x228 */ Component_GUI_AtkComponentButton* CancelButton;
};

struct Client_UI_AddonGuildLeve /* Size=0x18F0 */
{
    /* 0x0000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*        */ byte _gap_0x220[0x8];
    /* 0x0228 */ Component_GUI_AtkComponentTreeList* AtkComponentTreeList228;
    /* 0x0230 */ Component_GUI_AtkComponentRadioButton* FieldcraftButton;
    /* 0x0238 */ Component_GUI_AtkComponentRadioButton* TradecraftButton;
    union {
    /* 0x0240 */ Component_GUI_AtkComponentRadioButton* CarpenterButton;
    /* 0x0240 */ Component_GUI_AtkComponentRadioButton* MinerButton;
    } _union_0x248;
    union {
    /* 0x0248 */ Component_GUI_AtkComponentRadioButton* BlacksmithButton;
    /* 0x0248 */ Component_GUI_AtkComponentRadioButton* BotanistButton;
    } _union_0x250;
    union {
    /* 0x0250 */ Component_GUI_AtkComponentRadioButton* ArmorerButton;
    /* 0x0250 */ Component_GUI_AtkComponentRadioButton* FisherButton;
    } _union_0x258;
    /*        */ byte _gap_0x258[0x8];
    /* 0x0260 */ Component_GUI_AtkComponentRadioButton* GoldsmithButton;
    /* 0x0268 */ Component_GUI_AtkComponentRadioButton* LeatherworkerButton;
    /* 0x0270 */ Component_GUI_AtkComponentRadioButton* WeaverButton;
    /* 0x0278 */ Component_GUI_AtkComponentRadioButton* AlchemistButton;
    /* 0x0280 */ Component_GUI_AtkComponentRadioButton* CulinarianButton;
    /* 0x0288 */ Component_GUI_AtkResNode* AtkResNode288;
    union {
    /* 0x0290 */ Client_System_String_Utf8String CarpenterString;
    /* 0x0290 */ Client_System_String_Utf8String MinerString;
    } _union_0x290;
    union {
    /* 0x0298 */ Client_System_String_Utf8String BlacksmithString;
    /* 0x0298 */ Client_System_String_Utf8String BotanistString;
    } _union_0x2F8;
    union {
    /* 0x02A0 */ Client_System_String_Utf8String ArmorerString;
    /* 0x02A0 */ Client_System_String_Utf8String FisherString;
    } _union_0x360;
    /*        */ byte _gap_0x2A8[0x120];
    /* 0x03C8 */ Client_System_String_Utf8String GoldsmithString;
    /* 0x0430 */ Client_System_String_Utf8String LeatherworkerString;
    /* 0x0498 */ Client_System_String_Utf8String WeaverString;
    /* 0x0500 */ Client_System_String_Utf8String AlchemistString;
    /* 0x0568 */ Client_System_String_Utf8String CulinarianString;
    /* 0x05D0 */ Component_GUI_AtkComponentButton* JournalButton;
    /* 0x05D8 */ Component_GUI_AtkTextNode* AtkTextNode298;
    /* 0x05E0 */ Component_GUI_AtkComponentBase* AtkComponentBase290;
    /* 0x05E8 */ Component_GUI_AtkComponentBase* AtkComponentBase298;
    /*        */ byte _gap_0x5F0[0x1300];
};

struct Client_UI_AddonHudLayoutWindow /* Size=0x268 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x18];
    /* 0x238 */ Component_GUI_AtkComponentButton* SaveButton;
    /*       */ byte _gap_0x240[0x28];
};

struct Client_UI_MoveableAddonInfoStruct /* Size=0x50 */
{
    /*      */ byte _gap_0x0[0x20];
    /* 0x20 */ Client_UI_AddonHudLayoutScreen* hudLayoutScreen;
    /* 0x28 */ Component_GUI_AtkUnitBase* SelectedAtkUnit;
    /*      */ byte _gap_0x30[0x8];
    /*      */ byte _gap_0x38[0x4];
    /* 0x3C */ __int32 Flags;
    /*      */ byte _gap_0x40[0x4];
    /* 0x44 */ __int16 XOffset;
    /* 0x46 */ __int16 YOffset;
    /* 0x48 */ __int16 OverlayWidth;
    /* 0x4A */ __int16 OverlayHeight;
    /*      */ byte _gap_0x4C;
    /* 0x4D */ byte Slot;
    /*      */ byte _gap_0x4E;
    /* 0x4F */ byte PositionHasChanged;
};

struct Client_UI_AddonHudLayoutScreen /* Size=0x8A8 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0xA8];
    /* 0x2C8 */ Client_UI_AddonHudLayoutWindow* HudLayoutWindow;
    /*       */ byte _gap_0x2D0[0x270];
    /* 0x540 */ Component_GUI_AtkComponentNode* SelectedOverlayNode;
    /*       */ byte _gap_0x548[0x268];
    /* 0x7B0 */ Client_UI_MoveableAddonInfoStruct* SelectedAddon;
    /*       */ byte _gap_0x7B8[0xF0];
};

struct Client_UI_AddonImage /* Size=0x290 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x40];
    /* 0x260 */ Component_GUI_AtkResNode* ResNode1;
    /* 0x268 */ Component_GUI_AtkResNode* ResNode2;
    /* 0x270 */ Component_GUI_AtkImageNode* ImageNode;
    /*       */ byte _gap_0x278[0x4];
    /* 0x27C */ unsigned __int16 Width;
    /*       */ byte _gap_0x27E[0x2];
    /* 0x280 */ unsigned __int16 Height;
    /*       */ byte _gap_0x282[0x2];
    /*       */ byte _gap_0x284[0x4];
    /*       */ byte _gap_0x288[0x8];
};

struct Client_UI_AddonInventoryRetainerLarge_AddonInventoryRetainerLargeVTable /* Size=0x28 */
{
    /*      */ byte _gap_0x0[0x20];
    /* 0x20 */ __int64 Close;
};

struct Client_UI_AddonInventoryRetainerLarge /* Size=0x308 */
{
    union {
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x000 */ Client_UI_AddonInventoryRetainerLarge_AddonInventoryRetainerLargeVTable* VTable;
    } _union_0x0;
    /*       */ byte _gap_0x8[0x230];
    /* 0x238 */ Component_GUI_AtkComponentRadioButton* EntrustAllItemsButton;
    /*       */ byte _gap_0x240[0xA8];
    /*       */ byte _gap_0x2E8[0x2];
    /*       */ byte _gap_0x2EA;
    /* 0x2EB */ byte CurrentTab;
    /*       */ byte _gap_0x2EC[0x4];
    /*       */ byte _gap_0x2F0[0x18];
};

struct Client_UI_AddonItemInspectionList /* Size=0x1230 */
{
    /* 0x0000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*        */ byte _gap_0x220[0x1010];
};

struct Client_UI_AddonItemInspectionResult /* Size=0x2F8 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0xD8];
};

struct Client_UI_AddonItemSearchResult /* Size=0x3D0 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Component_GUI_AtkComponentIcon* ItemIcon;
    /* 0x228 */ Component_GUI_AtkTextNode* ItemName;
    /*       */ byte _gap_0x230[0x18];
    /* 0x248 */ Component_GUI_AtkComponentButton* History;
    /* 0x250 */ Component_GUI_AtkComponentButton* AdvancedSearch;
    /*       */ byte _gap_0x258[0x8];
    /* 0x260 */ Component_GUI_AtkComponentList* Results;
    /* 0x268 */ Component_GUI_AtkTextNode* HitsMessage;
    /* 0x270 */ Component_GUI_AtkTextNode* ErrorMessage;
    /*       */ byte _gap_0x278[0x158];
};

struct Client_UI_AddonJournalDetail /* Size=0x2F8 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x10];
    /* 0x230 */ Component_GUI_AtkComponentScrollBar* ScrollBarNode;
    /* 0x238 */ Component_GUI_AtkComponentGuildLeveCard* GuildLeveCardNode;
    /* 0x240 */ Component_GUI_AtkTextNode* DutyNameTextNode;
    /* 0x248 */ Component_GUI_AtkTextNode* DutyLevelTextNode;
    /* 0x250 */ Component_GUI_AtkImageNode* DutyCategoryImageNode;
    /* 0x258 */ Component_GUI_AtkImageNode* DutyCategoryBackgroundImageNode;
    /* 0x260 */ Component_GUI_AtkImageNode* GuildLeveCardBackgroundImageNode;
    /* 0x268 */ Component_GUI_AtkResNode* RewardsReceivedResNode;
    /* 0x270 */ Component_GUI_AtkTextNode* RewardsReceivedTextNode;
    /* 0x278 */ Component_GUI_AtkResNode* ButtonsResNode;
    /* 0x280 */ Component_GUI_AtkComponentButton* AcceptMapButton;
    /* 0x288 */ Component_GUI_AtkComponentButton* InitiateButton;
    /* 0x290 */ Component_GUI_AtkComponentButton* AbandonDeclineButton;
    /* 0x298 */ Component_GUI_AtkResNode* AtkResNode298;
    /* 0x2A0 */ Component_GUI_AtkImageNode* QuestImageNode;
    /* 0x2A8 */ Component_GUI_AtkTextNode* AtkTextNode2A8;
    /* 0x2B0 */ Component_GUI_AtkTextNode* RequirementsNotMetLabelTextNode;
    /* 0x2B8 */ Component_GUI_AtkTextNode* RequirementsNotMetTextNode;
    /* 0x2C0 */ Component_GUI_AtkTextNode* AtkTextNode2C0;
    /* 0x2C8 */ Component_GUI_AtkComponentButton* AtkComponentButton2C8;
    /* 0x2D0 */ Component_GUI_AtkComponentJournalCanvas* JournalCanvasNode;
    /*       */ byte _gap_0x2D8[0x20];
};

struct Client_UI_AddonJournalResult /* Size=0x288 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Component_GUI_AtkImageNode* AtkImageNode220;
    /* 0x228 */ Component_GUI_AtkImageNode* AtkImageNode228;
    /* 0x230 */ Component_GUI_AtkImageNode* AtkImageNode230;
    /* 0x238 */ Component_GUI_AtkComponentGuildLeveCard* AtkComponentGuildLeveCard238;
    /* 0x240 */ Component_GUI_AtkComponentButton* CompleteButton;
    /* 0x248 */ Component_GUI_AtkComponentButton* DeclineButton;
    /* 0x250 */ Component_GUI_AtkTextNode* AtkTextNode250;
    /* 0x258 */ Component_GUI_AtkTextNode* AtkTextNode258;
    /* 0x260 */ Component_GUI_AtkImageNode* AtkImageNode260;
    /* 0x268 */ Component_GUI_AtkComponentJournalCanvas* AtkComponentJournalCanvas268;
    /*       */ byte _gap_0x270[0x18];
};

struct Client_UI_AddonLookingForGroupDetail /* Size=0x3E8 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x28];
    /* 0x248 */ Component_GUI_AtkComponentButton* JoinPartyButton;
    /* 0x250 */ byte JoinAllianceButtons[0x30];
    /* 0x280 */ Component_GUI_AtkComponentButton* SendTellButton;
    /* 0x288 */ Component_GUI_AtkComponentButton* AllianceBackButton;
    /* 0x290 */ Component_GUI_AtkComponentButton* BackButton;
    /*       */ byte _gap_0x298[0x30];
    /* 0x2C8 */ Component_GUI_AtkImageNode* LookingForGroupImageNode;
    /* 0x2D0 */ Component_GUI_AtkTextNode* PartyLeaderTextNode;
    /* 0x2D8 */ Component_GUI_AtkTextNode* LocationTextNode;
    /* 0x2E0 */ Component_GUI_AtkTextNode* TimeRemainingTextNode;
    /* 0x2E8 */ Component_GUI_AtkTextNode* DutyNameTextNode;
    union {
    /* 0x2F0 */ Component_GUI_AtkTextNode* ItemLevelTextNode;
    /* 0x2F0 */ Component_GUI_AtkTextNode* StatusTextNode;
    } _union_0x2F0;
    /*       */ byte _gap_0x2F8[0x8];
    /* 0x300 */ Component_GUI_AtkTextNode* DescriptionTextNode;
    /* 0x308 */ Client_System_String_Utf8String DescriptionString;
    /* 0x370 */ Client_System_String_Utf8String CategoriesString;
    /*       */ byte _gap_0x3D8[0x10];
};

struct Client_UI_AddonLotteryDaily_GameTileRow /* Size=0x18 */
{
    /* 0x00 */ Component_GUI_AtkComponentCheckBox* Col1;
    /* 0x08 */ Component_GUI_AtkComponentCheckBox* Col2;
    /* 0x10 */ Component_GUI_AtkComponentCheckBox* Col3;
};

struct Client_UI_AddonLotteryDaily_GameTileBoard /* Size=0x48 */
{
    /* 0x00 */ Client_UI_AddonLotteryDaily_GameTileRow Row1;
    /* 0x18 */ Client_UI_AddonLotteryDaily_GameTileRow Row2;
    /* 0x30 */ Client_UI_AddonLotteryDaily_GameTileRow Row3;
};

struct Client_UI_AddonLotteryDaily_LaneTileSelector /* Size=0x40 */
{
    /* 0x00 */ Component_GUI_AtkComponentRadioButton* MajorDiagonal;
    /* 0x08 */ Component_GUI_AtkComponentRadioButton* Col1;
    /* 0x10 */ Component_GUI_AtkComponentRadioButton* Col2;
    /* 0x18 */ Component_GUI_AtkComponentRadioButton* Col3;
    /* 0x20 */ Component_GUI_AtkComponentRadioButton* MinorDiagonal;
    /* 0x28 */ Component_GUI_AtkComponentRadioButton* Row1;
    /* 0x30 */ Component_GUI_AtkComponentRadioButton* Row2;
    /* 0x38 */ Component_GUI_AtkComponentRadioButton* Row3;
};

struct Client_UI_AddonLotteryDaily_GameNumberRow /* Size=0xC */
{
    /* 0x0 */ __int32 Col1;
    /* 0x4 */ __int32 Col2;
    /* 0x8 */ __int32 Col3;
};

struct Client_UI_AddonLotteryDaily_GameBoardNumbers /* Size=0x24 */
{
    /* 0x00 */ Client_UI_AddonLotteryDaily_GameNumberRow Row1;
    /* 0x0C */ Client_UI_AddonLotteryDaily_GameNumberRow Row2;
    /* 0x18 */ Client_UI_AddonLotteryDaily_GameNumberRow Row3;
};

struct Client_UI_AddonLotteryDaily /* Size=0x408 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Client_UI_AddonLotteryDaily_GameTileBoard GameBoard;
    /* 0x268 */ Client_UI_AddonLotteryDaily_LaneTileSelector LaneSelector;
    /* 0x2A8 */ Component_GUI_AtkComponentBase* UnkCompBase2A8;
    /* 0x2B0 */ Component_GUI_AtkComponentBase* UnkCompBase2B0;
    /* 0x2B8 */ Component_GUI_AtkComponentBase* UnkCompBase2B8;
    /* 0x2C0 */ Component_GUI_AtkComponentBase* UnkCompBase2C0;
    /* 0x2C8 */ Component_GUI_AtkComponentBase* UnkCompBase2C8;
    /* 0x2D0 */ Component_GUI_AtkComponentBase* UnkCompBase2D0;
    /* 0x2D8 */ Component_GUI_AtkComponentBase* UnkCompBase2D8;
    /* 0x2E0 */ Component_GUI_AtkComponentBase* UnkCompBase2E0;
    /* 0x2E8 */ Component_GUI_AtkComponentBase* UnkCompBase2E8;
    /* 0x2F0 */ Component_GUI_AtkResNode* UnkResNode2F0;
    /* 0x2F8 */ Component_GUI_AtkResNode* UnkResNode2F8;
    /* 0x300 */ Component_GUI_AtkResNode* UnkResNode300;
    /* 0x308 */ Component_GUI_AtkComponentBase* UnkCompBase308;
    /* 0x310 */ Component_GUI_AtkComponentBase* UnkCompBase310;
    /* 0x318 */ Component_GUI_AtkComponentBase* UnkCompBase318;
    /* 0x320 */ Component_GUI_AtkComponentButton* UnkCompButton320;
    /* 0x328 */ Component_GUI_AtkTextNode* UnkTextNode328;
    /* 0x330 */ Component_GUI_AtkComponentBase* UnkCompBase330;
    /* 0x338 */ Component_GUI_AtkComponentBase* UnkCompBase338;
    /* 0x340 */ Component_GUI_AtkComponentBase* UnkCompBase340;
    /* 0x348 */ Component_GUI_AtkComponentBase* UnkCompBase348;
    /* 0x350 */ Component_GUI_AtkComponentBase* UnkCompBase350;
    /* 0x358 */ Component_GUI_AtkComponentBase* UnkCompBase358;
    /* 0x360 */ Component_GUI_AtkComponentBase* UnkCompBase360;
    /* 0x368 */ Component_GUI_AtkComponentBase* UnkCompBase368;
    /* 0x370 */ Component_GUI_AtkComponentBase* UnkCompBase370;
    /* 0x378 */ Component_GUI_AtkComponentBase* UnkCompBase378;
    /* 0x380 */ Component_GUI_AtkComponentBase* UnkCompBase380;
    /* 0x388 */ Component_GUI_AtkComponentBase* UnkCompBase388;
    /* 0x390 */ Component_GUI_AtkComponentBase* UnkCompBase390;
    /* 0x398 */ Component_GUI_AtkComponentBase* UnkCompBase398;
    /* 0x3A0 */ Component_GUI_AtkComponentBase* UnkCompBase3A0;
    /* 0x3A8 */ Component_GUI_AtkComponentBase* UnkCompBase3A8;
    /* 0x3B0 */ Component_GUI_AtkComponentBase* UnkCompBase3B0;
    /* 0x3B8 */ Component_GUI_AtkComponentBase* UnkCompBase3B8;
    /* 0x3C0 */ Component_GUI_AtkComponentBase* UnkCompBase3C0;
    /* 0x3C8 */ Component_GUI_AtkImageNode* UnkImageNode3C8;
    /* 0x3D0 */ __int32 UnkNumber3D0;
    /* 0x3D4 */ __int32 UnkNumber3D4;
    /* 0x3D8 */ Client_UI_AddonLotteryDaily_GameBoardNumbers GameNumbers;
    /* 0x3FC */ __int32 UnkNumber3FC;
    /* 0x400 */ __int32 UnkNumber400;
    /* 0x404 */ __int32 UnkNumber404;
};

struct Client_UI_AddonMacro /* Size=0x30B0 */
{
    /* 0x0000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*        */ byte _gap_0x220[0x98];
    /* 0x02B8 */ byte DragDropComponent[0x320];
    /*        */ byte _gap_0x5D8[0x8];
    /* 0x05E0 */ __int32 DefaultIcon;
    /*        */ byte _gap_0x5E4[0x4];
    /*        */ byte _gap_0x5E8[0x4];
    /* 0x05EC */ __int32 MacroSetIcon[0x64];
    /*        */ byte _gap_0x77C[0x4];
    /* 0x0780 */ byte MacroName[0x28A0];
    /* 0x3020 */ bool MacroCreated[0x64];
    /*        */ byte _gap_0x3084[0x4];
    /*        */ byte _gap_0x3088[0x18];
    /*        */ byte _gap_0x30A0[0x4];
    /* 0x30A4 */ unsigned __int32 SelectedMacroIndex;
    /* 0x30A8 */ unsigned __int32 SelectedPage;
    /*        */ byte _gap_0x30AC[0x4];
};

struct Client_UI_AddonMaterializeDialog /* Size=0x248 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Component_GUI_AtkTextNode* Text;
    /* 0x228 */ Component_GUI_AtkComponentIcon* ItemIcon;
    /* 0x230 */ Component_GUI_AtkTextNode* ItemName;
    /* 0x238 */ Component_GUI_AtkComponentButton* YesButton;
    /* 0x240 */ Component_GUI_AtkComponentButton* NoButton;
};

struct Client_UI_AddonMateriaRetrieveDialog /* Size=0x220 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
};

struct Client_UI_AddonNamePlate_BakePlateRenderer /* Size=0x240 */
{
    /*       */ byte _gap_0x0[0x230];
    /* 0x230 */ byte DisableFixedFontResolution;
    /*       */ byte _gap_0x231;
    /*       */ byte _gap_0x232[0x2];
    /*       */ byte _gap_0x234[0x4];
    /*       */ byte _gap_0x238[0x8];
};

struct Client_UI_AddonNamePlate_BakeData /* Size=0xC */
{
    /* 0x0 */ __int16 U;
    /* 0x2 */ __int16 V;
    /* 0x4 */ __int16 Width;
    /* 0x6 */ __int16 Height;
    /*     */ byte _gap_0x8[0x2];
    /* 0xA */ byte Alpha;
    /* 0xB */ byte IsBaked;
};

struct Client_UI_AddonNamePlate_NamePlateObject /* Size=0x78 */
{
    /* 0x00 */ Client_UI_AddonNamePlate_BakeData BakeData;
    /*      */ byte _gap_0xC[0x4];
    /* 0x10 */ Component_GUI_AtkComponentNode* RootNode;
    /* 0x18 */ Component_GUI_AtkResNode* ResNode;
    /* 0x20 */ Component_GUI_AtkTextNode* NameText;
    /* 0x28 */ Component_GUI_AtkImageNode* IconImageNode;
    /* 0x30 */ Component_GUI_AtkImageNode* ImageNode2;
    /* 0x38 */ Component_GUI_AtkImageNode* ImageNode3;
    /* 0x40 */ Component_GUI_AtkImageNode* ImageNode4;
    /* 0x48 */ Component_GUI_AtkImageNode* ImageNode5;
    /* 0x50 */ Component_GUI_AtkCollisionNode* CollisionNode1;
    /* 0x58 */ Component_GUI_AtkCollisionNode* CollisionNode2;
    /* 0x60 */ __int32 Priority;
    /* 0x64 */ __int16 TextW;
    /* 0x66 */ __int16 TextH;
    /* 0x68 */ __int16 IconXAdjust;
    /* 0x6A */ __int16 IconYAdjust;
    /* 0x6C */ byte NameplateKind;
    /* 0x6D */ byte HasHPBar;
    /* 0x6E */ byte ClickThrough;
    /* 0x6F */ byte IsPvpEnemy;
    /* 0x70 */ byte NeedsToBeBaked;
    /*      */ byte _gap_0x71;
    /*      */ byte _gap_0x72[0x2];
    /*      */ byte _gap_0x74[0x4];
};

struct Client_UI_AddonNamePlate /* Size=0x470 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Client_UI_AddonNamePlate_BakePlateRenderer BakePlate;
    /* 0x460 */ Client_UI_AddonNamePlate_NamePlateObject* NamePlateObjectArray;
    /* 0x468 */ byte DoFullUpdate;
    /*       */ byte _gap_0x469;
    /* 0x46A */ unsigned __int16 AlternatePartId;
    /*       */ byte _gap_0x46C[0x4];
};

struct Client_UI_AddonNeedGreed /* Size=0x728 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x8];
    /* 0x228 */ byte Items[0x500];
};

struct Client_UI_AddonPartyList_PartyListMemberStruct_StatusIcons /* Size=0x50 */
{
    /* 0x00 */ Component_GUI_AtkComponentIconText* StatusIcon0;
    /* 0x08 */ Component_GUI_AtkComponentIconText* StatusIcon1;
    /* 0x10 */ Component_GUI_AtkComponentIconText* StatusIcon2;
    /* 0x18 */ Component_GUI_AtkComponentIconText* StatusIcon3;
    /* 0x20 */ Component_GUI_AtkComponentIconText* StatusIcon4;
    /* 0x28 */ Component_GUI_AtkComponentIconText* StatusIcon5;
    /* 0x30 */ Component_GUI_AtkComponentIconText* StatusIcon6;
    /* 0x38 */ Component_GUI_AtkComponentIconText* StatusIcon7;
    /* 0x40 */ Component_GUI_AtkComponentIconText* StatusIcon8;
    /* 0x48 */ Component_GUI_AtkComponentIconText* StatusIcon9;
};

struct Client_UI_AddonPartyList_PartyListMemberStruct /* Size=0xF8 */
{
    /* 0x00 */ Client_UI_AddonPartyList_PartyListMemberStruct_StatusIcons StatusIcon;
    /* 0x50 */ Component_GUI_AtkComponentBase* PartyMemberComponent;
    /* 0x58 */ Component_GUI_AtkTextNode* IconBottomLeftText;
    /* 0x60 */ Component_GUI_AtkResNode* NameAndBarsContainer;
    /* 0x68 */ Component_GUI_AtkTextNode* GroupSlotIndicator;
    /* 0x70 */ Component_GUI_AtkTextNode* Name;
    /* 0x78 */ Component_GUI_AtkTextNode* CastingActionName;
    /* 0x80 */ Component_GUI_AtkImageNode* CastingProgressBar;
    /* 0x88 */ Component_GUI_AtkImageNode* CastingProgressBarBackground;
    /* 0x90 */ Component_GUI_AtkResNode* EmnityBarContainer;
    /* 0x98 */ Component_GUI_AtkNineGridNode* EmnityBarFill;
    /* 0xA0 */ Component_GUI_AtkImageNode* ClassJobIcon;
    /* 0xA8 */ void* UnknownA8;
    /* 0xB0 */ Component_GUI_AtkImageNode* UnknownImageB0;
    /* 0xB8 */ Component_GUI_AtkComponentBase* HPGaugeComponent;
    /* 0xC0 */ Component_GUI_AtkComponentGaugeBar* HPGaugeBar;
    /* 0xC8 */ Component_GUI_AtkComponentGaugeBar* MPGaugeBar;
    /* 0xD0 */ Component_GUI_AtkResNode* TargetGlowContainer;
    /* 0xD8 */ Component_GUI_AtkNineGridNode* ClickFlash;
    /* 0xE0 */ Component_GUI_AtkNineGridNode* TargetGlow;
    /*      */ byte _gap_0xE8[0x8];
    /* 0xF0 */ byte EmnityByte;
    /*      */ byte _gap_0xF1;
    /*      */ byte _gap_0xF2[0x2];
    /*      */ byte _gap_0xF4[0x4];
};

struct Client_UI_AddonPartyList_PartyMembers /* Size=0x7C0 */
{
    /* 0x000 */ Client_UI_AddonPartyList_PartyListMemberStruct PartyMember0;
    /* 0x0F8 */ Client_UI_AddonPartyList_PartyListMemberStruct PartyMember1;
    /* 0x1F0 */ Client_UI_AddonPartyList_PartyListMemberStruct PartyMember2;
    /* 0x2E8 */ Client_UI_AddonPartyList_PartyListMemberStruct PartyMember3;
    /* 0x3E0 */ Client_UI_AddonPartyList_PartyListMemberStruct PartyMember4;
    /* 0x4D8 */ Client_UI_AddonPartyList_PartyListMemberStruct PartyMember5;
    /* 0x5D0 */ Client_UI_AddonPartyList_PartyListMemberStruct PartyMember6;
    /* 0x6C8 */ Client_UI_AddonPartyList_PartyListMemberStruct PartyMember7;
};

struct Client_UI_AddonPartyList_TrustMembers /* Size=0x6C8 */
{
    /* 0x000 */ Client_UI_AddonPartyList_PartyListMemberStruct Trust0;
    /* 0x0F8 */ Client_UI_AddonPartyList_PartyListMemberStruct Trust1;
    /* 0x1F0 */ Client_UI_AddonPartyList_PartyListMemberStruct Trust2;
    /* 0x2E8 */ Client_UI_AddonPartyList_PartyListMemberStruct Trust3;
    /* 0x3E0 */ Client_UI_AddonPartyList_PartyListMemberStruct Trust4;
    /* 0x4D8 */ Client_UI_AddonPartyList_PartyListMemberStruct Trust5;
    /* 0x5D0 */ Client_UI_AddonPartyList_PartyListMemberStruct Trust6;
};

struct Client_UI_AddonPartyList /* Size=0x13D8 */
{
    /* 0x0000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x0220 */ Client_UI_AddonPartyList_PartyMembers PartyMember;
    /* 0x09E0 */ Client_UI_AddonPartyList_TrustMembers TrustMember;
    /* 0x10A8 */ Client_UI_AddonPartyList_PartyListMemberStruct Chocobo;
    /* 0x11A0 */ Client_UI_AddonPartyList_PartyListMemberStruct Pet;
    /* 0x1298 */ unsigned __int32 PartyClassJobIconId[0x8];
    /* 0x12B8 */ unsigned __int32 TrustClassJobIconId[0x7];
    /* 0x12D4 */ unsigned __int32 ChocoboIconId;
    /* 0x12D8 */ unsigned __int32 PetIconId;
    /*        */ byte _gap_0x12DC[0x4];
    /*        */ byte _gap_0x12E0[0x80];
    /* 0x1360 */ __int16 Edited[0x11];
    /*        */ byte _gap_0x1382[0x2];
    /*        */ byte _gap_0x1384[0x4];
    /* 0x1388 */ Component_GUI_AtkNineGridNode* BackgroundNineGridNode;
    /* 0x1390 */ Component_GUI_AtkTextNode* PartyTypeTextNode;
    /* 0x1398 */ Component_GUI_AtkResNode* LeaderMarkResNode;
    /* 0x13A0 */ Component_GUI_AtkResNode* MpBarSpecialResNode;
    /* 0x13A8 */ Component_GUI_AtkTextNode* MpBarSpecialTextNode;
    /* 0x13B0 */ __int32 MemberCount;
    /* 0x13B4 */ __int32 TrustCount;
    /* 0x13B8 */ __int32 EnmityLeaderIndex;
    /* 0x13BC */ __int32 HideWhenSolo;
    /* 0x13C0 */ __int32 HoveredIndex;
    /* 0x13C4 */ __int32 TargetedIndex;
    /* 0x13C8 */ __int32 Unknown1410;
    /* 0x13CC */ __int32 Unknown1414;
    /* 0x13D0 */ byte Unknown1418;
    /* 0x13D1 */ byte PetCount;
    /* 0x13D2 */ byte ChocoboCount;
    /*        */ byte _gap_0x13D3;
    /*        */ byte _gap_0x13D4[0x4];
};

struct Client_UI_AddonRaceChocoboResult /* Size=0x2C8 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x48];
    /* 0x268 */ Component_GUI_AtkComponentButton* LeaveButton;
    /*       */ byte _gap_0x270[0x58];
};

struct Client_UI_AddonRaidFinder /* Size=0xEF0 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x68];
    /* 0x288 */ Component_GUI_AtkComponentList* DutyList;
    /* 0x290 */ Component_GUI_AtkComponentNode* CategoryDescriptionComponent;
    /* 0x298 */ Component_GUI_AtkComponentScrollBar* CategoryDescriptionScrollBar;
    /* 0x2A0 */ Component_GUI_AtkTextNode* ItemLevelText;
    /* 0x2A8 */ Component_GUI_AtkComponentButton* UnselectButton;
    /* 0x2B0 */ Component_GUI_AtkComponentDropDownList* OrderByDropDownList;
    /* 0x2B8 */ Component_GUI_AtkComponentButton* DutyTypeButton;
    /*       */ byte _gap_0x2C0[0xB8];
    /* 0x378 */ Client_System_String_Utf8String RaidsTooltipString;
    /* 0x3E0 */ Client_System_String_Utf8String TrialsTooltipString;
    /* 0x448 */ Client_System_String_Utf8String UltimatesTooltipString;
    /*       */ byte _gap_0x4B0[0x20];
    /*       */ byte _gap_0x4D0[0x4];
    /* 0x4D4 */ __int32 HighlightedRow;
    /*       */ byte _gap_0x4D8[0x4];
    /* 0x4DC */ __int32 NumDisplayedEntries;
    /* 0x4E0 */ __int32 SelectedTab;
    /*       */ byte _gap_0x4E4[0x4];
    /* 0x4E8 */ byte EntryInfoArray[0xA00];
    /*       */ byte _gap_0xEE8[0x8];
};

enum Client_UI_RaidFinderEntryFlags0x1 /* Size=0x1 */
{
    AvailableForSelection = 1,
    Selected = 2,
    Locked = 4,
    Ultimate = 8,
    Unreal = 32,
    Extreme = 64
};

struct Client_UI_RaidFinderDutyEntry /* Size=0x140 */
{
    /* 0x000 */ Client_System_String_Utf8String DutyName;
    /* 0x068 */ Client_System_String_Utf8String DutyLevel;
    /* 0x0D0 */ Client_System_String_Utf8String CurrentlyRecruitingPartiesCount;
    /* 0x138 */ Client_UI_RaidFinderEntryFlags0x1 Flags;
    /*       */ byte _gap_0x139;
    /*       */ byte _gap_0x13A[0x2];
    /*       */ byte _gap_0x13C[0x4];
};

struct Client_UI_AddonRecipeNote /* Size=0x22D0 */
{
    /* 0x0000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x0220 */ Component_GUI_AtkTextNode* Unk220;
    /* 0x0228 */ Component_GUI_AtkTextNode* Unk228;
    /* 0x0230 */ Component_GUI_AtkTextNode* Unk230;
    /* 0x0238 */ Component_GUI_AtkImageNode* Unk238;
    /*        */ byte _gap_0x240[0x8];
    /* 0x0248 */ Component_GUI_AtkResNode* Unk248;
    /* 0x0250 */ Component_GUI_AtkResNode* Unk250;
    /* 0x0258 */ Component_GUI_AtkResNode* Unk258;
    /* 0x0260 */ Component_GUI_AtkComponentRadioButton* Unk260;
    /* 0x0268 */ Component_GUI_AtkComponentRadioButton* Unk268;
    /* 0x0270 */ Component_GUI_AtkComponentRadioButton* Unk270;
    /* 0x0278 */ Component_GUI_AtkComponentRadioButton* Unk278;
    /* 0x0280 */ Component_GUI_AtkComponentRadioButton* Unk280;
    /* 0x0288 */ Component_GUI_AtkComponentRadioButton* Unk288;
    /* 0x0290 */ Component_GUI_AtkComponentRadioButton* Unk290;
    /* 0x0298 */ Component_GUI_AtkComponentRadioButton* Unk298;
    /* 0x02A0 */ Component_GUI_AtkComponentRadioButton* Unk2A0;
    /*        */ byte _gap_0x2A8[0x28];
    /* 0x02D0 */ Component_GUI_AtkImageNode* Unk2D0;
    /* 0x02D8 */ Component_GUI_AtkImageNode* Unk2D8;
    /* 0x02E0 */ Component_GUI_AtkImageNode* Unk2E0;
    /* 0x02E8 */ Component_GUI_AtkImageNode* Unk2E8;
    /* 0x02F0 */ Component_GUI_AtkImageNode* Unk2F0;
    /* 0x02F8 */ Component_GUI_AtkImageNode* Unk2F8;
    /* 0x0300 */ Component_GUI_AtkImageNode* Unk300;
    /* 0x0308 */ Component_GUI_AtkImageNode* Unk308;
    /* 0x0310 */ Component_GUI_AtkImageNode* Unk310;
    /* 0x0318 */ Component_GUI_AtkComponentButton* TrialSynthesisButton;
    /* 0x0320 */ Component_GUI_AtkComponentButton* QuickSynthesisButton;
    /* 0x0328 */ Component_GUI_AtkComponentButton* SynthesizeButton;
    /* 0x0330 */ Component_GUI_AtkComponentButton* Unk330;
    /* 0x0338 */ Component_GUI_AtkComponentButton* Unk338;
    /* 0x0340 */ Component_GUI_AtkComponentButton* Unk340;
    /* 0x0348 */ Component_GUI_AtkComponentButton* Unk348;
    /* 0x0350 */ Component_GUI_AtkComponentButton* Unk350;
    /* 0x0358 */ Component_GUI_AtkResNode* Unk358;
    /* 0x0360 */ Component_GUI_AtkTextNode* Unk360;
    /* 0x0368 */ Component_GUI_AtkComponentBase* Unk368;
    /* 0x0370 */ Component_GUI_AtkComponentBase* Unk370;
    /* 0x0378 */ Component_GUI_AtkComponentBase* Unk378;
    /* 0x0380 */ Component_GUI_AtkComponentBase* Unk380;
    /* 0x0388 */ Component_GUI_AtkComponentBase* Unk388;
    /* 0x0390 */ Component_GUI_AtkTextNode* Unk390;
    /* 0x0398 */ Component_GUI_AtkTextNode* Unk398;
    /* 0x03A0 */ Component_GUI_AtkTextNode* Unk3A0;
    /* 0x03A8 */ Component_GUI_AtkTextNode* Unk3A8;
    /* 0x03B0 */ Component_GUI_AtkTextNode* Unk3B0;
    /* 0x03B8 */ Component_GUI_AtkTextNode* Unk3B8;
    /* 0x03C0 */ Component_GUI_AtkResNode* Unk3C0;
    /* 0x03C8 */ void* Unk3C8;
    /* 0x03D0 */ Component_GUI_AtkComponentButton* Unk3D0;
    /* 0x03D8 */ Component_GUI_AtkResNode* Unk3D8;
    /* 0x03E0 */ Component_GUI_AtkComponentButton* Unk3E0;
    /* 0x03E8 */ Component_GUI_AtkResNode* Unk3E8;
    /* 0x03F0 */ Component_GUI_AtkResNode* Unk3F0;
    /* 0x03F8 */ void* Unk3F8;
    /* 0x0400 */ void* Unk400;
    /* 0x0408 */ void* Unk408;
    /* 0x0410 */ Client_UI_AddonRecipeNote* this410;
    /* 0x0418 */ void* Unk418;
    /* 0x0420 */ void* Unk420;
    /* 0x0428 */ void* Unk428;
    /* 0x0430 */ Client_UI_AddonRecipeNote* this430;
    /* 0x0438 */ void* Unk438;
    /* 0x0440 */ void* Unk440;
    /* 0x0448 */ void* Unk448;
    /* 0x0450 */ void* Unk450;
    /* 0x0458 */ void* Unk458;
    /* 0x0460 */ void* Unk460;
    /* 0x0468 */ void* Unk468;
    /* 0x0470 */ void* Unk470;
    /* 0x0478 */ Component_GUI_AtkTextNode* Quality;
    /* 0x0480 */ void* Unk480;
    /* 0x0488 */ void* Unk488;
    /* 0x0490 */ void* Unk490;
    /* 0x0498 */ void* Unk498;
    /* 0x04A0 */ void* Unk4A0;
    /* 0x04A8 */ void* Unk4A8;
    /* 0x04B0 */ void* Unk4B0;
    /* 0x04B8 */ void* Unk4B8;
    /* 0x04C0 */ void* Unk4C0;
    /* 0x04C8 */ void* Unk4C8;
    /* 0x04D0 */ void* Unk4D0;
    /* 0x04D8 */ void* Unk4D8;
    /* 0x04E0 */ void* Unk4E0;
    /* 0x04E8 */ void* Unk4E8;
    /* 0x04F0 */ void* Unk4F0;
    /* 0x04F8 */ void* Unk4F8;
    /* 0x0500 */ void* Unk500;
    /* 0x0508 */ void* Unk508;
    /* 0x0510 */ void* Unk510;
    /* 0x0518 */ void* Unk518;
    /* 0x0520 */ void* Unk520;
    /* 0x0528 */ void* Unk528;
    /* 0x0530 */ void* Unk530;
    /* 0x0538 */ void* Unk538;
    /* 0x0540 */ void* Unk540;
    /* 0x0548 */ void* Unk548;
    /* 0x0550 */ void* Unk550;
    /* 0x0558 */ void* Unk558;
    /* 0x0560 */ void* Unk560;
    /*        */ byte _gap_0x568[0x10];
    /* 0x0578 */ void* Unk578;
    /* 0x0580 */ void* Unk580;
    /* 0x0588 */ void* Unk588;
    /* 0x0590 */ void* Unk590;
    /* 0x0598 */ void* Unk598;
    /* 0x05A0 */ void* Unk5A0;
    /* 0x05A8 */ void* Unk5A8;
    /* 0x05B0 */ void* Unk5B0;
    /* 0x05B8 */ void* Unk5B8;
    /* 0x05C0 */ void* Unk5C0;
    /* 0x05C8 */ void* Unk5C8;
    /* 0x05D0 */ void* Unk5D0;
    /*        */ byte _gap_0x5D8[0x10];
    /* 0x05E8 */ void* Unk5E8;
    /* 0x05F0 */ void* Unk5F0;
    /* 0x05F8 */ void* Unk5F8;
    /* 0x0600 */ void* Unk600;
    /* 0x0608 */ void* Unk608;
    /* 0x0610 */ void* Unk610;
    /* 0x0618 */ void* Unk618;
    /* 0x0620 */ void* Unk620;
    /* 0x0628 */ void* Unk628;
    /* 0x0630 */ void* Unk630;
    /* 0x0638 */ void* Unk638;
    /* 0x0640 */ void* Unk640;
    /*        */ byte _gap_0x648[0x10];
    /* 0x0658 */ void* Unk658;
    /* 0x0660 */ void* Unk660;
    /* 0x0668 */ void* Unk668;
    /* 0x0670 */ void* Unk670;
    /* 0x0678 */ void* Unk678;
    /* 0x0680 */ void* Unk680;
    /* 0x0688 */ void* Unk688;
    /* 0x0690 */ void* Unk690;
    /* 0x0698 */ void* Unk698;
    /* 0x06A0 */ void* Unk6A0;
    /* 0x06A8 */ void* Unk6A8;
    /* 0x06B0 */ void* Unk6B0;
    /*        */ byte _gap_0x6B8[0x10];
    /* 0x06C8 */ void* Unk6C8;
    /* 0x06D0 */ void* Unk6D0;
    /* 0x06D8 */ void* Unk6D8;
    /* 0x06E0 */ void* Unk6E0;
    /* 0x06E8 */ void* Unk6E8;
    /* 0x06F0 */ void* Unk6F0;
    /* 0x06F8 */ void* Unk6F8;
    /* 0x0700 */ void* Unk700;
    /* 0x0708 */ void* Unk708;
    /* 0x0710 */ void* Unk710;
    /* 0x0718 */ void* Unk718;
    /* 0x0720 */ void* Unk720;
    /*        */ byte _gap_0x728[0x10];
    /* 0x0738 */ void* Unk738;
    /* 0x0740 */ void* Unk740;
    /* 0x0748 */ void* Unk748;
    /* 0x0750 */ void* Unk750;
    /* 0x0758 */ void* Unk758;
    /* 0x0760 */ void* Unk760;
    /* 0x0768 */ void* Unk768;
    /* 0x0770 */ void* Unk770;
    /* 0x0778 */ void* Unk778;
    /* 0x0780 */ void* Unk780;
    /* 0x0788 */ void* Unk788;
    /* 0x0790 */ void* Unk790;
    /*        */ byte _gap_0x798[0x10];
    /* 0x07A8 */ void* Unk7A8;
    /*        */ byte _gap_0x7B0[0x50];
    /* 0x0800 */ Client_UI_AddonRecipeNote* this800;
    /* 0x0808 */ Component_GUI_AtkStage* Unk808;
    /* 0x0810 */ Component_GUI_AtkComponentTextInput* Unk810;
    /* 0x0818 */ Client_UI_AddonRecipeNote* this818;
    /*        */ byte _gap_0x820[0x330];
    /* 0x0B50 */ char* UnkB50;
    /*        */ byte _gap_0xB58[0x8];
    /* 0x0B60 */ char* UnkB60;
    /*        */ byte _gap_0xB68[0x8];
    /* 0x0B70 */ char* UnkB70;
    /*        */ byte _gap_0xB78[0x8];
    /* 0x0B80 */ char* UnkB80;
    /*        */ byte _gap_0xB88[0x8];
    /* 0x0B90 */ char* UnkB90;
    /*        */ byte _gap_0xB98[0x8];
    /* 0x0BA0 */ char* UnkBA0;
    /*        */ byte _gap_0xBA8[0x8];
    /* 0x0BB0 */ char* UnkBB0;
    /*        */ byte _gap_0xBB8[0x8];
    /* 0x0BC0 */ char* UnkBC0;
    /*        */ byte _gap_0xBC8[0x8];
    /* 0x0BD0 */ char* UnkBD0;
    /*        */ byte _gap_0xBD8[0x8];
    /* 0x0BE0 */ char* UnkBE0;
    /*        */ byte _gap_0xBE8[0x8];
    /* 0x0BF0 */ char* UnkBF0;
    /*        */ byte _gap_0xBF8[0x8];
    /* 0x0C00 */ char* UnkC00;
    /*        */ byte _gap_0xC08[0x8];
    /* 0x0C10 */ char* UnkC10;
    /*        */ byte _gap_0xC18[0x1520];
    /* 0x2138 */ char* Unk2138;
    /* 0x2140 */ char* Unk2140;
    /* 0x2148 */ char* Unk2148;
    /* 0x2150 */ char* Unk2150;
    /* 0x2158 */ char* Unk2158;
    /* 0x2160 */ char* Unk2160;
    /* 0x2168 */ char* Unk2168;
    /* 0x2170 */ char* Unk2170;
    /* 0x2178 */ char* Unk2178;
    /*        */ byte _gap_0x2180[0x150];
};

struct Client_UI_AddonReconstructionBox /* Size=0x440 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x38];
    /* 0x258 */ byte DonationInfoArray[0x1E0];
    /* 0x438 */ __int32 ItemHovered;
    /*       */ byte _gap_0x43C[0x4];
};

struct Client_UI_AddonItemDonationInfo /* Size=0x30 */
{
    /* 0x00 */ void* UnkPtr1;
    /* 0x08 */ void* UnkPtr2;
    /* 0x10 */ void* UnkPtr3;
    /* 0x18 */ void* UnkPtr4;
    /* 0x20 */ void* UnkPtr5;
    /*      */ byte _gap_0x28[0x4];
    /* 0x2C */ __int32 UnkValue1;
};

struct Client_UI_AddonRelicNoteBook_TargetNode /* Size=0x28 */
{
    /* 0x00 */ Component_GUI_AtkComponentCheckBox* CheckBox;
    /* 0x08 */ Component_GUI_AtkResNode* ResNode;
    /* 0x10 */ Component_GUI_AtkImageNode* ImageNode;
    /* 0x18 */ Component_GUI_AtkTextNode* CounterTextNode;
    /*      */ byte _gap_0x20[0x8];
};

struct Client_UI_AddonRelicNoteBook /* Size=0xAA8 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Component_GUI_AtkImageNode* CornerImage;
    /* 0x228 */ Component_GUI_AtkComponentBase* WeaponImageContainer;
    /* 0x230 */ Component_GUI_AtkImageNode* WeaponImage;
    /* 0x238 */ Component_GUI_AtkTextNode* WeaponText;
    /* 0x240 */ Component_GUI_AtkTextNode* RewardText;
    /* 0x248 */ Component_GUI_AtkTextNode* RewardTextAmount;
    /* 0x250 */ Component_GUI_AtkComponentList* CategoryList;
    /* 0x258 */ Component_GUI_AtkResNode* EnemyContainer;
    /* 0x260 */ Client_UI_AddonRelicNoteBook_TargetNode Enemy0;
    /* 0x288 */ Client_UI_AddonRelicNoteBook_TargetNode Enemy1;
    /* 0x2B0 */ Client_UI_AddonRelicNoteBook_TargetNode Enemy2;
    /* 0x2D8 */ Client_UI_AddonRelicNoteBook_TargetNode Enemy3;
    /* 0x300 */ Client_UI_AddonRelicNoteBook_TargetNode Enemy4;
    /* 0x328 */ Client_UI_AddonRelicNoteBook_TargetNode Enemy5;
    /* 0x350 */ Client_UI_AddonRelicNoteBook_TargetNode Enemy6;
    /* 0x378 */ Client_UI_AddonRelicNoteBook_TargetNode Enemy7;
    /* 0x3A0 */ Client_UI_AddonRelicNoteBook_TargetNode Enemy8;
    /* 0x3C8 */ Client_UI_AddonRelicNoteBook_TargetNode Enemy9;
    /* 0x3F0 */ Component_GUI_AtkResNode* DungeonContainer;
    /* 0x3F8 */ Client_UI_AddonRelicNoteBook_TargetNode Dungeon0;
    /* 0x420 */ Client_UI_AddonRelicNoteBook_TargetNode Dungeon1;
    /* 0x448 */ Client_UI_AddonRelicNoteBook_TargetNode Dungeon2;
    /*       */ byte _gap_0x470[0x118];
    /* 0x588 */ Component_GUI_AtkResNode* FateContainer;
    /* 0x590 */ Client_UI_AddonRelicNoteBook_TargetNode Fate0;
    /* 0x5B8 */ Client_UI_AddonRelicNoteBook_TargetNode Fate1;
    /* 0x5E0 */ Client_UI_AddonRelicNoteBook_TargetNode Fate2;
    /*       */ byte _gap_0x608[0x118];
    /* 0x720 */ Component_GUI_AtkResNode* LeveContainer;
    /* 0x728 */ Client_UI_AddonRelicNoteBook_TargetNode Leve0;
    /* 0x750 */ Client_UI_AddonRelicNoteBook_TargetNode Leve1;
    /* 0x778 */ Client_UI_AddonRelicNoteBook_TargetNode Leve2;
    /*       */ byte _gap_0x7A0[0x118];
    /* 0x8B8 */ Component_GUI_AtkTextNode* TargetText;
    /* 0x8C0 */ Component_GUI_AtkTextNode* TargetLocationText;
    /*       */ byte _gap_0x8C8[0x1E0];
};

struct Client_UI_AddonRepair /* Size=0xF7A0 */
{
    /* 0x0000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*        */ byte _gap_0x220[0x8];
    /* 0x0228 */ Component_GUI_AtkTextNode* UnusedText1;
    /* 0x0230 */ Component_GUI_AtkTextNode* JobLevel;
    /* 0x0238 */ Component_GUI_AtkImageNode* JobIcon;
    /* 0x0240 */ Component_GUI_AtkTextNode* JobName;
    /* 0x0248 */ Component_GUI_AtkTextNode* UnusedText2;
    /* 0x0250 */ Component_GUI_AtkComponentDropDownList* Dropdown;
    /* 0x0258 */ Component_GUI_AtkComponentButton* RepairAllButton;
    /* 0x0260 */ Component_GUI_AtkResNode* HeaderContainer;
    /* 0x0268 */ Component_GUI_AtkTextNode* UnusedText3;
    /* 0x0270 */ Component_GUI_AtkTextNode* NothingToRepairText;
    /* 0x0278 */ Component_GUI_AtkComponentList* ItemList;
    /*        */ byte _gap_0x280[0xF520];
};

struct Client_UI_AddonRequest /* Size=0x2E0 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Component_GUI_AtkCollisionNode* AtkCollisionNode220;
    /* 0x228 */ Component_GUI_AtkComponentIcon* AtkComponentIcon228;
    /* 0x230 */ Component_GUI_AtkComponentIcon* AtkComponentIcon230;
    /* 0x238 */ Component_GUI_AtkComponentIcon* AtkComponentIcon238;
    /* 0x240 */ Component_GUI_AtkComponentIcon* AtkComponentIcon240;
    /* 0x248 */ Component_GUI_AtkComponentIcon* AtkComponentIcon248;
    /* 0x250 */ Component_GUI_AtkComponentDragDrop* AtkComponentDragDrop250;
    /* 0x258 */ Component_GUI_AtkComponentDragDrop* AtkComponentDragDrop258;
    /* 0x260 */ Component_GUI_AtkComponentDragDrop* AtkComponentDragDrop260;
    /* 0x268 */ Component_GUI_AtkComponentDragDrop* AtkComponentDragDrop268;
    /* 0x270 */ Component_GUI_AtkComponentDragDrop* AtkComponentDragDrop270;
    /* 0x278 */ Component_GUI_AtkComponentButton* HandOverButton;
    /* 0x280 */ Component_GUI_AtkComponentButton* CancelButton;
    /* 0x288 */ Component_GUI_AtkComponentIcon* AtkComponentIcon288;
    /* 0x290 */ Component_GUI_AtkComponentIcon* AtkComponentIcon290;
    /* 0x298 */ Component_GUI_AtkComponentIcon* AtkComponentIcon298;
    /* 0x2A0 */ Component_GUI_AtkComponentIcon* AtkComponentIcon2A0;
    /* 0x2A8 */ Component_GUI_AtkComponentIcon* AtkComponentIcon2A8;
    /* 0x2B0 */ Component_GUI_AtkComponentDragDrop* AtkComponentDragDrop2B0;
    /* 0x2B8 */ Component_GUI_AtkComponentDragDrop* AtkComponentDragDrop2B8;
    /* 0x2C0 */ Component_GUI_AtkComponentDragDrop* AtkComponentDragDrop2C0;
    /* 0x2C8 */ Component_GUI_AtkComponentDragDrop* AtkComponentDragDrop2C8;
    /* 0x2D0 */ Component_GUI_AtkComponentDragDrop* AtkComponentDragDrop2D0;
    /* 0x2D8 */ __int32 EntryCount;
    /*       */ byte _gap_0x2DC[0x4];
};

struct Client_UI_AddonRetainerGrid0 /* Size=0x340 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x120];
};

struct Client_UI_AddonRetainerList_AddonRetainerListVTable /* Size=0x180 */
{
    /*       */ byte _gap_0x0[0x178];
    /* 0x178 */ __int64 OnSetup;
};

struct Client_UI_AddonRetainerList /* Size=0x220 */
{
    union {
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x000 */ Client_UI_AddonRetainerList_AddonRetainerListVTable* VTable;
    } _union_0x0;
    /*       */ byte _gap_0x8[0x218];
};

struct Client_UI_AddonRetainerSell /* Size=0x278 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Component_GUI_AtkComponentButton* Confirm;
    /* 0x228 */ Component_GUI_AtkComponentButton* Cancel;
    /* 0x230 */ Component_GUI_AtkComponentButton* ComparePrices;
    /* 0x238 */ Component_GUI_AtkComponentIcon* ItemIcon;
    /*       */ byte _gap_0x240[0x8];
    /* 0x248 */ Component_GUI_AtkComponentNumericInput* Quantity;
    /* 0x250 */ Component_GUI_AtkComponentNumericInput* AskingPrice;
    /* 0x258 */ Component_GUI_AtkTextNode* ItemName;
    /* 0x260 */ Component_GUI_AtkTextNode* Total;
    /* 0x268 */ Component_GUI_AtkTextNode* Tax;
    /*       */ byte _gap_0x270[0x8];
};

struct Client_UI_AddonRetainerTaskAsk_AddonRetainerTaskAskVTable /* Size=0x180 */
{
    /*       */ byte _gap_0x0[0x178];
    /* 0x178 */ __int64 OnSetup;
};

struct Client_UI_AddonRetainerTaskAsk /* Size=0x2B8 */
{
    union {
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x000 */ Client_UI_AddonRetainerTaskAsk_AddonRetainerTaskAskVTable* VTable;
    } _union_0x0;
    /*       */ byte _gap_0x8[0x2A0];
    /* 0x2A8 */ Component_GUI_AtkComponentButton* AssignButton;
    /* 0x2B0 */ Component_GUI_AtkComponentButton* ReturnButton;
};

struct Client_UI_AddonRetainerTaskList_AddonRetainerTaskListVTable /* Size=0x180 */
{
    /*       */ byte _gap_0x0[0x178];
    /* 0x178 */ __int64 OnSetup;
};

struct Client_UI_AddonRetainerTaskList /* Size=0x220 */
{
    union {
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x000 */ Client_UI_AddonRetainerTaskList_AddonRetainerTaskListVTable* VTable;
    } _union_0x0;
    /*       */ byte _gap_0x8[0x218];
};

struct Client_UI_AddonRetainerTaskResult_AddonRetainerTaskResultVTable /* Size=0x180 */
{
    /*       */ byte _gap_0x0[0x178];
    /* 0x178 */ __int64 OnSetup;
};

struct Client_UI_AddonRetainerTaskResult /* Size=0x258 */
{
    union {
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x000 */ Client_UI_AddonRetainerTaskResult_AddonRetainerTaskResultVTable* VTable;
    } _union_0x0;
    /*       */ byte _gap_0x8[0x218];
    /* 0x220 */ Component_GUI_AtkTextNode* VentureNameTextNode;
    /*       */ byte _gap_0x228[0x18];
    /* 0x240 */ Component_GUI_AtkComponentButton* ReassignButton;
    /* 0x248 */ Component_GUI_AtkComponentButton* ConfirmButton;
    /*       */ byte _gap_0x250[0x8];
};

struct Client_UI_AddonSalvageDialog /* Size=0x250 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x8];
    /* 0x228 */ Component_GUI_AtkComponentButton* DesynthesizeButton;
    /* 0x230 */ Component_GUI_AtkComponentCheckBox* CheckBox;
    /*       */ byte _gap_0x238[0x8];
    /* 0x240 */ Component_GUI_AtkComponentCheckBox* CheckBox2;
    /* 0x248 */ bool BulkDesynthEnabled;
    /*       */ byte _gap_0x249;
    /*       */ byte _gap_0x24A[0x2];
    /*       */ byte _gap_0x24C[0x4];
};

enum Client_UI_Agent_AgentSalvage_SalvageItemCategory0x4 /* Size=0x4 */
{
    InventoryEquipment = 0,
    InventoryHousing = 1,
    ArmouryMainOff = 2,
    ArmouryHeadBodyHands = 3,
    ArmouryLegsFeet = 4,
    ArmouryNeckEars = 5,
    ArmouryWristsRings = 6,
    Equipped = 7
};

struct Client_UI_AddonSalvageItemSelector /* Size=0x1CB0 */
{
    /* 0x0000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*        */ byte _gap_0x220[0x48];
    /* 0x0268 */ byte ItemData[0x1A40];
    /* 0x1CA8 */ Client_UI_Agent_AgentSalvage_SalvageItemCategory0x4 SelectedCategory;
    /* 0x1CAC */ unsigned __int32 ItemCount;
};

struct Client_UI_AddonSatisfactionSupply /* Size=0x670 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x4];
    /* 0x224 */ __int32 HoveredElementIndex;
    /*       */ byte _gap_0x228[0xE0];
    /* 0x308 */ byte DeliveryInfo[0x138];
    /*       */ byte _gap_0x440[0x230];
};

struct Client_UI_AddonDeliveryItemInfo /* Size=0x68 */
{
    /* 0x00 */ unsigned __int32 ItemId;
    /*      */ byte _gap_0x4[0x4];
    /*      */ byte _gap_0x8[0x60];
};

struct Client_UI_PopupMenu /* Size=0x68 */
{
    /* 0x00 */ Component_GUI_AtkEventListener AtkEventListener;
    /* 0x08 */ Component_GUI_AtkStage* AtkStage;
    /* 0x10 */ byte** EntryNames;
    /*      */ byte _gap_0x18[0x18];
    /* 0x30 */ Component_GUI_AtkComponentWindow* Window;
    /* 0x38 */ Component_GUI_AtkComponentList* List;
    /* 0x40 */ Component_GUI_AtkUnitBase* Owner;
    /*      */ byte _gap_0x48[0x4];
    /* 0x4C */ __int32 EntryCount;
    /*      */ byte _gap_0x50[0x18];
};

struct Client_UI_AddonSelectIconString_PopupMenuDerive /* Size=0x68 */
{
    /* 0x00 */ Client_UI_PopupMenu PopupMenu;
};

struct Client_UI_AddonSelectIconString /* Size=0x2A8 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x18];
    /* 0x238 */ Client_UI_AddonSelectIconString_PopupMenuDerive PopupMenu;
    /*       */ byte _gap_0x2A0[0x8];
};

struct Client_UI_AddonSelectOk /* Size=0x2A8 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Component_GUI_AtkTextNode* PromptText;
    /* 0x228 */ Component_GUI_AtkComponentButton* OkButton;
    /*       */ byte _gap_0x230[0x78];
};

struct Client_UI_AddonSelectString_AddonSelectStringVTable /* Size=0x180 */
{
    /*       */ byte _gap_0x0[0x178];
    /* 0x178 */ __int64 OnSetup;
};

struct Client_UI_AddonSelectString_PopupMenuDerive /* Size=0x70 */
{
    /* 0x00 */ Client_UI_PopupMenu PopupMenu;
    /*      */ byte _gap_0x68[0x8];
};

struct Client_UI_AddonSelectString /* Size=0x2A8 */
{
    union {
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x000 */ Client_UI_AddonSelectString_AddonSelectStringVTable* VTable;
    } _union_0x0;
    /*       */ byte _gap_0x8[0x218];
    /* 0x220 */ Client_UI_AddonSelectString_PopupMenuDerive PopupMenu;
    /*       */ byte _gap_0x290[0x18];
};

struct Client_UI_AddonSelectYesno /* Size=0x2D0 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Component_GUI_AtkTextNode* PromptText;
    /* 0x228 */ Component_GUI_AtkComponentButton* YesButton;
    /* 0x230 */ Component_GUI_AtkComponentButton* NoButton;
    /* 0x238 */ Component_GUI_AtkComponentButton* AtkComponentButton238;
    /* 0x240 */ Component_GUI_AtkResNode* AtkResNode240;
    /* 0x248 */ Component_GUI_AtkResNode* AtkResNode248;
    /*       */ byte _gap_0x250[0x8];
    /* 0x258 */ Component_GUI_AtkResNode* AtkResNode258;
    /* 0x260 */ Component_GUI_AtkComponentButton* AtkComponentButton260;
    /* 0x268 */ Component_GUI_AtkComponentButton* AtkComponentButton268;
    /* 0x270 */ Component_GUI_AtkComponentButton* AtkComponentButton270;
    /* 0x278 */ Component_GUI_AtkComponentHoldButton* AtkComponentHoldButton278;
    /* 0x280 */ Component_GUI_AtkComponentHoldButton* AtkComponentHoldButton280;
    /* 0x288 */ Component_GUI_AtkComponentHoldButton* AtkComponentHoldButton288;
    /* 0x290 */ Component_GUI_AtkComponentCheckBox* ConfirmCheckBox;
    /* 0x298 */ Component_GUI_AtkTextNode* AtkTextNode298;
    /* 0x2A0 */ Component_GUI_AtkComponentBase* AtkComponentBase2A0;
    /*       */ byte _gap_0x2A8[0x28];
};

struct Client_UI_AddonShopCardDialog /* Size=0x230 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Component_GUI_AtkComponentNumericInput* CardQuantityInput;
    /*       */ byte _gap_0x228[0x8];
};

enum Client_UI_SynthesisCondition0x4 /* Size=0x4 */
{
    Normal = 0,
    Poor = 1,
    Good = 2,
    Excellent = 3
};

struct Client_UI_SynthesisAtkValues /* Size=0x200 */
{
    /*       */ byte _gap_0x0[0x58];
    /* 0x058 */ unsigned __int32 Progress;
    /*       */ byte _gap_0x5C[0x4];
    /*       */ byte _gap_0x60[0x8];
    /* 0x068 */ unsigned __int32 MaxProgress;
    /*       */ byte _gap_0x6C[0x4];
    /*       */ byte _gap_0x70[0x8];
    /* 0x078 */ unsigned __int32 Durability;
    /*       */ byte _gap_0x7C[0x4];
    /*       */ byte _gap_0x80[0x8];
    /* 0x088 */ unsigned __int32 MaxDurability;
    /*       */ byte _gap_0x8C[0x4];
    /*       */ byte _gap_0x90[0x8];
    /* 0x098 */ unsigned __int32 Quality;
    /*       */ byte _gap_0x9C[0x4];
    /*       */ byte _gap_0xA0[0x8];
    /* 0x0A8 */ unsigned __int32 HQPercentage;
    /*       */ byte _gap_0xAC[0x4];
    /*       */ byte _gap_0xB0[0x18];
    /* 0x0C8 */ Client_UI_SynthesisCondition0x4 Condition;
    /*       */ byte _gap_0xCC[0x4];
    /*       */ byte _gap_0xD0[0x28];
    /* 0x0F8 */ unsigned __int32 Step;
    /*       */ byte _gap_0xFC[0x4];
    /*       */ byte _gap_0x100[0x18];
    /* 0x118 */ unsigned __int32 MaxQuality;
    /*       */ byte _gap_0x11C[0x4];
    /*       */ byte _gap_0x120[0x28];
    /* 0x148 */ unsigned __int32 Collectability;
    /*       */ byte _gap_0x14C[0x4];
    /*       */ byte _gap_0x150[0x18];
    /* 0x168 */ unsigned __int32 CollectabilityLow;
    /*       */ byte _gap_0x16C[0x4];
    /*       */ byte _gap_0x170[0x8];
    /* 0x178 */ unsigned __int32 CollectabilityMedium;
    /*       */ byte _gap_0x17C[0x4];
    /*       */ byte _gap_0x180[0x8];
    /* 0x188 */ unsigned __int32 CollectabilityHigh;
    /*       */ byte _gap_0x18C[0x4];
    /*       */ byte _gap_0x190[0x70];
};

struct Client_UI_AddonSynthesis_CraftEffect /* Size=0x20 */
{
    /* 0x00 */ Component_GUI_AtkComponentBase* Container;
    /* 0x08 */ Component_GUI_AtkImageNode* Image;
    /* 0x10 */ Component_GUI_AtkTextNode* StepsRemaining;
    /* 0x18 */ Component_GUI_AtkTextNode* Name;
};

struct Client_UI_AddonSynthesis /* Size=0x8A8 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /*       */ byte _gap_0x220[0x18];
    /* 0x238 */ Component_GUI_AtkComponentButton* QuitButton;
    /* 0x240 */ Component_GUI_AtkComponentButton* CalculationsButton;
    /* 0x248 */ Component_GUI_AtkComponentIcon* ItemIcon;
    /*       */ byte _gap_0x250[0x8];
    /* 0x258 */ Component_GUI_AtkTextNode* ItemName;
    /* 0x260 */ Component_GUI_AtkResNode* DiamondImageNodeContainer;
    /*       */ byte _gap_0x268[0x8];
    /* 0x270 */ Component_GUI_AtkTextNode* Condition;
    /*       */ byte _gap_0x278[0x10];
    /* 0x288 */ Component_GUI_AtkTextNode* CurrentQuality;
    /* 0x290 */ Component_GUI_AtkTextNode* MaxQuality;
    /*       */ byte _gap_0x298[0x20];
    /* 0x2B8 */ Component_GUI_AtkTextNode* HQLiteral;
    /* 0x2C0 */ Component_GUI_AtkTextNode* HQPercentage;
    /* 0x2C8 */ Component_GUI_AtkTextNode* StepNumber;
    /*       */ byte _gap_0x2D0[0x10];
    /* 0x2E0 */ Component_GUI_AtkTextNode* CurrentProgress;
    /* 0x2E8 */ Component_GUI_AtkTextNode* MaxProgress;
    /*       */ byte _gap_0x2F0[0x8];
    /* 0x2F8 */ Component_GUI_AtkTextNode* CurrentDurability;
    /* 0x300 */ Component_GUI_AtkTextNode* StartingDurability;
    /*       */ byte _gap_0x308[0x68];
    /* 0x370 */ Component_GUI_AtkTextNode* CollectabilityLow;
    /* 0x378 */ Component_GUI_AtkTextNode* CollectabilityMid;
    /* 0x380 */ Component_GUI_AtkTextNode* CollectabilityHigh;
    /* 0x388 */ Component_GUI_AtkComponentCheckBox* ToggleCraftEffectPane;
    /*       */ byte _gap_0x390[0x18];
    /* 0x3A8 */ Component_GUI_AtkTextNode* CraftEffectOverflow;
    /* 0x3B0 */ Client_UI_AddonSynthesis_CraftEffect CraftEffect1;
    /* 0x3D0 */ Client_UI_AddonSynthesis_CraftEffect CraftEffect2;
    /* 0x3F0 */ Client_UI_AddonSynthesis_CraftEffect CraftEffect3;
    /* 0x410 */ Client_UI_AddonSynthesis_CraftEffect CraftEffect4;
    /* 0x430 */ Client_UI_AddonSynthesis_CraftEffect CraftEffect5;
    /* 0x450 */ Client_UI_AddonSynthesis_CraftEffect CraftEffect6;
    /* 0x470 */ Client_UI_AddonSynthesis_CraftEffect CraftEffect7;
    /* 0x490 */ Client_UI_AddonSynthesis_CraftEffect CraftEffect8;
    /* 0x4B0 */ Client_UI_AddonSynthesis_CraftEffect CraftEffect9;
    /*       */ byte _gap_0x4D0[0x20];
    /* 0x4F0 */ Client_System_String_Utf8String CraftEffect1HoverText;
    /* 0x558 */ Client_System_String_Utf8String CraftEffect2HoverText;
    /* 0x5C0 */ Client_System_String_Utf8String CraftEffect3HoverText;
    /* 0x628 */ Client_System_String_Utf8String CraftEffect4HoverText;
    /* 0x690 */ Client_System_String_Utf8String CraftEffect5HoverText;
    /* 0x6F8 */ Client_System_String_Utf8String CraftEffect6HoverText;
    /* 0x760 */ Client_System_String_Utf8String CraftEffect7HoverText;
    /* 0x7C8 */ Client_System_String_Utf8String CraftEffect8HoverText;
    /* 0x830 */ Client_System_String_Utf8String CraftEffect9HoverText;
    /*       */ byte _gap_0x898[0x10];
};

struct Client_UI_AddonTalk /* Size=0xE80 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Component_GUI_AtkTextNode* AtkTextNode220;
    /* 0x228 */ Component_GUI_AtkTextNode* AtkTextNode228;
    /* 0x230 */ Component_GUI_AtkResNode* AtkResNode230;
    /* 0x238 */ Component_GUI_AtkTextNode* AtkTextNode238;
    /* 0x240 */ Component_GUI_AtkTextNode* AtkTextNode240;
    /* 0x248 */ Component_GUI_AtkTextNode* AtkTextNode248;
    /*       */ byte _gap_0x250[0x18];
    /* 0x268 */ Client_System_String_Utf8String String268;
    /* 0x2D0 */ Client_System_String_Utf8String String2D0;
    /* 0x338 */ Client_System_String_Utf8String String338;
    /*       */ byte _gap_0x3A0[0x68];
    /* 0x408 */ Client_System_String_Utf8String String408;
    /* 0x470 */ Client_System_String_Utf8String String470;
    /* 0x4D8 */ Client_System_String_Utf8String String4D8;
    /* 0x540 */ Client_System_String_Utf8String String540;
    /*       */ byte _gap_0x5A8[0x10];
    /* 0x5B8 */ Client_UI_AddonTalk* this5B8;
    /* 0x5C0 */ Component_GUI_AtkStage* AtkStage;
    /*       */ byte _gap_0x5C8[0x850];
    /* 0xE18 */ Component_GUI_AtkEventTarget AtkEventTarget;
    /* 0xE20 */ Component_GUI_AtkEventListenerUnk1 AtkEventListenerUnk;
};

struct Client_UI_AddonTeleport /* Size=0x2D8 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Component_GUI_AtkComponentRadioButton* TabHeaderAll;
    /* 0x228 */ Component_GUI_AtkComponentRadioButton* TabHeaderLaNoscea;
    /* 0x230 */ Component_GUI_AtkComponentRadioButton* TabHeaderBlackShroud;
    /* 0x238 */ Component_GUI_AtkComponentRadioButton* TabHeaderThanalan;
    /* 0x240 */ Component_GUI_AtkComponentRadioButton* TabHeaderIshgard;
    /* 0x248 */ Component_GUI_AtkComponentRadioButton* TabHeaderGyrAbania;
    /* 0x250 */ Component_GUI_AtkComponentRadioButton* TabHeaderFarEast;
    /* 0x258 */ Component_GUI_AtkComponentRadioButton* TabHeaderIlsabard;
    /* 0x260 */ Component_GUI_AtkComponentRadioButton* TabHeaderNorvandt;
    /* 0x268 */ Component_GUI_AtkComponentRadioButton* TabHeaderOther;
    /* 0x270 */ Component_GUI_AtkComponentRadioButton* TabHeaderHistory;
    /* 0x278 */ Component_GUI_AtkComponentRadioButton* TabHeaderFavourite;
    /* 0x280 */ Component_GUI_AtkTextNode* GilCountText;
    /* 0x288 */ Component_GUI_AtkComponentTreeList* TeleportTreeList;
    /* 0x290 */ Component_GUI_AtkComponentListItemRenderer* TeleportTreeListFirstHeader;
    /* 0x298 */ Component_GUI_AtkComponentListItemRenderer* TeleportTreeListFirstItem;
    /* 0x2A0 */ void* UnknownVtbl;
    /* 0x2A8 */ Client_UI_AddonTeleport* Addon;
    /* 0x2B0 */ __int64 UnknownFunction;
    /* 0x2B8 */ Component_GUI_AtkComponentButton* SettingsButton;
    /* 0x2C0 */ Component_GUI_AtkTextNode* AetheryteTicketsText;
    /* 0x2C8 */ unsigned __int32 SelectedTab;
    /* 0x2CC */ unsigned __int32 SelectedTabItemCount;
    /* 0x2D0 */ unsigned __int32 ListTotalCount;
    /* 0x2D4 */ unsigned __int32 Unknown2D4;
};

struct Client_UI_DutySlot /* Size=0x168 */
{
    /* 0x000 */ void** vtbl;
    /* 0x008 */ Client_UI_AddonWeeklyBingo* addon;
    /* 0x010 */ __int32 index;
    /*       */ byte _gap_0x14[0x4];
    /*       */ byte _gap_0x18[0x120];
    /* 0x138 */ Component_GUI_AtkComponentButton* DutyButton;
    /* 0x140 */ Component_GUI_AtkImageNode* DutyImage;
    /* 0x148 */ Component_GUI_AtkResNode* DutyResNode;
    /* 0x150 */ Component_GUI_AtkResNode* ResNode1;
    /* 0x158 */ Component_GUI_AtkTextNode* TextNode;
    /* 0x160 */ Component_GUI_AtkResNode* ResNode2;
};

struct Client_UI_DutySlotList /* Size=0x18E8 */
{
    /* 0x0000 */ void** vtbl;
    /* 0x0008 */ void* addon;
    /*        */ byte _gap_0x10[0x10];
    /*        */ byte _gap_0x20[0x4];
    /* 0x0024 */ unsigned __int32 NumSecondChances;
    /* 0x0028 */ Client_UI_DutySlot DutySlot1;
    /* 0x0190 */ Client_UI_DutySlot DutySlot2;
    /* 0x02F8 */ Client_UI_DutySlot DutySlot3;
    /* 0x0460 */ Client_UI_DutySlot DutySlot4;
    /* 0x05C8 */ Client_UI_DutySlot DutySlot5;
    /* 0x0730 */ Client_UI_DutySlot DutySlot6;
    /* 0x0898 */ Client_UI_DutySlot DutySlot7;
    /* 0x0A00 */ Client_UI_DutySlot DutySlot8;
    /* 0x0B68 */ Client_UI_DutySlot DutySlot9;
    /* 0x0CD0 */ Client_UI_DutySlot DutySlot10;
    /* 0x0E38 */ Client_UI_DutySlot DutySlot11;
    /* 0x0FA0 */ Client_UI_DutySlot DutySlot12;
    /* 0x1108 */ Client_UI_DutySlot DutySlot13;
    /* 0x1270 */ Client_UI_DutySlot DutySlot14;
    /* 0x13D8 */ Client_UI_DutySlot DutySlot15;
    /* 0x1540 */ Client_UI_DutySlot DutySlot16;
    /*        */ byte _gap_0x16A8[0x220];
    /* 0x18C8 */ Component_GUI_AtkComponentButton* SecondChanceButton;
    /* 0x18D0 */ Component_GUI_AtkComponentButton* CancelButton;
    /* 0x18D8 */ Component_GUI_AtkTextNode* SecondChancesRemaining;
    /* 0x18E0 */ Component_GUI_AtkResNode* DutyContainer;
};

struct Client_UI_StringThing /* Size=0x50 */
{
    /* 0x00 */ void* vtbl;
    /* 0x08 */ byte* FullSealsText;
    /* 0x10 */ byte* OneOrMoreLinesText;
    /* 0x18 */ byte* SecondChancePointsText;
    /* 0x20 */ byte* ReceiveSealCompleteText;
    /* 0x28 */ byte* ReceiveSealIncompleteText;
    /* 0x30 */ byte* SecondChanceRetryText;
    /*      */ byte _gap_0x38[0x8];
    /* 0x40 */ void* addon;
    /* 0x48 */ Component_GUI_AtkTextNode* TextNode;
};

struct Client_UI_StickerSlot /* Size=0x58 */
{
    /* 0x00 */ void** vtbl;
    /* 0x08 */ void* addon;
    /* 0x10 */ __int32 index;
    /*      */ byte _gap_0x14[0x4];
    /*      */ byte _gap_0x18[0x8];
    /* 0x20 */ Component_GUI_AtkComponentButton* Button;
    /* 0x28 */ Component_GUI_AtkComponentBase* StickerComponentBase;
    /* 0x30 */ Component_GUI_AtkComponentBase* StickerShadowComponentBase;
    /* 0x38 */ Component_GUI_AtkResNode* StickerResNode;
    /* 0x40 */ Component_GUI_AtkResNode* StickerShadowResNode;
    /* 0x48 */ Component_GUI_AtkComponentBase* StickerSidebarBase;
    /* 0x50 */ Component_GUI_AtkResNode* StickerSidebarResNode;
};

struct Client_UI_StickerSlotList /* Size=0x590 */
{
    /* 0x000 */ void** vtbl;
    /* 0x008 */ void* addon;
    /* 0x010 */ Client_UI_StickerSlot StickerSlot1;
    /* 0x068 */ Client_UI_StickerSlot StickerSlot2;
    /* 0x0C0 */ Client_UI_StickerSlot StickerSlot3;
    /* 0x118 */ Client_UI_StickerSlot StickerSlot4;
    /* 0x170 */ Client_UI_StickerSlot StickerSlot5;
    /* 0x1C8 */ Client_UI_StickerSlot StickerSlot6;
    /* 0x220 */ Client_UI_StickerSlot StickerSlot7;
    /* 0x278 */ Client_UI_StickerSlot StickerSlot8;
    /* 0x2D0 */ Client_UI_StickerSlot StickerSlot9;
    /* 0x328 */ Client_UI_StickerSlot StickerSlot10;
    /* 0x380 */ Client_UI_StickerSlot StickerSlot11;
    /* 0x3D8 */ Client_UI_StickerSlot StickerSlot12;
    /* 0x430 */ Client_UI_StickerSlot StickerSlot13;
    /* 0x488 */ Client_UI_StickerSlot StickerSlot14;
    /* 0x4E0 */ Client_UI_StickerSlot StickerSlot15;
    /* 0x538 */ Client_UI_StickerSlot StickerSlot16;
};

struct Client_UI_AddonWeeklyPuzzle_RewardPanelItem /* Size=0x28 */
{
    /* 0x00 */ Component_GUI_AtkComponentBase* CompBase;
    /* 0x08 */ Component_GUI_AtkResNode* Res;
    /* 0x10 */ Component_GUI_AtkTextNode* NameText;
    /* 0x18 */ Component_GUI_AtkTextNode* RewardText;
    /* 0x20 */ __int64 Unk20;
};

struct Client_UI_AddonWeeklyPuzzle_GameTileItem /* Size=0x30 */
{
    /* 0x00 */ Client_UI_AddonWeeklyPuzzle* self;
    /* 0x08 */ Component_GUI_AtkComponentButton* Button;
    /* 0x10 */ Component_GUI_AtkResNode* RevealedIconResNode;
    /* 0x18 */ Component_GUI_AtkResNode* UnkRes20;
    /* 0x20 */ Component_GUI_AtkResNode* RevealedTileResNode;
    /* 0x28 */ __int64 Unk28;
};

struct Client_UI_AddonWeeklyPuzzle_GameTileRow /* Size=0x120 */
{
    /* 0x000 */ Client_UI_AddonWeeklyPuzzle_GameTileItem Col1;
    /* 0x030 */ Client_UI_AddonWeeklyPuzzle_GameTileItem Col2;
    /* 0x060 */ Client_UI_AddonWeeklyPuzzle_GameTileItem Col3;
    /* 0x090 */ Client_UI_AddonWeeklyPuzzle_GameTileItem Col4;
    /* 0x0C0 */ Client_UI_AddonWeeklyPuzzle_GameTileItem Col5;
    /* 0x0F0 */ Client_UI_AddonWeeklyPuzzle_GameTileItem Col6;
};

struct Client_UI_AddonWeeklyPuzzle_GameTileBoard /* Size=0x6C0 */
{
    /* 0x000 */ Client_UI_AddonWeeklyPuzzle_GameTileRow Row1;
    /* 0x120 */ Client_UI_AddonWeeklyPuzzle_GameTileRow Row2;
    /* 0x240 */ Client_UI_AddonWeeklyPuzzle_GameTileRow Row3;
    /* 0x360 */ Client_UI_AddonWeeklyPuzzle_GameTileRow Row4;
    /* 0x480 */ Client_UI_AddonWeeklyPuzzle_GameTileRow Row5;
    /* 0x5A0 */ Client_UI_AddonWeeklyPuzzle_GameTileRow Row6;
};

struct Client_UI_AddonWeeklyPuzzle /* Size=0xD00 */
{
    /* 0x000 */ Component_GUI_AtkUnitBase AtkUnitBase;
    /* 0x220 */ Client_UI_AddonWeeklyPuzzle_RewardPanelItem RewardPanelCommander;
    /* 0x248 */ Client_UI_AddonWeeklyPuzzle_RewardPanelItem RewardPanelCoffer;
    /* 0x270 */ Client_UI_AddonWeeklyPuzzle_RewardPanelItem RewardPanelGiftBox;
    /* 0x298 */ Client_UI_AddonWeeklyPuzzle_RewardPanelItem RewardPanelDualBlades;
    /* 0x2C0 */ Component_GUI_AtkComponentButton* AtkComponentButton2C0;
    /* 0x2C8 */ Component_GUI_AtkResNode* AtkResNode2C8;
    /* 0x2D0 */ Component_GUI_AtkTextNode* AtkTextNode2D0;
    /* 0x2D8 */ Component_GUI_AtkTextNode* AtkTextNode2D8;
    /* 0x2E0 */ Component_GUI_AtkResNode* AtkResNode2E0;
    /* 0x2E8 */ Component_GUI_AtkTextNode* AtkTextNode2E8;
    /* 0x2F0 */ Component_GUI_AtkTextNode* AtkTextNode2F0;
    /* 0x2F8 */ Client_UI_AddonWeeklyPuzzle_GameTileBoard GameBoard;
    /*       */ byte _gap_0x9B8[0x80];
    /* 0xA38 */ Component_GUI_AtkResNode* AtkResNodeA38;
    /*       */ byte _gap_0xA40[0x108];
    /* 0xB48 */ Client_System_String_Utf8String CommanderStr;
    /* 0xBB0 */ Client_System_String_Utf8String CofferStr;
    /* 0xC18 */ Client_System_String_Utf8String GiftBoxStr;
    /* 0xC80 */ Client_System_String_Utf8String DualBladesStr;
    /*       */ byte _gap_0xCE8[0x18];
};

struct Client_UI_UI3DModule_MapInfo /* Size=0x18 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ __int32 MapId;
    /* 0x0C */ __int32 IconId;
    /*      */ byte _gap_0x10[0x2];
    /* 0x12 */ byte Unk_12;
    /*      */ byte _gap_0x13;
    /*      */ byte _gap_0x14[0x4];
};

struct Client_Game_Object_GameObject_GameObjectVTable /* Size=0x1E8 */
{
    /*       */ byte _gap_0x0[0x8];
    /* 0x008 */ __int64 GetObjectID;
    /* 0x010 */ __int64 GetObjectKind;
    /*       */ byte _gap_0x18[0x8];
    /* 0x020 */ __int64 GetIsTargetable;
    /*       */ byte _gap_0x28[0x8];
    /* 0x030 */ __int64 GetName;
    /* 0x038 */ __int64 GetRadius;
    /* 0x040 */ __int64 GetHeight;
    /*       */ byte _gap_0x48[0x38];
    /* 0x080 */ __int64 EnableDraw;
    /* 0x088 */ __int64 DisableDraw;
    /*       */ byte _gap_0x90[0x48];
    /* 0x0D8 */ __int64 GetDrawObject;
    /*       */ byte _gap_0xE0[0x98];
    /* 0x178 */ __int64 GetNpcID;
    /*       */ byte _gap_0x180[0x40];
    /* 0x1C0 */ __int64 IsDead;
    /* 0x1C8 */ __int64 IsNotMounted;
    /*       */ byte _gap_0x1D0[0x10];
    /* 0x1E0 */ __int64 IsCharacter;
};

enum Client_Game_Object_ObjectTargetableFlags0x1 /* Size=0x1 */
{
    IsTargetable = 2,
    Unk1 = 4
};

struct Client_Graphics_Scene_Object_ObjectVTable /* Size=0x18 */
{
    /*      */ byte _gap_0x0[0x10];
    /* 0x10 */ __int64 GetObjectType;
};

struct Client_Graphics_Scene_Object /* Size=0x80 */
{
    /* 0x00 */ Client_Graphics_Scene_Object_ObjectVTable* VTable;
    /*      */ byte _gap_0x8[0x10];
    /* 0x18 */ Client_Graphics_Scene_Object* ParentObject;
    /* 0x20 */ Client_Graphics_Scene_Object* PreviousSiblingObject;
    /* 0x28 */ Client_Graphics_Scene_Object* NextSiblingObject;
    /* 0x30 */ Client_Graphics_Scene_Object* ChildObject;
    /*      */ byte _gap_0x38[0x18];
    /* 0x50 */ Common_Math_Vector3 Position;
    /* 0x60 */ Common_Math_Quaternion Rotation;
    /* 0x70 */ Common_Math_Vector3 Scale;
};

struct Client_Graphics_Scene_DrawObject /* Size=0x90 */
{
    /* 0x00 */ Client_Graphics_Scene_Object Object;
    /*      */ byte _gap_0x80[0x8];
    /* 0x88 */ byte Flags;
    /*      */ byte _gap_0x89;
    /*      */ byte _gap_0x8A[0x2];
    /*      */ byte _gap_0x8C[0x4];
};

struct Client_Game_Event_LuaActor /* Size=0x80 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ Client_Game_Object_GameObject* Object;
    /* 0x10 */ Client_System_String_Utf8String LuaString;
    /* 0x78 */ Common_Lua_LuaState* LuaState;
};

struct Client_Game_Object_GameObject /* Size=0x1A0 */
{
    /* 0x000 */ Client_Game_Object_GameObject_GameObjectVTable* VTable;
    /*       */ byte _gap_0x8[0x8];
    /* 0x010 */ Common_Math_Vector3 DefaultPosition;
    /* 0x020 */ float DefaultRotation;
    /*       */ byte _gap_0x24[0x4];
    /*       */ byte _gap_0x28[0x8];
    /* 0x030 */ byte Name[0x40];
    /*       */ byte _gap_0x70[0x4];
    /* 0x074 */ unsigned __int32 ObjectID;
    /*       */ byte _gap_0x78[0x8];
    /* 0x080 */ unsigned __int32 DataID;
    /* 0x084 */ unsigned __int32 OwnerID;
    /* 0x088 */ unsigned __int16 ObjectIndex;
    /*       */ byte _gap_0x8A[0x2];
    /* 0x08C */ byte ObjectKind;
    /* 0x08D */ byte SubKind;
    /* 0x08E */ byte Gender;
    /*       */ byte _gap_0x8F;
    /* 0x090 */ byte YalmDistanceFromPlayerX;
    /* 0x091 */ byte TargetStatus;
    /* 0x092 */ byte YalmDistanceFromPlayerZ;
    /*       */ byte _gap_0x93;
    /*       */ byte _gap_0x94;
    /* 0x095 */ Client_Game_Object_ObjectTargetableFlags0x1 TargetableStatus;
    /*       */ byte _gap_0x96[0x2];
    /*       */ byte _gap_0x98[0x18];
    /* 0x0B0 */ Common_Math_Vector3 Position;
    /* 0x0C0 */ float Rotation;
    /* 0x0C4 */ float Scale;
    /* 0x0C8 */ float Height;
    /* 0x0CC */ float VfxScale;
    /* 0x0D0 */ float HitboxRadius;
    /*       */ byte _gap_0xD4[0x4];
    /*       */ byte _gap_0xD8[0x18];
    /*       */ byte _gap_0xF0[0x4];
    /* 0x0F4 */ Client_Game_Event_EventId EventId;
    /* 0x0F8 */ unsigned __int32 FateId;
    /*       */ byte _gap_0xFC[0x4];
    /* 0x100 */ Client_Graphics_Scene_DrawObject* DrawObject;
    /*       */ byte _gap_0x108[0x8];
    /* 0x110 */ unsigned __int32 NamePlateIconId;
    /* 0x114 */ __int32 RenderFlags;
    /*       */ byte _gap_0x118[0x40];
    /* 0x158 */ Client_Game_Event_LuaActor* LuaActor;
    /*       */ byte _gap_0x160[0x40];
};

struct Client_UI_UI3DModule_ObjectInfo /* Size=0x60 */
{
    /* 0x00 */ Client_UI_UI3DModule_MapInfo MapInfo;
    /* 0x18 */ Client_Game_Object_GameObject* GameObject;
    /* 0x20 */ Common_Math_Vector3 NamePlatePos;
    /* 0x30 */ Common_Math_Vector3 ObjectPosProjectedScreenSpace;
    /* 0x40 */ float DistanceFromCamera;
    /* 0x44 */ float DistanceFromPlayer;
    /* 0x48 */ unsigned __int32 Unk_48;
    /* 0x4C */ byte NamePlateScale;
    /* 0x4D */ byte NamePlateObjectKind;
    /* 0x4E */ byte NamePlateObjectKindAdjusted;
    /* 0x4F */ byte NamePlateIndex;
    /* 0x50 */ byte Unk_50;
    /* 0x51 */ byte SortPriority;
    /*      */ byte _gap_0x52[0x2];
    /*      */ byte _gap_0x54[0x4];
    /*      */ byte _gap_0x58[0x8];
};

struct Client_UI_UI3DModule /* Size=0x11BE0 */
{
    /*         */ byte _gap_0x0[0x10];
    /* 0x00010 */ Client_UI_UIModule* UIModule;
    /*         */ byte _gap_0x18[0x8];
    /* 0x00020 */ byte ObjectInfoArray[0xE0A0];
    /* 0x0E0C0 */ byte SortedObjectInfoPointerArray[0x12B8];
    /* 0x0F378 */ __int32 SortedObjectInfoCount;
    /*         */ byte _gap_0xF37C[0x4];
    /* 0x0F380 */ byte NamePlateObjectInfoPointerArray[0x190];
    /* 0x0F510 */ __int32 NamePlateObjectInfoCount;
    /*         */ byte _gap_0xF514[0x4];
    /*         */ byte _gap_0xF518[0x20];
    /* 0x0F538 */ byte NamePlateObjectIdList[0x190];
    /* 0x0F6C8 */ byte NamePlateObjectIdList_2[0x190];
    /* 0x0F858 */ byte CharacterObjectInfoPointerArray[0x190];
    /* 0x0F9E8 */ __int32 CharacterObjectInfoCount;
    /*         */ byte _gap_0xF9EC[0x4];
    /* 0x0F9F0 */ byte MapObjectInfoPointerArray[0x220];
    /* 0x0FC10 */ __int32 MapObjectInfoCount;
    /*         */ byte _gap_0xFC14[0x4];
    /* 0x0FC18 */ Client_UI_UI3DModule_ObjectInfo* TargetObjectInfo;
    /* 0x0FC20 */ byte MemberInfoArray[0x780];
    /* 0x103A0 */ byte MemberInfoPointerArray[0x180];
    /* 0x10520 */ __int32 MemberInfoCount;
    /*         */ byte _gap_0x10524[0x4];
    /*         */ byte _gap_0x10528[0x8];
    /* 0x10530 */ byte UnkInfoArray[0x780];
    /* 0x10CB0 */ __int32 UnkCount;
    /*         */ byte _gap_0x10CB4[0x4];
    /*         */ byte _gap_0x10CB8[0xF28];
};

struct Client_UI_Shell_RaptureShellModule /* Size=0x1208 */
{
    /*        */ byte _gap_0x0[0x2B0];
    /*        */ byte _gap_0x2B0[0x2];
    /*        */ byte _gap_0x2B2;
    /* 0x02B3 */ bool MacroLocked;
    /*        */ byte _gap_0x2B4[0x4];
    /*        */ byte _gap_0x2B8[0x8];
    /* 0x02C0 */ __int32 MacroCurrentLine;
    /*        */ byte _gap_0x2C4[0x4];
    /*        */ byte _gap_0x2C8[0xF38];
    /* 0x1200 */ unsigned __int32 Flags;
    /*        */ byte _gap_0x1204[0x4];
};

struct Client_Graphics_ReferencedClassBase /* Size=0x10 */
{
    /* 0x00 */ void* vtbl;
    /* 0x08 */ unsigned __int32 RefCount;
    /*      */ byte _gap_0xC[0x4];
};

struct Client_Graphics_Render_Camera /* Size=0x130 */
{
    /* 0x000 */ Client_Graphics_ReferencedClassBase ReferencedClassBase;
    /*       */ byte _gap_0x10[0x40];
    /* 0x050 */ Common_Math_Matrix4x4 ProjectionMatrix;
    /*       */ byte _gap_0x90[0x10];
    /*       */ byte _gap_0xA0[0x4];
    /* 0x0A4 */ float FoV;
    /* 0x0A8 */ float AspectRatio;
    /* 0x0AC */ float NearPlane;
    /* 0x0B0 */ float FarPlane;
    /*       */ byte _gap_0xB4[0x4];
    /*       */ byte _gap_0xB8[0x78];
};

struct Client_Graphics_Scene_Camera /* Size=0xF0 */
{
    /* 0x00 */ Client_Graphics_Scene_Object Object;
    /* 0x80 */ Common_Math_Vector3 LookAtVector;
    /* 0x90 */ Common_Math_Vector3 Vector_1;
    /* 0xA0 */ Common_Math_Matrix4x4 ViewMatrix;
    /* 0xE0 */ Client_Graphics_Render_Camera* RenderCamera;
    /*      */ byte _gap_0xE8[0x8];
};

struct Client_Game_CameraBase /* Size=0x110 */
{
    /* 0x000 */ void** vtbl;
    /*       */ byte _gap_0x8[0x8];
    /* 0x010 */ Client_Graphics_Scene_Camera SceneCamera;
    /* 0x100 */ unsigned __int32 UnkUInt;
    /*       */ byte _gap_0x104[0x4];
    /* 0x108 */ unsigned __int32 UnkFlags;
    /*       */ byte _gap_0x10C[0x4];
};

struct Client_Game_Camera /* Size=0x2B0 */
{
    /* 0x000 */ Client_Game_CameraBase CameraBase;
    /*       */ byte _gap_0x110[0x4];
    /* 0x114 */ float Distance;
    /* 0x118 */ float MinDistance;
    /* 0x11C */ float MaxDistance;
    /* 0x120 */ float FoV;
    /* 0x124 */ float MinFoV;
    /* 0x128 */ float MaxFoV;
    /*       */ byte _gap_0x12C[0x4];
    /*       */ byte _gap_0x130[0x48];
    /*       */ byte _gap_0x178[0x4];
    /* 0x17C */ float InterpDistance;
    /*       */ byte _gap_0x180[0x8];
    /* 0x188 */ float SavedDistance;
    /*       */ byte _gap_0x18C[0x4];
    /*       */ byte _gap_0x190[0x120];
};

struct Client_UI_Misc_CharaView_UnkStruct /* Size=0x20 */
{
    /* 0x00 */ unsigned __int16 Unk0;
    /*      */ byte _gap_0x2;
    /* 0x03 */ byte Unk1;
    /* 0x04 */ byte Unk2;
    /*      */ byte _gap_0x5;
    /*      */ byte _gap_0x6[0x2];
    /* 0x08 */ unsigned __int64 Unk3;
    /* 0x10 */ unsigned __int64 Unk4;
    /* 0x18 */ unsigned __int64 Unk5;
};

struct Client_UI_Misc_ConfigModule /* Size=0xD9E8 */
{
    /*        */ byte _gap_0x0[0x28];
    /* 0x0028 */ Client_UI_UIModule* UIModule;
    /*        */ byte _gap_0x30[0xD9B8];
};

enum Client_UI_Misc_ConfigOption0x2 /* Size=0x2 */
{
    None = 0,
    GuidVersion = 2,
    ConfigVersion = 3,
    Language = 4,
    Region = 5,
    UPnP = 7,
    Port = 8,
    LastLogin0 = 9,
    LastLogin1 = 10,
    WorldId = 11,
    ServiceIndex = 12,
    DktSessionId = 13,
    MainAdapter = 15,
    ScreenLeft = 16,
    ScreenTop = 17,
    ScreenWidth = 18,
    ScreenHeight = 19,
    ScreenMode = 20,
    FullScreenWidth = 21,
    FullScreenHeight = 22,
    Refreshrate = 23,
    Fps = 24,
    AntiAliasing = 25,
    FPSInActive = 26,
    ResoMouseDrag = 27,
    MouseOpeLimit = 28,
    LangSelectSub = 29,
    Gamma = 30,
    UiBaseScale = 31,
    CharaLight = 32,
    UiHighScale = 33,
    TextureFilterQuality = 35,
    TextureAnisotropicQuality = 36,
    SSAO = 37,
    Glare = 38,
    DistortionWater = 39,
    DepthOfField = 40,
    RadialBlur = 42,
    Vignetting = 43,
    GrassQuality = 44,
    TranslucentQuality = 45,
    ShadowVisibilityType = 46,
    ShadowSoftShadowType = 47,
    ShadowTextureSizeType = 48,
    ShadowCascadeCountType = 49,
    LodType = 50,
    StreamingType = 51,
    GeneralQuality = 52,
    OcclusionCulling = 53,
    ShadowLOD = 54,
    BattleEffectSelf = 55,
    BattleEffectParty = 56,
    BattleEffectOther = 57,
    BattleEffectPvPEnemyPc = 58,
    PhysicsType = 59,
    MapResolution = 60,
    ShadowVisibilityTypeSelf = 61,
    ShadowVisibilityTypeParty = 62,
    ShadowVisibilityTypeOther = 63,
    ShadowVisibilityTypeEnemy = 64,
    PhysicsTypeSelf = 65,
    PhysicsTypeParty = 66,
    PhysicsTypeOther = 67,
    PhysicsTypeEnemy = 68,
    ReflectionType = 69,
    ScreenShotImageType = 70,
    IsSoundDisable = 72,
    IsSoundAlways = 73,
    IsSoundBgmAlways = 74,
    IsSoundSeAlways = 75,
    IsSoundVoiceAlways = 76,
    IsSoundSystemAlways = 77,
    IsSoundEnvAlways = 78,
    IsSoundPerformAlways = 79,
    PadGuid = 82,
    InstanceGuid = 83,
    ProductGuid = 84,
    DeadArea = 85,
    Alias = 86,
    AlwaysInput = 87,
    ForceFeedBack = 88,
    PadPovInput = 89,
    PadMode = 90,
    PadAvailable = 91,
    PadReverseConfirmCancel = 92,
    PadSelectButtonIcon = 93,
    PadMouseMode = 94,
    TextPasteEnable = 95,
    EnablePsFunction = 96,
    WaterWet = 97,
    DisplayObjectLimitType = 98,
    WindowDispNum = 99,
    ScreenShotDir = 100,
    AntiAliasing_DX11 = 102,
    TextureFilterQuality_DX11 = 103,
    TextureAnisotropicQuality_DX11 = 104,
    SSAO_DX11 = 105,
    Glare_DX11 = 106,
    DistortionWater_DX11 = 107,
    DepthOfField_DX11 = 108,
    RadialBlur_DX11 = 109,
    Vignetting_DX11 = 110,
    GrassQuality_DX11 = 111,
    TranslucentQuality_DX11 = 112,
    ShadowSoftShadowType_DX11 = 113,
    ShadowTextureSizeType_DX11 = 114,
    ShadowCascadeCountType_DX11 = 115,
    LodType_DX11 = 116,
    OcclusionCulling_DX11 = 117,
    ShadowLOD_DX11 = 118,
    MapResolution_DX11 = 119,
    ShadowVisibilityTypeSelf_DX11 = 120,
    ShadowVisibilityTypeParty_DX11 = 121,
    ShadowVisibilityTypeOther_DX11 = 122,
    ShadowVisibilityTypeEnemy_DX11 = 123,
    PhysicsTypeSelf_DX11 = 124,
    PhysicsTypeParty_DX11 = 125,
    PhysicsTypeOther_DX11 = 126,
    PhysicsTypeEnemy_DX11 = 127,
    ReflectionType_DX11 = 128,
    WaterWet_DX11 = 129,
    ParallaxOcclusion_DX11 = 130,
    Tessellation_DX11 = 131,
    GlareRepresentation_DX11 = 132,
    UiSystemEnlarge = 133,
    SoundPadSeType = 134,
    SoundPad = 135,
    IsSoundPad = 136,
    TouchPadMouse = 137,
    TouchPadCursorSpeed = 138,
    TouchPadButtonExtension = 139,
    TouchPadButton_Left = 140,
    TouchPadButton_Right = 141,
    RemotePlayRearTouchpadEnable = 142,
    SupportButtonAutorunEnable = 143,
    R3ButtonWindowScalingEnable = 144,
    AutoAfkSwitchingTime = 145,
    AutoChangeCameraMode = 146,
    AccessibilitySoundVisualEnable = 147,
    AccessibilitySoundVisualDispSize = 148,
    AccessibilitySoundVisualPermeabilityRate = 149,
    AccessibilityColorBlindFilterEnable = 150,
    AccessibilityColorBlindFilterType = 151,
    AccessibilityColorBlindFilterStrength = 152,
    MouseAutoFocus = 154,
    FPSDownAFK = 156,
    IdlingCameraAFK = 157,
    WeaponAutoPutAway = 159,
    WeaponAutoPutAwayTime = 160,
    LipMotionType = 161,
    FirstPersonDefaultYAngle = 163,
    FirstPersonDefaultZoom = 164,
    FirstPersonDefaultDistance = 165,
    ThirdPersonDefaultYAngle = 166,
    ThirdPersonDefaultZoom = 167,
    ThirdPersonDefaultDistance = 168,
    LockonDefaultYAngle = 169,
    LockonDefaultZoom = 170,
    LockonDefaultZoom_171 = 171,
    AutoChangePointOfView = 172,
    KeyboardCameraInterpolationType = 173,
    KeyboardCameraVerticalInterpolation = 174,
    TiltOffset = 175,
    KeyboardSpeed = 176,
    PadSpeed = 177,
    MouseSpeed = 178,
    PadFpsXReverse = 179,
    PadFpsYReverse = 180,
    PadTpsXReverse = 181,
    PadTpsYReverse = 182,
    MouseFpsXReverse = 183,
    MouseFpsYReverse = 184,
    MouseTpsXReverse = 185,
    MouseTpsYReverse = 186,
    CameraProductionOfAction = 187,
    FPSCameraInterpolationType = 188,
    FPSCameraVerticalInterpolation = 189,
    LegacyCameraCorrectionFix = 190,
    LegacyCameraType = 191,
    CameraZoom = 192,
    EventCameraAutoControl = 193,
    CameraLookBlinkType = 194,
    IdleEmoteTime = 195,
    IdleEmoteRandomType = 196,
    CutsceneSkipIsShip = 197,
    CutsceneSkipIsContents = 198,
    CutsceneSkipIsHousing = 199,
    FlyingControlType = 200,
    FlyingLegacyAutorun = 201,
    AutoFaceTargetOnAction = 203,
    SelfClick = 204,
    NoTargetClickCancel = 205,
    AutoTarget = 206,
    TargetTypeSelect = 207,
    AutoLockOn = 208,
    CircleBattleModeAutoChange = 210,
    CircleIsCustom = 211,
    CircleSwordDrawnIsActive = 212,
    CircleSwordDrawnNonPartyPc = 213,
    CircleSwordDrawnParty = 214,
    CircleSwordDrawnEnemy = 215,
    CircleSwordDrawnAggro = 216,
    CircleSwordDrawnNpcOrObject = 217,
    CircleSwordDrawnMinion = 218,
    CircleSwordDrawnDutyEnemy = 219,
    CircleSwordDrawnPet = 220,
    CircleSwordDrawnAlliance = 221,
    CircleSwordDrawnMark = 222,
    CircleSheathedIsActive = 223,
    CircleSheathedNonPartyPc = 224,
    CircleSheathedParty = 225,
    CircleSheathedEnemy = 226,
    CircleSheathedAggro = 227,
    CircleSheathedNpcOrObject = 228,
    CircleSheathedMinion = 229,
    CircleSheathedDutyEnemy = 230,
    CircleSheathedPet = 231,
    CircleSheathedAlliance = 232,
    CircleSheathedMark = 233,
    CircleClickIsActive = 234,
    CircleClickNonPartyPc = 235,
    CircleClickParty = 236,
    CircleClickEnemy = 237,
    CircleClickAggro = 238,
    CircleClickNpcOrObject = 239,
    CircleClickMinion = 240,
    CircleClickDutyEnemy = 241,
    CircleClickPet = 242,
    CircleClickAlliance = 243,
    CircleClickMark = 244,
    CircleXButtonIsActive = 245,
    CircleXButtonNonPartyPc = 246,
    CircleXButtonParty = 247,
    CircleXButtonEnemy = 248,
    CircleXButtonAggro = 249,
    CircleXButtonNpcOrObject = 250,
    CircleXButtonMinion = 251,
    CircleXButtonDutyEnemy = 252,
    CircleXButtonPet = 253,
    CircleXButtonAlliance = 254,
    CircleXButtonMark = 255,
    CircleYButtonIsActive = 256,
    CircleYButtonNonPartyPc = 257,
    CircleYButtonParty = 258,
    CircleYButtonEnemy = 259,
    CircleYButtonAggro = 260,
    CircleYButtonNpcOrObject = 261,
    CircleYButtonMinion = 262,
    CircleYButtonDutyEnemy = 263,
    CircleYButtonPet = 264,
    CircleYButtonAlliance = 265,
    CircleYButtonMark = 266,
    CircleBButtonIsActive = 267,
    CircleBButtonNonPartyPc = 268,
    CircleBButtonParty = 269,
    CircleBButtonEnemy = 270,
    CircleBButtonAggro = 271,
    CircleBButtonNpcOrObject = 272,
    CircleBButtonMinion = 273,
    CircleBButtonDutyEnemy = 274,
    CircleBButtonPet = 275,
    CircleBButtonAlliance = 276,
    CircleBButtonMark = 277,
    CircleAButtonIsActive = 278,
    CircleAButtonNonPartyPc = 279,
    CircleAButtonParty = 280,
    CircleAButtonEnemy = 281,
    CircleAButtonAggro = 282,
    CircleAButtonNpcOrObject = 283,
    CircleAButtonMinion = 284,
    CircleAButtonDutyEnemy = 285,
    CircleAButtonPet = 286,
    CircleAButtonAlliance = 287,
    CircleAButtonMark = 288,
    GroundTargetType = 289,
    GroundTargetCursorSpeed = 290,
    PetTargetOffInCombat = 291,
    GroundTargetFPSPosX = 292,
    GroundTargetFPSPosY = 293,
    GroundTargetTPSPosX = 294,
    GroundTargetTPSPosY = 295,
    TargetDisableAnchor = 296,
    TargetCircleClickFilterEnableNearestCursor = 297,
    TargetEnableMouseOverSelect = 298,
    GroundTargetCursorCorrectType = 299,
    GroundTargetActionExcuteType = 300,
    TargetCircleType = 301,
    TargetLineType = 302,
    LinkLineType = 303,
    ObjectBorderingType = 304,
    AutoNearestTarget = 305,
    AutoNearestTargetType = 306,
    DynamicRezoType = 307,
    RightClickExclusionPC = 308,
    RightClickExclusionBNPC = 309,
    RightClickExclusionMinion = 310,
    MoveMode = 312,
    TurnSpeed = 313,
    Is3DAudio = 314,
    FootEffect = 315,
    BattleEffect = 316,
    BGEffect = 317,
    LegacySeal = 318,
    GBarrelDisp = 319,
    EgiMirageTypeGaruda = 320,
    EgiMirageTypeTitan = 321,
    EgiMirageTypeIfrit = 322,
    BahamutSize = 323,
    PetMirageTypeCarbuncleSupport = 324,
    PhoenixSize = 325,
    GarudaSize = 326,
    TitanSize = 327,
    IfritSize = 328,
    TimeMode = 329,
    Time12 = 330,
    TimeEorzea = 331,
    TimeLocal = 332,
    TimeServer = 333,
    ActiveLS_H = 334,
    ActiveLS_L = 335,
    HotbarDisp = 336,
    HotbarLock = 337,
    HotbarEmptyVisible = 338,
    HotbarDispRecastTime = 339,
    HotbarCrossContentsActionEnableInput = 340,
    HotbarDispRecastTimeDispType = 341,
    HotbarNoneSlotDisp01 = 342,
    HotbarNoneSlotDisp02 = 343,
    HotbarNoneSlotDisp03 = 344,
    HotbarNoneSlotDisp04 = 345,
    HotbarNoneSlotDisp05 = 346,
    HotbarNoneSlotDisp06 = 347,
    HotbarNoneSlotDisp07 = 348,
    HotbarNoneSlotDisp08 = 349,
    HotbarNoneSlotDisp09 = 350,
    HotbarNoneSlotDisp10 = 351,
    HotbarNoneSlotDispEX = 352,
    ExHotbarSetting = 353,
    ExHotbarChangeHotbar1 = 354,
    HotbarExHotbarUseSetting = 355,
    HotbarCommon01 = 356,
    HotbarCommon02 = 357,
    HotbarCommon03 = 358,
    HotbarCommon04 = 359,
    HotbarCommon05 = 360,
    HotbarCommon06 = 361,
    HotbarCommon07 = 362,
    HotbarCommon08 = 363,
    HotbarCommon09 = 364,
    HotbarCommon10 = 365,
    HotbarCrossCommon01 = 366,
    HotbarCrossCommon02 = 367,
    HotbarCrossCommon03 = 368,
    HotbarCrossCommon04 = 369,
    HotbarCrossCommon05 = 370,
    HotbarCrossCommon06 = 371,
    HotbarCrossCommon07 = 372,
    HotbarCrossCommon08 = 373,
    HotbarCrossHelpDisp = 374,
    HotbarCrossOperation = 375,
    HotbarCrossDisp = 376,
    HotbarCrossLock = 377,
    HotbarCrossUseEx = 378,
    HotbarCrossUseExDirection = 379,
    HotbarCrossUsePadGuide = 380,
    HotbarCrossActiveSet = 381,
    HotbarCrossActiveSetPvP = 382,
    HotbarCrossSetChangeCustomIsAuto = 383,
    HotbarCrossDispType = 384,
    HotbarCrossSetChangeCustom = 385,
    HotbarCrossSetChangeCustomSet1 = 386,
    HotbarCrossSetChangeCustomSet2 = 387,
    HotbarCrossSetChangeCustomSet3 = 388,
    HotbarCrossSetChangeCustomSet4 = 389,
    HotbarCrossSetChangeCustomSet5 = 390,
    HotbarCrossSetChangeCustomSet6 = 391,
    HotbarCrossSetChangeCustomSet7 = 392,
    HotbarCrossSetChangeCustomSet8 = 393,
    HotbarCrossSetChangeCustomIsSword = 394,
    HotbarCrossSetChangeCustomIsSwordSet1 = 395,
    HotbarCrossSetChangeCustomIsSwordSet2 = 396,
    HotbarCrossSetChangeCustomIsSwordSet3 = 397,
    HotbarCrossSetChangeCustomIsSwordSet4 = 398,
    HotbarCrossSetChangeCustomIsSwordSet5 = 399,
    HotbarCrossSetChangeCustomIsSwordSet6 = 400,
    HotbarCrossSetChangeCustomIsSwordSet7 = 401,
    HotbarCrossSetChangeCustomIsSwordSet8 = 402,
    HotbarCrossAdvancedSetting = 403,
    HotbarCrossAdvancedSettingLeft = 404,
    HotbarCrossAdvancedSettingRight = 405,
    HotbarCrossSetPvpModeActive = 406,
    HotbarCrossSetChangeCustomPvp = 407,
    HotbarCrossSetChangeCustomIsAutoPvp = 408,
    HotbarCrossSetChangeCustomSet1Pvp = 409,
    HotbarCrossSetChangeCustomSet2Pvp = 410,
    HotbarCrossSetChangeCustomSet3Pvp = 411,
    HotbarCrossSetChangeCustomSet4Pvp = 412,
    HotbarCrossSetChangeCustomSet5Pvp = 413,
    HotbarCrossSetChangeCustomSet6Pvp = 414,
    HotbarCrossSetChangeCustomSet7Pvp = 415,
    HotbarCrossSetChangeCustomSet8Pvp = 416,
    HotbarCrossSetChangeCustomIsSwordPvp = 417,
    HotbarCrossSetChangeCustomIsSwordSet1Pvp = 418,
    HotbarCrossSetChangeCustomIsSwordSet2Pvp = 419,
    HotbarCrossSetChangeCustomIsSwordSet3Pvp = 420,
    HotbarCrossSetChangeCustomIsSwordSet4Pvp = 421,
    HotbarCrossSetChangeCustomIsSwordSet5Pvp = 422,
    HotbarCrossSetChangeCustomIsSwordSet6Pvp = 423,
    HotbarCrossSetChangeCustomIsSwordSet7Pvp = 424,
    HotbarCrossSetChangeCustomIsSwordSet8Pvp = 425,
    HotbarCrossAdvancedSettingPvp = 426,
    HotbarCrossAdvancedSettingLeftPvp = 427,
    HotbarCrossAdvancedSettingRightPvp = 428,
    HotbarWXHBEnable = 429,
    HotbarWXHBSetLeft = 430,
    HotbarWXHBSetRight = 431,
    HotbarWXHBEnablePvP = 432,
    HotbarWXHBSetLeftPvP = 433,
    HotbarWXHBSetRightPvP = 434,
    HotbarWXHB8Button = 435,
    HotbarWXHB8ButtonPvP = 436,
    HotbarWXHBSetInputTime = 437,
    HotbarWXHBDisplay = 438,
    HotbarWXHBFreeLayout = 439,
    HotbarXHBActiveTransmissionAlpha = 440,
    HotbarXHBAlphaDefault = 441,
    HotbarXHBAlphaActiveSet = 442,
    HotbarXHBAlphaInactiveSet = 443,
    HotbarWXHBInputOnce = 444,
    IdlingCameraSwitchType = 445,
    PlateType = 446,
    PlateDispHPBar = 447,
    PlateDisableMaxHPBar = 448,
    NamePlateHpSizeType = 449,
    NamePlateColorSelf = 450,
    NamePlateEdgeSelf = 451,
    NamePlateDispTypeSelf = 452,
    NamePlateNameTypeSelf = 453,
    NamePlateHpTypeSelf = 454,
    NamePlateColorSelfBuddy = 455,
    NamePlateEdgeSelfBuddy = 456,
    NamePlateDispTypeSelfBuddy = 457,
    NamePlateHpTypeSelfBuddy = 458,
    NamePlateColorSelfPet = 459,
    NamePlateEdgeSelfPet = 460,
    NamePlateDispTypeSelfPet = 461,
    NamePlateHpTypeSelfPet = 462,
    NamePlateColorParty = 463,
    NamePlateEdgeParty = 464,
    NamePlateDispTypeParty = 465,
    NamePlateNameTypeParty = 466,
    NamePlateHpTypeParty = 467,
    NamePlateDispTypePartyPet = 468,
    NamePlateHpTypePartyPet = 469,
    NamePlateDispTypePartyBuddy = 470,
    NamePlateHpTypePartyBuddy = 471,
    NamePlateColorAlliance = 472,
    NamePlateEdgeAlliance = 473,
    NamePlateDispTypeAlliance = 474,
    NamePlateNameTypeAlliance = 475,
    NamePlateHpTypeAlliance = 476,
    NamePlateDispTypeAlliancePet = 477,
    NamePlateHpTypeAlliancePet = 478,
    NamePlateColorOther = 479,
    NamePlateEdgeOther = 480,
    NamePlateDispTypeOther = 481,
    NamePlateNameTypeOther = 482,
    NamePlateHpTypeOther = 483,
    NamePlateDispTypeOtherPet = 484,
    NamePlateHpTypeOtherPet = 485,
    NamePlateDispTypeOtherBuddy = 486,
    NamePlateHpTypeOtherBuddy = 487,
    NamePlateColorUnengagedEnemy = 488,
    NamePlateEdgeUnengagedEnemy = 489,
    NamePlateDispTypeUnengagedEnemy = 490,
    NamePlateHpTypeUnengagedEmemy = 491,
    NamePlateColorEngagedEnemy = 492,
    NamePlateEdgeEngagedEnemy = 493,
    NamePlateDispTypeEngagedEnemy = 494,
    NamePlateHpTypeEngagedEmemy = 495,
    NamePlateColorClaimedEnemy = 496,
    NamePlateEdgeClaimedEnemy = 497,
    NamePlateDispTypeClaimedEnemy = 498,
    NamePlateHpTypeClaimedEmemy = 499,
    NamePlateColorUnclaimedEnemy = 500,
    NamePlateEdgeUnclaimedEnemy = 501,
    NamePlateDispTypeUnclaimedEnemy = 502,
    NamePlateHpTypeUnclaimedEmemy = 503,
    NamePlateColorNpc = 504,
    NamePlateEdgeNpc = 505,
    NamePlateDispTypeNpc = 506,
    NamePlateHpTypeNpc = 507,
    NamePlateColorObject = 508,
    NamePlateEdgeObject = 509,
    NamePlateDispTypeObject = 510,
    NamePlateHpTypeObject = 511,
    NamePlateColorMinion = 512,
    NamePlateEdgeMinion = 513,
    NamePlateDispTypeMinion = 514,
    NamePlateColorOtherBuddy = 515,
    NamePlateEdgeOtherBuddy = 516,
    NamePlateColorOtherPet = 517,
    NamePlateEdgeOtherPet = 518,
    NamePlateNameTitleTypeSelf = 519,
    NamePlateNameTitleTypeParty = 520,
    NamePlateNameTitleTypeAlliance = 521,
    NamePlateNameTitleTypeOther = 522,
    NamePlateNameTitleTypeFriend = 523,
    NamePlateColorFriend = 524,
    NamePlateColorFriendEdge = 525,
    NamePlateDispTypeFriend = 526,
    NamePlateNameTypeFriend = 527,
    NamePlateHpTypeFriend = 528,
    NamePlateDispTypeFriendPet = 529,
    NamePlateHpTypeFriendPet = 530,
    NamePlateDispTypeFriendBuddy = 531,
    NamePlateHpTypeFriendBuddy = 532,
    NamePlateColorLim = 533,
    NamePlateColorLimEdge = 534,
    NamePlateColorGri = 535,
    NamePlateColorGriEdge = 536,
    NamePlateColorUld = 537,
    NamePlateColorUldEdge = 538,
    NamePlateColorHousingFurniture = 539,
    NamePlateColorHousingFurnitureEdge = 540,
    NamePlateDispTypeHousingFurniture = 541,
    NamePlateColorHousingField = 542,
    NamePlateColorHousingFieldEdge = 543,
    NamePlateDispTypeHousingField = 544,
    NamePlateNameTypePvPEnemy = 545,
    NamePlateDispTypeFeast = 546,
    NamePlateNameTypeFeast = 547,
    NamePlateHpTypeFeast = 548,
    NamePlateDispTypeFeastPet = 549,
    NamePlateHpTypeFeastPet = 550,
    NamePlateNameTitleTypeFeast = 551,
    NamePlateDispSize = 552,
    ActiveInfo = 553,
    PartyList = 554,
    PartyListStatus = 555,
    PartyListSoloOff = 556,
    PartyListStatusTimer = 557,
    EnemyList = 558,
    TargetInfo = 559,
    Gil = 560,
    DTR = 561,
    PlayerInfo = 563,
    NaviMap = 564,
    Help = 565,
    HowTo = 566,
    CrossMainHelp = 567,
    HousingFurnitureBindConfirm = 568,
    HousingLocatePreview = 569,
    Log = 570,
    LogTell = 571,
    LogFontSize = 573,
    LogTabName2 = 574,
    LogTabName3 = 575,
    LogTabFilter0 = 576,
    LogTabFilter1 = 577,
    LogTabFilter2 = 578,
    LogTabFilter3 = 579,
    LogChatFilter = 580,
    LogEnableErrMsgLv1 = 581,
    DirectChat = 582,
    LogNameType = 583,
    LogTimeDisp = 584,
    LogTimeSettingType = 585,
    LogTimeDispType = 586,
    IsLogTell = 587,
    IsLogParty = 588,
    LogParty = 589,
    IsLogAlliance = 590,
    LogAlliance = 591,
    IsLogFc = 592,
    LogFc = 593,
    IsLogPvpTeam = 594,
    LogPvpTeam = 595,
    IsLogLs1 = 596,
    LogLs1 = 597,
    IsLogLs2 = 598,
    LogLs2 = 599,
    IsLogLs3 = 600,
    LogLs3 = 601,
    IsLogLs4 = 602,
    LogLs4 = 603,
    IsLogLs5 = 604,
    LogLs5 = 605,
    IsLogLs6 = 606,
    LogLs6 = 607,
    IsLogLs7 = 608,
    LogLs7 = 609,
    IsLogLs8 = 610,
    LogLs8 = 611,
    IsLogBeginner = 612,
    LogBeginner = 613,
    IsLogCwls = 614,
    IsLogCwls2 = 615,
    IsLogCwls3 = 616,
    IsLogCwls4 = 617,
    IsLogCwls5 = 618,
    IsLogCwls6 = 619,
    IsLogCwls7 = 620,
    IsLogCwls8 = 621,
    LogCwls = 622,
    LogCwls2 = 623,
    LogCwls3 = 624,
    LogCwls4 = 625,
    LogCwls5 = 626,
    LogCwls6 = 627,
    LogCwls7 = 628,
    LogCwls8 = 629,
    LogRecastActionErrDisp = 630,
    LogPermeationRate = 631,
    LogFontSizeForm = 632,
    LogItemLinkEnableType = 633,
    LogFontSizeLog2 = 634,
    LogTimeDispLog2 = 635,
    LogPermeationRateLog2 = 636,
    LogFontSizeLog3 = 637,
    LogTimeDispLog3 = 638,
    LogPermeationRateLog3 = 639,
    LogFontSizeLog4 = 640,
    LogTimeDispLog4 = 641,
    LogPermeationRateLog4 = 642,
    LogFlyingHeightMaxErrDisp = 643,
    LogCrossWorldName = 644,
    LogDragResize = 645,
    ChatType = 646,
    ShopSell = 647,
    ColorSay = 648,
    ColorShout = 649,
    ColorTell = 650,
    ColorParty = 651,
    ColorAlliance = 652,
    ColorLS1 = 653,
    ColorLS2 = 654,
    ColorLS3 = 655,
    ColorLS4 = 656,
    ColorLS5 = 657,
    ColorLS6 = 658,
    ColorLS7 = 659,
    ColorLS8 = 660,
    ColorFCompany = 661,
    ColorPvPGroup = 662,
    ColorPvPGroupAnnounce = 663,
    ColorBeginner = 664,
    ColorEmoteUser = 665,
    ColorEmote = 666,
    ColorYell = 667,
    ColorBeginnerAnnounce = 669,
    ColorCWLS = 670,
    ColorCWLS2 = 671,
    ColorCWLS3 = 672,
    ColorCWLS4 = 673,
    ColorCWLS5 = 674,
    ColorCWLS6 = 675,
    ColorCWLS7 = 676,
    ColorCWLS8 = 677,
    ColorAttackSuccess = 678,
    ColorAttackFailure = 679,
    ColorAction = 680,
    ColorItem = 681,
    ColorCureGive = 682,
    ColorBuffGive = 683,
    ColorDebuffGive = 684,
    ColorEcho = 685,
    ColorSysMsg = 686,
    ColorFCAnnounce = 687,
    ColorSysBattle = 688,
    ColorSysGathering = 689,
    ColorSysErr = 690,
    ColorNpcSay = 691,
    ColorItemNotice = 692,
    ColorGrowup = 693,
    ColorLoot = 694,
    ColorCraft = 695,
    ColorGathering = 696,
    ColorThemeType = 697,
    ShopConfirm = 698,
    ShopConfirmMateria = 699,
    ShopConfirmExRare = 700,
    ShopConfirmSpiritBondMax = 701,
    ItemSortItemCategory = 702,
    ItemSortEquipLevel = 703,
    ItemSortItemLevel = 704,
    ItemSortItemStack = 705,
    ItemSortTidyingType = 706,
    ItemNoArmoryMaskOff = 707,
    CharaParamDisp = 708,
    LimitBreakGaugeDisp = 709,
    ScenarioTreeDisp = 710,
    ScenarioTreeCompleteDisp = 711,
    HotbarCrossDispAlways = 712,
    ExpDisp = 713,
    InventryStatusDisp = 714,
    DutyListDisp = 715,
    NaviMapDisp = 716,
    GilStatusDisp = 717,
    InfoSettingDisp = 718,
    InfoSettingDispType = 719,
    InfoSettingDispWorldNameType = 720,
    TargetInfoDisp = 721,
    TargetNamePlateNameType = 722,
    EnemyListDisp = 723,
    FocusTargetDisp = 724,
    FocusTargetNamePlateNameType = 725,
    ItemDetailDisp = 726,
    ItemDetailTemporarilySwitch = 727,
    ItemDetailTemporarilySwitchKey = 728,
    ItemDetailTemporarilyHide = 729,
    ItemDetailTemporarilyHideKey = 730,
    ActionDetailDisp = 731,
    DetailTrackingType = 732,
    ToolTipDisp = 733,
    MapPermeationRate = 734,
    MapOperationType = 735,
    PartyListDisp = 736,
    PartyListNameType = 737,
    FlyTextDisp = 738,
    MapPermeationMode = 739,
    ToolTipDispSize = 740,
    RecommendLoginDisp = 741,
    RecommendAreaChangeDisp = 742,
    PlayGuideLoginDisp = 743,
    PlayGuideAreaChangeDisp = 744,
    AllianceList1Disp = 745,
    AllianceList2Disp = 746,
    MapPadOperationYReverse = 747,
    MapPadOperationXReverse = 748,
    TargetInfoSelfBuff = 749,
    MapDispSize = 750,
    FlyTextDispSize = 751,
    PopUpTextDisp = 752,
    PopUpTextDispSize = 753,
    DetailDispDelayType = 754,
    PartyListSortTypeTank = 755,
    PartyListSortTypeHealer = 756,
    PartyListSortTypeDps = 757,
    PartyListSortTypeOther = 758,
    RatioHpDisp = 759,
    BuffDispType = 760,
    ContentsInfoDisp = 761,
    DutyListHideWhenCntInfoDisp = 762,
    ContentsFinderListSortType = 763,
    ContentsFinderSupplyEnable = 764,
    DutyListNumDisp = 765,
    InInstanceContentDutyListDisp = 766,
    InPublicContentDutyListDisp = 767,
    ContentsInfoJoiningRequestDisp = 768,
    ContentsInfoJoiningRequestSituationDisp = 769,
    EnemyListCastbarEnable = 770,
    AchievementAppealLoginDisp = 771,
    ContentsFinderUseLangTypeJA = 772,
    ContentsFinderUseLangTypeEN = 773,
    ContentsFinderUseLangTypeDE = 774,
    ContentsFinderUseLangTypeFR = 775,
    HotbarDispSetNum = 776,
    HotbarDispSetChangeType = 777,
    HotbarDispSetDragType = 778,
    MainCommandType = 779,
    MainCommandDisp = 780,
    MainCommandDragShortcut = 781,
    HotbarDispLookNum = 782,
    ItemInventryWindowSizeType = 783,
    ItemInventryRetainerWindowSizeType = 784,
    SystemMouseOperationSoftOn = 785,
    SystemMouseOperationTrajectory = 786,
    SystemMouseOperationCursorScaling = 787,
    HardwareCursorSize = 788,
    UiAssetType = 789,
    BattleTalkShowFace = 790,
    BannerContentsDispType = 791,
    BannerContentsNotice = 792,
    MipDispType = 793,
    BannerContentsOrderType = 794,
    EmoteTextType = 795,
    IsEmoteSe = 796,
    EmoteSeType = 797,
    PartyFinderNewArrivalDisp = 798,
    GPoseTargetFilterNPCLookAt = 799,
    GPoseMotionFilterAction = 800,
    LsListSortPriority = 801,
    FriendListSortPriority = 802,
    FriendListFilterType = 803,
    FriendListSortType = 804,
    LetterListFilterType = 805,
    LetterListSortType = 806,
    FellowshipShowNewNotice = 807,
    ContentsReplayEnable = 808,
    MouseWheelOperationUp = 809,
    MouseWheelOperationDown = 810,
    MouseWheelOperationCtrlUp = 811,
    MouseWheelOperationCtrlDown = 812,
    MouseWheelOperationAltUp = 813,
    MouseWheelOperationAltDown = 814,
    MouseWheelOperationShiftUp = 815,
    MouseWheelOperationShiftDown = 816,
    TelepoTicketUseType = 817,
    TelepoTicketGilSetting = 818,
    CutsceneMovieVoice = 820,
    CutsceneMovieCaption = 821,
    CutsceneMovieOpening = 822,
    PvPFrontlinesGCFree = 823,
    SoundMaster = 825,
    SoundBgm = 826,
    SoundSe = 827,
    SoundVoice = 828,
    SoundEnv = 829,
    SoundSystem = 830,
    SoundPerform = 831,
    SoundPlayer = 832,
    SoundParty = 833,
    SoundOther = 834,
    IsSndMaster = 835,
    IsSndBgm = 836,
    IsSndSe = 837,
    IsSndVoice = 838,
    IsSndEnv = 839,
    IsSndSystem = 840,
    IsSndPerform = 841,
    SoundDolby = 842,
    SoundMicpos = 843,
    SoundChocobo = 844,
    SoundFieldBattle = 845,
    SoundCfTimeCount = 846,
    SoundHousing = 847,
    SoundEqualizerType = 848,
    PadButton_L2 = 850,
    PadButton_R2 = 851,
    PadButton_L1 = 852,
    PadButton_R1 = 853,
    PadButton_Triangle = 854,
    PadButton_Circle = 855,
    PadButton_Cross = 856,
    PadButton_Square = 857,
    PadButton_Select = 858,
    PadButton_Start = 859,
    PadButton_LS = 860,
    PadButton_RS = 861,
    PadButton_L3 = 862,
    PadButton_R3 = 863,
    Invalid = -1
};

struct Client_UI_Misc_FieldMarkerModule /* Size=0xC78 */
{
    /* 0x000 */ Client_UI_Misc_UserFileManager_UserFileEvent UserFileEvent;
    /* 0x040 */ byte PresetArray[0xC30];
    /*       */ byte _gap_0xC70[0x8];
};

struct Client_UI_Misc_GamePresetPoint /* Size=0xC */
{
    /* 0x0 */ __int32 X;
    /* 0x4 */ __int32 Y;
    /* 0x8 */ __int32 Z;
};

struct Client_UI_Misc_FieldMarkerPreset /* Size=0x68 */
{
    /* 0x00 */ Client_UI_Misc_GamePresetPoint A;
    /* 0x0C */ Client_UI_Misc_GamePresetPoint B;
    /* 0x18 */ Client_UI_Misc_GamePresetPoint C;
    /* 0x24 */ Client_UI_Misc_GamePresetPoint D;
    /* 0x30 */ Client_UI_Misc_GamePresetPoint One;
    /* 0x3C */ Client_UI_Misc_GamePresetPoint Two;
    /* 0x48 */ Client_UI_Misc_GamePresetPoint Three;
    /* 0x54 */ Client_UI_Misc_GamePresetPoint Four;
    /* 0x60 */ byte ActiveMarkers;
    /* 0x61 */ byte Reserved;
    /* 0x62 */ unsigned __int16 ContentFinderConditionId;
    /* 0x64 */ __int32 Timestamp;
};

struct Client_UI_Misc_ItemFinderModuleRetainerResult /* Size=0x80 */
{
    /* 0x00 */ Client_UI_Misc_ItemFinderModuleRetainerResult* Next;
    /*      */ byte _gap_0x8[0x18];
    /* 0x20 */ __int64 RetainerId;
    /* 0x28 */ __int32 EquipmentSlot;
    /* 0x2C */ __int32 CrystalsCount;
    /* 0x30 */ __int32 Page1Count;
    /* 0x34 */ __int32 Page2Count;
    /* 0x38 */ __int32 Page3Count;
    /* 0x3C */ __int32 Page4Count;
    /* 0x40 */ __int32 Page5Count;
    /* 0x44 */ __int32 EquipmentSlotHQ;
    /* 0x48 */ __int32 CrystalsCountHQ;
    /* 0x4C */ __int32 Page1CountHQ;
    /* 0x50 */ __int32 Page2CountHQ;
    /* 0x54 */ __int32 Page3CountHQ;
    /* 0x58 */ __int32 Page4CountHQ;
    /* 0x5C */ __int32 Page5CountHQ;
    /* 0x60 */ __int32 EquipmentSlotCollectible;
    /* 0x64 */ __int32 CrystalsCountCollectible;
    /* 0x68 */ __int32 Page1CountCollectible;
    /* 0x6C */ __int32 Page2CountCollectible;
    /* 0x70 */ __int32 Page3CountCollectible;
    /* 0x74 */ __int32 Page4CountCollectible;
    /* 0x78 */ __int32 Page5CountCollectible;
    /*      */ byte _gap_0x7C[0x4];
};

struct Client_UI_Misc_ItemFinderModuleResult /* Size=0x1F8 */
{
    /* 0x000 */ Client_System_String_Utf8String ItemName;
    /* 0x068 */ Client_System_String_Utf8String ItemNameHQ;
    /* 0x0D0 */ Client_System_String_Utf8String ItemNameCollectible;
    /* 0x138 */ __int32 EquipmentSlot;
    /* 0x13C */ __int32 ArmouryChestCategory;
    /* 0x140 */ __int32 ArmouryChestCount;
    /* 0x144 */ __int32 CrystalsCount;
    /* 0x148 */ __int32 InventoryPage1Count;
    /* 0x14C */ __int32 InventoryPage2Count;
    /* 0x150 */ __int32 InventoryPage3Count;
    /* 0x154 */ __int32 InventoryPage4Count;
    /* 0x158 */ __int32 ArmoireCount;
    /* 0x15C */ __int32 SaddleBagPage1Count;
    /* 0x160 */ __int32 SaddleBagPage2Count;
    /* 0x164 */ __int32 PremiumSaddleBagPage1Count;
    /* 0x168 */ __int32 PremiumSaddleBagPage2Count;
    /* 0x16C */ __int32 GlamourDresserCount;
    /* 0x170 */ __int32 EquipmentSlotHQ;
    /* 0x174 */ __int32 ArmouryChestCategoryHQ;
    /* 0x178 */ __int32 ArmouryChestCountHQ;
    /* 0x17C */ __int32 CrystalsCountHQ;
    /* 0x180 */ __int32 InventoryPage1CountHQ;
    /* 0x184 */ __int32 InventoryPage2CountHQ;
    /* 0x188 */ __int32 InventoryPage3CountHQ;
    /* 0x18C */ __int32 InventoryPage4CountHQ;
    /* 0x190 */ __int32 ArmoireCountHQ;
    /* 0x194 */ __int32 SaddleBagPage1CountHQ;
    /* 0x198 */ __int32 SaddleBagPage2CountHQ;
    /* 0x19C */ __int32 PremiumSaddleBagPage1CountHQ;
    /* 0x1A0 */ __int32 PremiumSaddleBagPage2CountHQ;
    /* 0x1A4 */ __int32 GlamourDresserCountHQ;
    /* 0x1A8 */ __int32 EquipmentSlotCollectible;
    /* 0x1AC */ __int32 ArmouryChestCategoryCollectible;
    /* 0x1B0 */ __int32 ArmouryChestCountCollectible;
    /* 0x1B4 */ __int32 CrystalsCountCollectible;
    /* 0x1B8 */ __int32 InventoryPage1CountCollectible;
    /* 0x1BC */ __int32 InventoryPage2CountCollectible;
    /* 0x1C0 */ __int32 InventoryPage3CountCollectible;
    /* 0x1C4 */ __int32 InventoryPage4CountCollectible;
    /* 0x1C8 */ __int32 ArmoireCountCollectible;
    /* 0x1CC */ __int32 SaddleBagPage1CountCollectible;
    /* 0x1D0 */ __int32 SaddleBagPage2CountCollectible;
    /* 0x1D4 */ __int32 PremiumSaddleBagPage1CountCollectible;
    /* 0x1D8 */ __int32 PremiumSaddleBagPage2CountCollectible;
    /* 0x1DC */ __int32 GlamourDresserCountCollectible;
    /* 0x1E0 */ Client_UI_Misc_ItemFinderModuleRetainerResult** Retainer;
    /* 0x1E8 */ __int64 RetainerCount;
    /* 0x1F0 */ bool ShowHQCount;
    /* 0x1F1 */ byte Unk1F1;
    /* 0x1F2 */ bool ShowCollectibleCount;
    /* 0x1F3 */ byte Unk1F3;
    /*       */ byte _gap_0x1F4[0x4];
};

struct Client_UI_Misc_ItemFinderModule /* Size=0x11D0 */
{
    /* 0x0000 */ Client_UI_Misc_UserFileManager_UserFileEvent UserFileEvent;
    /* 0x0040 */ unsigned __int32 RequestItemIds[0x18];
    /* 0x00A0 */ bool IsRequestUnfulfilled;
    /* 0x00A1 */ bool IsCabinetCached;
    /* 0x00A2 */ bool IsRetainerManagerReady;
    /* 0x00A3 */ bool IsSaddleBagCached;
    /* 0x00A4 */ bool IsGlamourDresserCached;
    /* 0x00A5 */ bool ShouldResetInvalid;
    /* 0x00A6 */ byte UnkA6;
    /* 0x00A7 */ byte UnkA7;
    /* 0x00A8 */ __int64 Retainer;
    /* 0x00B0 */ __int64 RetainerCount;
    /* 0x00B8 */ __int64 RetainerInventory;
    /* 0x00C0 */ __int64 RetainerInventoryCount;
    /* 0x00C8 */ unsigned __int32 SaddleBagItemIds[0x46];
    /* 0x01E0 */ unsigned __int32 PremiumSaddleBagItemIds[0x46];
    /* 0x02F8 */ unsigned __int16 SaddleBagItemCount[0x46];
    /* 0x0384 */ unsigned __int16 PremiumSaddleBagItemCount[0x46];
    /* 0x0410 */ unsigned __int32 GlamourDresserItemIds[0x320];
    /*        */ byte _gap_0x1090[0x10];
    /* 0x10A0 */ Client_UI_Misc_ItemFinderModuleResult* Result;
    /*        */ byte _gap_0x10A8[0x128];
};

struct Client_UI_Misc_ItemOrderModuleSorterItemEntry /* Size=0xC */
{
    /* 0x0 */ unsigned __int16 Page;
    /* 0x2 */ unsigned __int16 Slot;
    /*     */ byte _gap_0x4[0x4];
    /* 0x8 */ unsigned __int16 Index;
    /* 0xA */ byte Flags;
    /*     */ byte _gap_0xB;
};

struct StdVector_Client_UI_Misc_ItemOrderModuleSorterItemEntry /* Size=0x18 */
{
    /* 0x00 */ Client_UI_Misc_ItemOrderModuleSorterItemEntry* First;
    /* 0x08 */ Client_UI_Misc_ItemOrderModuleSorterItemEntry* Last;
    /* 0x10 */ Client_UI_Misc_ItemOrderModuleSorterItemEntry* End;
};

struct Client_UI_Misc_ItemOrderModuleSorterSortFunctionEntry /* Size=0x10 */
{
    /* 0x00 */ __int64 FunctionPtr;
    /* 0x08 */ bool Descending;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /*      */ byte _gap_0xC[0x4];
};

struct StdVector_Client_UI_Misc_ItemOrderModuleSorterSortFunctionEntry /* Size=0x18 */
{
    /* 0x00 */ Client_UI_Misc_ItemOrderModuleSorterSortFunctionEntry* First;
    /* 0x08 */ Client_UI_Misc_ItemOrderModuleSorterSortFunctionEntry* Last;
    /* 0x10 */ Client_UI_Misc_ItemOrderModuleSorterSortFunctionEntry* End;
};

struct Client_UI_Misc_ItemOrderModuleSorterPreviousOrderEntry /* Size=0x4 */
{
    /* 0x0 */ unsigned __int16 Slot;
    /* 0x2 */ unsigned __int16 Page;
};

struct Client_UI_Misc_ItemOrderModuleSorter /* Size=0x60 */
{
    /* 0x00 */ Client_Game_InventoryType0x4 InventoryType;
    /*      */ byte _gap_0x4[0x4];
    /* 0x08 */ StdVector_Client_UI_Misc_ItemOrderModuleSorterItemEntry Items;
    /*      */ byte _gap_0x20[0x8];
    /* 0x28 */ __int32 ItemsPerPage;
    /*      */ byte _gap_0x2C[0x4];
    /*      */ byte _gap_0x30[0x8];
    /* 0x38 */ __int32 SortFunctionIndex;
    /* 0x3C */ __int32 PercentComplete;
    /* 0x40 */ StdVector_Client_UI_Misc_ItemOrderModuleSorterSortFunctionEntry SortFunctions;
    /* 0x58 */ Client_UI_Misc_ItemOrderModuleSorterPreviousOrderEntry* PreviousOrderArray;
};

struct Client_UI_Misc_ItemOrderModuleSorterRetainerEntry /* Size=0x40 */
{
    /*      */ byte _gap_0x0[0x20];
    /* 0x20 */ unsigned __int64 RetainerId;
    /* 0x28 */ Client_UI_Misc_ItemOrderModuleSorter* Sorter;
    /*      */ byte _gap_0x30[0x10];
};

struct StdVector_Client_UI_Misc_ItemOrderModuleSorterRetainerEntry /* Size=0x18 */
{
    /* 0x00 */ Client_UI_Misc_ItemOrderModuleSorterRetainerEntry* First;
    /* 0x08 */ Client_UI_Misc_ItemOrderModuleSorterRetainerEntry* Last;
    /* 0x10 */ Client_UI_Misc_ItemOrderModuleSorterRetainerEntry* End;
};

struct Client_UI_Misc_ItemOrderModule /* Size=0xD8 */
{
    /* 0x00 */ Client_UI_Misc_UserFileManager_UserFileEvent UserFileEvent;
    /* 0x40 */ Client_UI_Misc_ItemOrderModuleSorter* InventorySorter;
    union {
    /* 0x48 */ byte ArmourySorter[0x60];
    /* 0x48 */ Client_UI_Misc_ItemOrderModuleSorter* ArmouryMainHandSorter;
    } _union_0x48;
    /* 0x50 */ Client_UI_Misc_ItemOrderModuleSorter* ArmouryHeadSorter;
    /* 0x58 */ Client_UI_Misc_ItemOrderModuleSorter* ArmouryBodySorter;
    /* 0x60 */ Client_UI_Misc_ItemOrderModuleSorter* ArmouryHandsSorter;
    /* 0x68 */ Client_UI_Misc_ItemOrderModuleSorter* ArmouryLegsSorter;
    /* 0x70 */ Client_UI_Misc_ItemOrderModuleSorter* ArmouryFeetSorter;
    /* 0x78 */ Client_UI_Misc_ItemOrderModuleSorter* ArmouryOffHandSorter;
    /* 0x80 */ Client_UI_Misc_ItemOrderModuleSorter* ArmouryEarsSorter;
    /* 0x88 */ Client_UI_Misc_ItemOrderModuleSorter* ArmouryNeckSorter;
    /* 0x90 */ Client_UI_Misc_ItemOrderModuleSorter* ArmouryWristsSorter;
    /* 0x98 */ Client_UI_Misc_ItemOrderModuleSorter* ArmouryRingsSorter;
    /* 0xA0 */ Client_UI_Misc_ItemOrderModuleSorter* ArmourySoulCrystalSorter;
    /* 0xA8 */ Client_UI_Misc_ItemOrderModuleSorter* ArmouryWaistSorter;
    /* 0xB0 */ unsigned __int64 ActiveRetainerId;
    /* 0xB8 */ StdVector_Client_UI_Misc_ItemOrderModuleSorterRetainerEntry* RetainerSorter;
    /* 0xC0 */ __int64 RetainerSorterCount;
    /* 0xC8 */ Client_UI_Misc_ItemOrderModuleSorter* SaddleBagSorter;
    /* 0xD0 */ Client_UI_Misc_ItemOrderModuleSorter* PremiumSaddleBagSorter;
};

struct Client_UI_Misc_PronounModule /* Size=0x3B0 */
{
    /*       */ byte _gap_0x0[0x3B0];
};

struct Client_UI_Misc_HotBarSlots /* Size=0xE00 */
{
    /*       */ byte _gap_0x0[0xE00];
};

struct Client_UI_Misc_HotBar /* Size=0xE00 */
{
    /* 0x000 */ Client_UI_Misc_HotBarSlots Slot;
};

enum Client_UI_Misc_HotbarSlotType0x1 /* Size=0x1 */
{
    Empty = 0,
    Action = 1,
    Item = 2,
    EventItem = 4,
    Emote = 6,
    Macro = 7,
    Marker = 8,
    CraftAction = 9,
    GeneralAction = 10,
    CompanionOrder = 11,
    MainCommand = 12,
    Minion = 13,
    GearSet = 15,
    PetOrder = 16,
    Mount = 17,
    FieldMarker = 18,
    Recipe = 20,
    ChocoboRaceAbility = 21,
    ChocoboRaceItem = 22,
    Unk_0x17 = 23,
    ExtraCommand = 24,
    PvPQuickChat = 25,
    PvPCombo = 26,
    SquadronOrder = 27,
    Unk_0x1C = 28,
    PerformanceInstrument = 29,
    Collection = 30,
    FashionAccessory = 31,
    LostFindsItem = 32
};

struct Client_UI_Misc_HotBarSlot /* Size=0xE0 */
{
    /* 0x00 */ Client_System_String_Utf8String PopUpHelp;
    /* 0x68 */ byte CostText[0x20];
    /* 0x88 */ byte PopUpKeybindHint[0x20];
    /* 0xA8 */ byte KeybindHint[0x10];
    /* 0xB8 */ unsigned __int32 CommandId;
    /* 0xBC */ unsigned __int32 IconA;
    /* 0xC0 */ unsigned __int32 IconB;
    /* 0xC4 */ unsigned __int16 UNK_0xC4;
    /*      */ byte _gap_0xC6;
    /* 0xC7 */ Client_UI_Misc_HotbarSlotType0x1 CommandType;
    /* 0xC8 */ Client_UI_Misc_HotbarSlotType0x1 IconTypeA;
    /* 0xC9 */ Client_UI_Misc_HotbarSlotType0x1 IconTypeB;
    /* 0xCA */ byte UNK_0xCA;
    /* 0xCB */ byte UNK_0xCB;
    /* 0xCC */ __int32 Icon;
    /* 0xD0 */ unsigned __int32 UNK_0xD0;
    /* 0xD4 */ unsigned __int32 UNK_0xD4;
    /* 0xD8 */ unsigned __int32 UNK_0xD8;
    /* 0xDC */ byte UNK_0xDC;
    /* 0xDD */ byte UNK_0xDD;
    /* 0xDE */ byte UNK_0xDE;
    /* 0xDF */ byte IsLoaded;
};

struct Client_UI_Misc_RaptureLogModuleTab /* Size=0x928 */
{
    /* 0x000 */ Client_System_String_Utf8String Name;
    /* 0x068 */ Client_System_String_Utf8String VisibleLogLines;
    /*       */ byte _gap_0xD0[0x858];
};

struct Client_UI_Misc_RaptureMacroModule_MacroPage /* Size=0x28D20 */
{
    /*         */ byte _gap_0x0[0x28D20];
};

struct Client_UI_Misc_RaptureMacroModule /* Size=0x51AA8 */
{
    /* 0x00000 */ Client_UI_Misc_UserFileManager_UserFileEvent UserFileEvent;
    /*         */ byte _gap_0x40[0x18];
    /* 0x00058 */ Client_UI_Misc_RaptureMacroModule_MacroPage Individual;
    /* 0x28D78 */ Client_UI_Misc_RaptureMacroModule_MacroPage Shared;
    /*         */ byte _gap_0x51A98[0x10];
};

struct Client_UI_Misc_RaptureUiDataModule /* Size=0x5958 */
{
    /* 0x0000 */ Client_UI_Misc_UserFileManager_UserFileEvent UserFileEvent;
    /*        */ byte _gap_0x40[0x5918];
};

struct Client_UI_Misc_RetainerCommentModule_RetainerCommentList /* Size=0x410 */
{
    /*       */ byte _gap_0x0[0x410];
};

struct Client_UI_Misc_RetainerCommentModule /* Size=0x450 */
{
    /* 0x000 */ Client_UI_Misc_UserFileManager_UserFileEvent UserFileEvent;
    /* 0x040 */ Client_UI_Misc_RetainerCommentModule_RetainerCommentList Retainers;
};

struct Client_UI_Misc_ScreenLog /* Size=0x1 */
{
    /*     */ byte _gap_0x0;
};

enum Client_UI_Misc_DataSegment0x1 /* Size=0x1 */
{
    LETTER = 0,
    RETTASK = 1,
    FLAGS = 2,
    RCFAV = 3,
    UIDATA = 4,
    TLPH = 5,
    ITCC = 6,
    PVPSET = 7,
    EMTH = 8,
    MNONLST = 9,
    MUNTLST = 10,
    EMJ = 11,
    AOZNOTE = 12,
    CWLS = 13,
    ARCHVLST = 14,
    GRPPOS = 15,
    CRAFT = 16,
    FMARKER = 17,
    MYCNOT = 18,
    ORNMLST = 19,
    MYCITEM = 20,
    GRPSTAMP = 21,
    RTNR = 22,
    BANNER = 23,
    ADVNOTE = 24,
    AKTKNOT = 25,
    VVDNOTE = 26,
    VVDACT = 27,
    TOFU = 28
};

enum Client_UI_Misc_UserFileManager_UserFileType0x2 /* Size=0x2 */
{
    ADDON = 0,
    MACRO = 1,
    HOTBAR = 2,
    KEYBIND = 3,
    LOGFLTR = 4,
    GEARSET = 5,
    ACQ = 6,
    ITEMODR = 7,
    ITEMFDR = 8,
    UISAVE = 9,
    GS = 10,
    CONTROL = 13
};

struct Client_UI_Info_InfoModule /* Size=0x1C70 */
{
    /*        */ byte _gap_0x0[0x1978];
    /* 0x1978 */ __int64 InfoProxyArray[0x22];
    /* 0x1A88 */ unsigned __int64 LocalContentId;
    /* 0x1A90 */ Client_System_String_Utf8String LocalCharName;
    /* 0x1AF8 */ Client_System_String_Utf8String UnkString1;
    /* 0x1B60 */ Client_System_String_Utf8String UnkString2;
    /* 0x1BC8 */ Client_System_String_Utf8String UnkString3;
    /*        */ byte _gap_0x1C30[0x40];
};

enum Client_UI_Info_InfoProxyId0x4 /* Size=0x4 */
{
    Party = 0,
    Party2 = 1,
    PartyInvite = 2,
    LinkShell = 3,
    LinkShellMember = 4,
    Blacklist = 5,
    FriendList = 6,
    FriendList2 = 7,
    Letter = 8,
    PlayerSearch = 9,
    SearchComment = 10,
    ItemSearch = 12,
    FreeCompany = 13,
    FreeCompanyCreate = 14,
    FreeCompanyMember = 15,
    FreeCompanyMember2 = 16,
    LinkShellChat = 18,
    CrossRealmParty = 19,
    CrossWorldLinkShell = 29,
    CrossWorldLinkShellMember = 30,
    CircleList = 31,
    Circle = 32,
    CircleFinder = 33
};

struct Client_UI_Info_InfoProxyInterface_InfoProxyInterfaceVTable /* Size=0x40 */
{
    /*      */ byte _gap_0x0[0x38];
    /* 0x38 */ __int64 GetEntryCount;
};

struct Client_UI_Info_InfoProxyInterface /* Size=0x18 */
{
    union {
    /* 0x00 */ void** vtbl;
    /* 0x00 */ Client_UI_Info_InfoProxyInterface_InfoProxyInterfaceVTable* VTable;
    } _union_0x0;
    /* 0x08 */ Client_UI_UIModule* UiModule;
    /* 0x10 */ unsigned __int32 EntryCount;
    /*      */ byte _gap_0x14[0x4];
};

struct Client_UI_Info_InfoProxyPageInterface /* Size=0x20 */
{
    /* 0x00 */ Client_UI_Info_InfoProxyInterface InfoProxyInterface;
    /*      */ byte _gap_0x18[0x8];
};

struct Client_UI_Info_InfoProxy11 /* Size=0x5B98 */
{
    /* 0x0000 */ Client_UI_Info_InfoProxyPageInterface InfoProxyPageInterface;
    /*        */ byte _gap_0x20[0x5B78];
};

struct Client_UI_Info_InfoProxy17 /* Size=0x1F8 */
{
    /* 0x000 */ Client_UI_Info_InfoProxyInterface InfoProxyInterface;
    /*       */ byte _gap_0x18[0x20];
    /* 0x038 */ Client_System_String_Utf8String UnkString0;
    /* 0x0A0 */ Client_System_String_Utf8String UnkString1;
    /*       */ byte _gap_0x108[0xF0];
};

struct Client_UI_Info_InfoProxy20 /* Size=0x28 */
{
    /* 0x00 */ Client_UI_Info_InfoProxyInterface InfoProxyInterface;
    /*      */ byte _gap_0x18[0x10];
};

struct Client_UI_Info_InfoProxyCommonList_CharacterArray /* Size=0x4B00 */
{
    /* 0x0000 */ byte Entries[0x4B00];
};

struct Client_UI_Info_InfoProxyCommonList_CharacterDict /* Size=0x2000 */
{
    /* 0x0000 */ byte Entries[0x2000];
};

struct Client_UI_Info_InfoProxyCommonList /* Size=0xB8 */
{
    /* 0x00 */ Client_UI_Info_InfoProxyPageInterface InfoProxyPageInterface;
    /* 0x20 */ Client_System_String_Utf8String Unk20;
    /*      */ byte _gap_0x88[0x8];
    /* 0x90 */ unsigned __int16 Size;
    /*      */ byte _gap_0x92[0x2];
    /*      */ byte _gap_0x94[0x4];
    /* 0x98 */ Client_UI_Info_InfoProxyCommonList_CharacterArray* Data;
    /* 0xA0 */ Client_UI_Info_InfoProxyCommonList_CharacterDict* Dict;
    /*      */ byte _gap_0xA8[0x10];
};

struct Client_UI_Info_InfoProxyInvitedList /* Size=0xC8 */
{
    /* 0x00 */ Client_UI_Info_InfoProxyCommonList InfoProxyCommonList;
    /*      */ byte _gap_0xB8[0x10];
};

struct Client_UI_Info_InfoProxy21 /* Size=0xC8 */
{
    /* 0x00 */ Client_UI_Info_InfoProxyInvitedList InfoProxyInvitedList;
};

struct Client_UI_Info_InfoProxy22 /* Size=0xC8 */
{
    /* 0x00 */ Client_UI_Info_InfoProxyInvitedList InfoProxyInvitedList;
};

struct Client_UI_Info_InfoProxy23 /* Size=0xA20 */
{
    /* 0x000 */ Client_UI_Info_InfoProxyCommonList InfoProxyCommonList;
    /*       */ byte _gap_0xB8[0x968];
};

struct Client_UI_Info_InfoProxy24 /* Size=0x188 */
{
    /* 0x000 */ Client_UI_Info_InfoProxyInterface InfoProxyInterface;
    /*       */ byte _gap_0x18[0x20];
    /* 0x038 */ Client_System_String_Utf8String UnkString0;
    /* 0x0A0 */ Client_System_String_Utf8String UnkString1;
    /* 0x108 */ Client_System_String_Utf8String UnkString2;
    /*       */ byte _gap_0x170[0x18];
};

struct Client_UI_Info_InfoProxy25 /* Size=0x3E8 */
{
    /* 0x000 */ Client_UI_Info_InfoProxyInterface InfoProxyInterface;
    /*       */ byte _gap_0x18[0x20];
    /* 0x038 */ Client_System_String_Utf8String UnkString0;
    /* 0x0A0 */ Client_System_String_Utf8String UnkString1;
    /* 0x108 */ Component_GUI_AtkEventListener Unk108;
    /*       */ byte _gap_0x110[0x2A0];
    /* 0x3B0 */ Component_GUI_AtkEventTarget Unk3B0;
    /*       */ byte _gap_0x3B8[0x30];
};

struct Client_UI_Info_InfoProxy26 /* Size=0x28 */
{
    /* 0x00 */ Client_UI_Info_InfoProxyInterface InfoProxyInterface;
    /*      */ byte _gap_0x18[0x10];
};

struct Client_UI_Info_InfoProxy27 /* Size=0x28 */
{
    /* 0x00 */ Client_UI_Info_InfoProxyInterface InfoProxyInterface;
    /*      */ byte _gap_0x18[0x10];
};

struct Client_UI_Info_InfoProxy28 /* Size=0x110 */
{
    /* 0x000 */ Client_UI_Info_InfoProxyInterface InfoProxyInterface;
    /*       */ byte _gap_0x18[0x20];
    /* 0x038 */ Client_System_String_Utf8String UnkString0;
    /* 0x0A0 */ Client_System_String_Utf8String UnkString1;
    /*       */ byte _gap_0x108[0x8];
};

struct Client_UI_Info_InfoProxyBlacklist /* Size=0x1A00 */
{
    /* 0x0000 */ Client_UI_Info_InfoProxyPageInterface InfoProxyPageInterface;
    /* 0x0020 */ __int64 ContentIdArray[0xC8];
    /* 0x0660 */ Client_System_String_Utf8String Unk660;
    /* 0x06C8 */ Client_System_String_Utf8String Unk6C8;
    /*        */ byte _gap_0x730[0x12D0];
};

struct Client_UI_Info_InfoProxyCircleFinder /* Size=0x1C8 */
{
    /* 0x000 */ Client_UI_Info_InfoProxyInterface InfoProxyInterface;
    /*       */ byte _gap_0x18[0x88];
    /* 0x0A0 */ Client_System_String_Utf8String UnkString0;
    /*       */ byte _gap_0x108[0x8];
    /* 0x110 */ Client_System_String_Utf8String UnkString1;
    /*       */ byte _gap_0x178[0x8];
    /* 0x180 */ Component_GUI_AtkEventTarget AtkEventTarget0;
    /*       */ byte _gap_0x188[0x8];
    /* 0x190 */ Component_GUI_AtkEventTarget AtkEventTarget1;
    /*       */ byte _gap_0x198[0x30];
};

struct Client_UI_Info_InfoProxyCircleList /* Size=0x1E0 */
{
    /* 0x000 */ Client_UI_Info_InfoProxyInterface InfoProxyInterface;
    /*       */ byte _gap_0x18[0x20];
    /* 0x038 */ Client_System_String_Utf8String UnkString0;
    /* 0x0A0 */ Client_System_String_Utf8String UnkString1;
    /* 0x108 */ void* UnkObj108;
    /*       */ byte _gap_0x110[0x18];
    /* 0x128 */ Client_System_String_Utf8String UnkString2;
    /*       */ byte _gap_0x190[0x8];
    /* 0x198 */ void* UnkObj198;
    /*       */ byte _gap_0x1A0[0x8];
    /* 0x1A8 */ void* UnkObj1A8;
    /*       */ byte _gap_0x1B0[0x30];
};

struct Client_UI_Info_InfoProxyCrossRealm /* Size=0x14A0 */
{
    /* 0x0000 */ Client_UI_Info_InfoProxyInterface InfoProxyInterface;
    /*        */ byte _gap_0x18[0x370];
    /*        */ byte _gap_0x388[0x4];
    /*        */ byte _gap_0x38C;
    /* 0x038D */ byte LocalPlayerGroupIndex;
    /* 0x038E */ byte GroupCount;
    /*        */ byte _gap_0x38F;
    /* 0x0390 */ byte IsCrossRealm;
    /* 0x0391 */ byte IsInAllianceRaid;
    /* 0x0392 */ byte IsPartyLeader;
    /* 0x0393 */ byte IsInCrossRealmParty;
    /*        */ byte _gap_0x394[0x4];
    /*        */ byte _gap_0x398[0x8];
    /* 0x03A0 */ byte CrossRealmGroupArray[0xF30];
    /*        */ byte _gap_0x12D0[0x1D0];
};

struct Client_UI_Info_CrossRealmGroup /* Size=0x288 */
{
    /* 0x000 */ byte GroupMemberCount;
    /*       */ byte _gap_0x1;
    /*       */ byte _gap_0x2[0x2];
    /*       */ byte _gap_0x4[0x4];
    /* 0x008 */ byte GroupMembers[0x280];
};

struct Client_UI_Info_CrossRealmMember /* Size=0x50 */
{
    /* 0x00 */ unsigned __int64 ContentId;
    /*      */ byte _gap_0x8[0x8];
    /* 0x10 */ unsigned __int32 ObjectId;
    /*      */ byte _gap_0x14[0x4];
    /* 0x18 */ byte Level;
    /*      */ byte _gap_0x19;
    /* 0x1A */ __int16 HomeWorld;
    /* 0x1C */ __int16 CurrentWorld;
    /* 0x1E */ byte ClassJobId;
    /*      */ byte _gap_0x1F;
    /*      */ byte _gap_0x20[0x2];
    /* 0x22 */ byte Name[0x1E];
    /*      */ byte _gap_0x40[0x8];
    /* 0x48 */ byte MemberIndex;
    /* 0x49 */ byte GroupIndex;
    /*      */ byte _gap_0x4A;
    /* 0x4B */ byte IsPartyLeader;
    /*      */ byte _gap_0x4C[0x4];
};

struct Client_UI_Info_InfoProxyInvitedInterface_Unk18 /* Size=0x10 */
{
    /* 0x00 */ void* vtbl;
    /* 0x08 */ void* Data;
};

struct Client_UI_Info_InfoProxyInvitedInterface /* Size=0x28 */
{
    /* 0x00 */ Client_UI_Info_InfoProxyInterface InfoProxynterface;
    /* 0x18 */ Client_UI_Info_InfoProxyInvitedInterface_Unk18 Unk18Obj;
};

struct Client_UI_Info_InfoProxyCrossWorldLinkShell /* Size=0x558 */
{
    /* 0x000 */ Client_UI_Info_InfoProxyInvitedInterface InfoProxyInvitedInterface;
    /* 0x028 */ unsigned __int32 NumInvites;
    /*       */ byte _gap_0x2C[0x4];
    /* 0x030 */ byte Unk30;
    /*       */ byte _gap_0x31;
    /*       */ byte _gap_0x32[0x2];
    /*       */ byte _gap_0x34[0x4];
    /* 0x038 */ Client_System_String_Utf8String InvitedName;
    /* 0x0A0 */ Client_System_String_Utf8String UnkString0;
    /* 0x108 */ byte CWLSArray[0x440];
    /*       */ byte _gap_0x548[0x10];
};

struct Client_UI_Info_InfoProxyCrossWorldLinkShellMember /* Size=0xD0 */
{
    /* 0x00 */ Client_UI_Info_InfoProxyCommonList InfoProxyCommonList;
    /*      */ byte _gap_0xB8[0x18];
};

enum Client_UI_Agent_GrandCompany0x1 /* Size=0x1 */
{
    None = 0,
    Maelstrom = 1,
    TwinAdder = 2,
    ImmortalFlames = 3
};

struct Client_UI_Info_InfoProxyFreeCompany /* Size=0x6E8 */
{
    /* 0x000 */ Client_UI_Info_InfoProxyInterface InfoProxyInterface;
    /*       */ byte _gap_0x18[0x8];
    /* 0x020 */ void* Unk20;
    /*       */ byte _gap_0x28[0x8];
    /* 0x030 */ unsigned __int64 ID;
    /*       */ byte _gap_0x38[0x8];
    /*       */ byte _gap_0x40[0x4];
    /* 0x044 */ Client_UI_Agent_GrandCompany0x1 GrandCompany;
    /*       */ byte _gap_0x45;
    /* 0x046 */ unsigned __int16 HomeWorldID;
    /*       */ byte _gap_0x48[0x10];
    /*       */ byte _gap_0x58;
    /* 0x059 */ byte Rank;
    /*       */ byte _gap_0x5A[0x2];
    /*       */ byte _gap_0x5C[0x4];
    /*       */ byte _gap_0x60[0x10];
    /* 0x070 */ Client_UI_Agent_CrestData Crest;
    /* 0x078 */ unsigned __int16 OnlineMembers;
    /* 0x07A */ unsigned __int16 TotalMembers;
    /* 0x07C */ byte Name[0x16];
    /*       */ byte _gap_0x92;
    /* 0x093 */ byte Master[0x3C];
    /*       */ byte _gap_0xCF;
    /* 0x0D0 */ Client_System_String_Utf8String UnkD0;
    /* 0x138 */ byte ActiveListItemNum;
    /* 0x139 */ byte MemberTabIndex;
    /*       */ byte _gap_0x13A[0x2];
    /*       */ byte _gap_0x13C[0x2];
    /* 0x13E */ byte InfoTabIndex;
    /*       */ byte _gap_0x13F;
    /*       */ byte _gap_0x140[0x38];
    /* 0x178 */ byte RankArray[0x4D0];
    /*       */ byte _gap_0x648[0xA0];
};

struct Client_UI_Info_InfoProxyFreeCompanyCreate /* Size=0x118 */
{
    /* 0x000 */ Client_UI_Info_InfoProxyInvitedInterface InfoProxyUnk3Interface;
    /*       */ byte _gap_0x28[0x20];
    /* 0x048 */ Client_System_String_Utf8String UnkString0;
    /* 0x0B0 */ Client_System_String_Utf8String UnkString1;
};

struct Client_UI_Info_InfoProxyFreeCompanyMember /* Size=0xD0 */
{
    /* 0x00 */ Client_UI_Info_InfoProxyCommonList InfoProxyCommonList;
    /* 0xB8 */ unsigned __int64 FreeCompanyID;
    /*      */ byte _gap_0xC0[0x10];
};

struct Client_UI_Info_InfoProxyFriendList /* Size=0x3AD0 */
{
    /* 0x0000 */ Client_UI_Info_InfoProxyCommonList InfoProxyCommonList;
    /*        */ byte _gap_0xB8[0x20];
    /* 0x00D8 */ Client_System_String_Utf8String Str2;
    /* 0x0140 */ Client_System_String_Utf8String Str3;
    /* 0x01A8 */ Client_System_String_Utf8String Str4;
    /* 0x0210 */ Client_System_String_Utf8String Str5;
    /* 0x0278 */ byte Names[0x3200];
    /*        */ byte _gap_0x3478[0x320];
    /* 0x3798 */ byte Unk3798[0x320];
    /*        */ byte _gap_0x3AB8[0x18];
};

struct Client_UI_Info_InfoProxyItemSearch /* Size=0x3C8 */
{
    /* 0x000 */ Client_UI_Info_InfoProxyPageInterface InfoProxyPageInterface;
    /*       */ byte _gap_0x20[0x8];
    /* 0x028 */ Client_System_String_Utf8String Query;
    /* 0x090 */ byte Entries[0xA0];
    /*       */ byte _gap_0x130[0x298];
};

struct Client_UI_Info_InfoProxyLetter /* Size=0x5250 */
{
    /* 0x0000 */ Client_UI_Info_InfoProxyPageInterface InfoProxyPageInterface;
    /*        */ byte _gap_0x20[0x4];
    /* 0x0024 */ byte NumAtachments;
    /*        */ byte _gap_0x25;
    /*        */ byte _gap_0x26;
    /* 0x0027 */ byte NumLettersFromFriends;
    /* 0x0028 */ byte NumPurchases;
    /*        */ byte _gap_0x29;
    /*        */ byte _gap_0x2A[0x2];
    /*        */ byte _gap_0x2C[0x4];
    /* 0x0030 */ byte Letters[0x5140];
    /*        */ byte _gap_0x5170[0x8];
    /* 0x5178 */ Client_System_String_Utf8String UnkString0;
    /* 0x51E0 */ Client_System_String_Utf8String UnkString1;
    /*        */ byte _gap_0x5248[0x8];
};

struct Client_UI_Info_InfoProxyLinkShell /* Size=0x1E8 */
{
    /* 0x000 */ Client_UI_Info_InfoProxyInterface InfoProxyInterface;
    /*       */ byte _gap_0x18[0x20];
    /* 0x038 */ Client_System_String_Utf8String UnkString0;
    /* 0x0A0 */ Client_System_String_Utf8String UnkString1;
    /* 0x108 */ byte LinkShells[0xC0];
    /*       */ byte _gap_0x1C8[0x20];
};

struct Client_UI_Info_InfoProxyLinkShellChat /* Size=0x58 */
{
    /* 0x00 */ Client_UI_Info_InfoProxyInterface InfoProxyInterface;
    /*      */ byte _gap_0x18[0x40];
};

struct Client_UI_Info_InfoProxyLinkshellMember /* Size=0xD0 */
{
    /* 0x00 */ Client_UI_Info_InfoProxyCommonList InfoProxyCommonList;
    /*      */ byte _gap_0xB8[0x18];
};

struct Client_UI_Info_InfoProxyParty /* Size=0x348 */
{
    /* 0x000 */ Client_UI_Info_InfoProxyCommonList InfoProxyCommonList;
    /*       */ byte _gap_0xB8[0x30];
    /* 0x0E8 */ void* UnkE8;
    /*       */ byte _gap_0xF0[0x10];
    /* 0x100 */ void* Unk100;
    /*       */ byte _gap_0x108[0x240];
};

struct Client_UI_Info_InfoProxyPartyInvite /* Size=0x148 */
{
    /* 0x000 */ Client_UI_Info_InfoProxyInvitedInterface InfoProxyInvitedInterface;
    /*       */ byte _gap_0x28[0x10];
    /*       */ byte _gap_0x38[0x4];
    /* 0x03C */ unsigned __int32 InviteTime;
    /*       */ byte _gap_0x40[0x2];
    /* 0x042 */ unsigned __int16 InviterWorldID;
    /*       */ byte _gap_0x44[0x4];
    /* 0x048 */ Client_System_String_Utf8String IviterName;
    /* 0x0B0 */ Client_System_String_Utf8String IviterNameWithHomeworld;
    /*       */ byte _gap_0x118[0x30];
};

struct Client_UI_Info_InfoProxySearch /* Size=0x178 */
{
    /* 0x000 */ Client_UI_Info_InfoProxyCommonList InfoProxyCommonList;
    /*       */ byte _gap_0xB8[0xC0];
};

struct Client_UI_Info_InfoProxySearchComment /* Size=0x240 */
{
    /* 0x000 */ Client_UI_Info_InfoProxyInterface InfoProxyInterface;
    /*       */ byte _gap_0x18[0x8];
    /* 0x020 */ void* Unk20;
    /*       */ byte _gap_0x28[0x10];
    /*       */ byte _gap_0x38[0x2];
    /* 0x03A */ byte SearchCommentAsByteArr[0x3E];
    /*       */ byte _gap_0x78[0x88];
    /* 0x100 */ Client_System_String_Utf8String SearchComment;
    /* 0x168 */ Client_System_String_Utf8String UnkString1;
    /* 0x1D0 */ Client_System_String_Utf8String UnkString2;
    /*       */ byte _gap_0x238[0x8];
};

struct Client_UI_Agent_AozArrangementData /* Size=0x7A */
{
    /*      */ byte _gap_0x0;
    /* 0x01 */ byte Count;
    /* 0x02 */ unsigned __int16 Enemies[0x1E];
    /* 0x3E */ unsigned __int16 Positions[0x1E];
};

struct Client_UI_Agent_AozWeeklyReward /* Size=0x8 */
{
    /* 0x0 */ unsigned __int16 Gil;
    /* 0x2 */ unsigned __int16 Seals;
    /* 0x4 */ unsigned __int16 Tomes;
    /*     */ byte _gap_0x6[0x2];
};

struct Client_UI_Agent_AozContentData /* Size=0x380 */
{
    /*       */ byte _gap_0x0[0x8];
    /*       */ byte _gap_0x8[0x4];
    /* 0x00C */ __int32 SelectedContentIndex;
    /* 0x010 */ __int32 MaxContentEntries;
    /*       */ byte _gap_0x14[0x4];
    /*       */ byte _gap_0x18[0x28];
    /* 0x040 */ __int32 CurrentContentIndex;
    /*       */ byte _gap_0x44[0x4];
    /* 0x048 */ byte CurrentActIndex;
    /* 0x049 */ byte CurrentEnemyIndex;
    union {
    /* 0x04A */ byte Arrangements[0x16E];
    /* 0x04A */ Client_UI_Agent_AozArrangementData Act1Arrangement;
    } _union_0x4A;
    /*       */ byte _gap_0x52[0x2];
    /*       */ byte _gap_0x54[0x4];
    /*       */ byte _gap_0x58[0x68];
    /*       */ byte _gap_0xC0[0x4];
    /* 0x0C4 */ Client_UI_Agent_AozArrangementData Act2Arrangement;
    /* 0x13E */ Client_UI_Agent_AozArrangementData Act3Arrangement;
    /*       */ byte _gap_0x1B8[0x70];
    /* 0x228 */ Client_System_String_Utf8String NoviceString;
    /* 0x290 */ Client_System_String_Utf8String ModerateString;
    /* 0x2F8 */ Client_System_String_Utf8String AdvancedString;
    union {
    /* 0x360 */ byte WeeklyRewards[0x18];
    /* 0x360 */ Client_UI_Agent_AozWeeklyReward NoviceRewards;
    } _union_0x360;
    /* 0x368 */ Client_UI_Agent_AozWeeklyReward ModerateRewards;
    /* 0x370 */ Client_UI_Agent_AozWeeklyReward AdvancedRewards;
    /*       */ byte _gap_0x378[0x8];
};

enum Client_UI_Agent_AozWeeklyFlags0x1 /* Size=0x1 */
{
    None = 0,
    Unknown = 1,
    Novice = 2,
    Moderate = 4,
    Advanced = 8
};

struct Client_UI_Agent_AgentAozContentBriefing /* Size=0x1A0 */
{
    /* 0x000 */ Component_GUI_AgentInterface AgentInterface;
    /* 0x028 */ Client_UI_Agent_AozContentData* AozContentData;
    /* 0x030 */ Client_System_String_Utf8String WeeklyNoviceTitle;
    /* 0x098 */ Client_System_String_Utf8String WeeklyModerateTitle;
    /* 0x100 */ Client_System_String_Utf8String WeeklyAdvancedTitle;
    /* 0x168 */ Client_UI_Agent_AozWeeklyFlags0x1 WeeklyCompletion;
    /* 0x169 */ byte WeeklyAozContentId[0x3];
    /* 0x16C */ byte NoviceRequirement[0x3];
    /* 0x16F */ byte ModerateRequirement[0x3];
    /* 0x172 */ byte AdvancedRequirement[0x3];
    /*       */ byte _gap_0x175;
    /*       */ byte _gap_0x176[0x2];
    /* 0x178 */ byte* NoviceRequirements;
    /* 0x180 */ byte* ModerateRequirements;
    /* 0x188 */ byte* AdvancedRequirements;
    /*       */ byte _gap_0x190[0x10];
};

enum Client_UI_Agent_AozWeeklyChallenge0x4 /* Size=0x4 */
{
    Novice = 0,
    Moderate = 1,
    Advanced = 2
};

struct Client_UI_Agent_AozContentResultData /* Size=0x90 */
{
    /*      */ byte _gap_0x0[0x4];
    /* 0x04 */ unsigned __int32 ClearTime;
    /*      */ byte _gap_0x8[0x4];
    /* 0x0C */ unsigned __int32 Score;
    /*      */ byte _gap_0x10[0x18];
    /* 0x28 */ Client_System_String_Utf8String StageName;
};

struct Client_UI_Agent_AgentAozContentResult /* Size=0x30 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /* 0x28 */ Client_UI_Agent_AozContentResultData* AozContentResultData;
};

struct Client_UI_Agent_ArchiveItem /* Size=0xB0 */
{
    /*      */ byte _gap_0x0[0x10];
    /* 0x10 */ unsigned __int32 ItemId;
    /*      */ byte _gap_0x14[0x4];
    /* 0x18 */ Client_System_String_Utf8String ItemName;
    /*      */ byte _gap_0x80[0x30];
};

struct Client_UI_Agent_AgentArchiveItem /* Size=0x30 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /* 0x28 */ Client_UI_Agent_ArchiveItem* ArchiveItem;
};

struct Client_UI_Agent_AgentBannerInterface_Storage /* Size=0x3B30 */
{
    union {
    /* 0x0000 */ void* Agent;
    /* 0x0000 */ byte CharacterArray[0x3B00];
    } _union_0x0;
    /* 0x0008 */ Client_UI_UIModule* UiModule;
    /* 0x0010 */ unsigned __int32 Unk1;
    /* 0x0014 */ unsigned __int32 Unk2;
    /*        */ byte _gap_0x18[0x3B08];
    /* 0x3B20 */ __int64 Unk3;
    /* 0x3B28 */ __int64 Unk4;
};

struct Client_UI_Agent_AgentBannerInterface /* Size=0x30 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /* 0x28 */ Client_UI_Agent_AgentBannerInterface_Storage* Data;
};

struct Client_UI_Agent_AgentBannerMIP /* Size=0x38 */
{
    /* 0x00 */ Client_UI_Agent_AgentBannerInterface AgentBannerInterface;
    /*      */ byte _gap_0x30[0x8];
};

struct Client_UI_Agent_AgentBannerParty /* Size=0x38 */
{
    /* 0x00 */ Client_UI_Agent_AgentBannerInterface AgentBannerInterface;
    /*      */ byte _gap_0x30[0x8];
};

struct Client_UI_Agent_AgentCharaCard_Storage /* Size=0x950 */
{
    /*       */ byte _gap_0x0[0x58];
    /* 0x058 */ Client_System_String_Utf8String Name;
    /*       */ byte _gap_0xC0[0x18];
    /* 0x0D8 */ Client_System_String_Utf8String FreeCompany;
    /* 0x140 */ Client_System_String_Utf8String UnkString1;
    /* 0x1A8 */ Client_System_String_Utf8String UnkString2;
    /*       */ byte _gap_0x210[0x40];
    /* 0x250 */ unsigned __int32 Activity1IconId;
    /*       */ byte _gap_0x254[0x4];
    /* 0x258 */ Client_System_String_Utf8String Activity1Name;
    /* 0x2C0 */ unsigned __int32 Activity2IconId;
    /*       */ byte _gap_0x2C4[0x4];
    /* 0x2C8 */ Client_System_String_Utf8String Activity2Name;
    /* 0x330 */ unsigned __int32 Activity3IconId;
    /*       */ byte _gap_0x334[0x4];
    /* 0x338 */ Client_System_String_Utf8String Activity3Name;
    /* 0x3A0 */ unsigned __int32 Activity4IconId;
    /*       */ byte _gap_0x3A4[0x4];
    /* 0x3A8 */ Client_System_String_Utf8String Activity4Name;
    /* 0x410 */ unsigned __int32 Activity5IconId;
    /*       */ byte _gap_0x414[0x4];
    /* 0x418 */ Client_System_String_Utf8String Activity5Name;
    /* 0x480 */ unsigned __int32 Activity6IconId;
    /*       */ byte _gap_0x484[0x4];
    /* 0x488 */ Client_System_String_Utf8String Activity6Name;
    /*       */ byte _gap_0x4F0[0x50];
    /* 0x540 */ Client_UI_Misc_CharaView CharaView;
    /*       */ byte _gap_0x808[0x148];
};

struct Client_UI_Agent_AgentCharaCard /* Size=0x38 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /* 0x28 */ Client_UI_Agent_AgentCharaCard_Storage* Data;
    /*      */ byte _gap_0x30[0x8];
};

struct Client_UI_Agent_AgentCompanyCraftMaterial /* Size=0xE8 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /*      */ byte _gap_0x28[0x68];
    /*      */ byte _gap_0x90[0x4];
    /* 0x94 */ unsigned __int32 ResultItem;
    /*      */ byte _gap_0x98;
    /* 0x99 */ byte SelectedSupplyItemIndex;
    /*      */ byte _gap_0x9A[0x2];
    /* 0x9C */ unsigned __int32 SupplyItem[0xC];
    /*      */ byte _gap_0xCC[0x4];
    /*      */ byte _gap_0xD0[0x18];
};

struct Client_UI_Agent_ContentsFinderRewards /* Size=0x20 */
{
    union {
    /* 0x00 */ __int32 ExpReward;
    /* 0x00 */ __int32 GilReward;
    /* 0x00 */ __int32 SealReward;
    /* 0x00 */ __int32 PoeticReward;
    /* 0x00 */ __int32 NonLimitedTomestoneReward;
    /* 0x00 */ __int32 LimitedTomestoneRward;
    /* 0x00 */ __int32 PvPExpReward;
    /* 0x00 */ __int32 WolfMarkReward;
    } _union_0x0;
    /*      */ byte _gap_0x8[0x18];
};

struct Client_UI_Agent_ItemReward /* Size=0x130 */
{
    /*       */ byte _gap_0x0[0x40];
    /*       */ byte _gap_0x40[0x4];
    /* 0x044 */ __int32 ItemId;
    /* 0x048 */ __int32 Quantity;
    /*       */ byte _gap_0x4C[0x4];
    /*       */ byte _gap_0x50[0x8];
    /* 0x058 */ Client_System_String_Utf8String* TooltipString;
    /*       */ byte _gap_0x60[0x18];
    /* 0x078 */ Client_System_String_Utf8String* UnkString;
    /*       */ byte _gap_0x80[0xB0];
};

enum Client_UI_Agent_ContentsRouletteRole0x1 /* Size=0x1 */
{
    Tank = 0,
    Healer = 1,
    DPS = 2,
    None = 3
};

struct Client_UI_Agent_ContextMenu /* Size=0x678 */
{
    /* 0x000 */ __int16 CurrentEventIndex;
    /* 0x002 */ __int16 CurrentEventId;
    /*       */ byte _gap_0x4[0x4];
    /* 0x008 */ byte EventParams[0x210];
    /*       */ byte _gap_0x218[0x210];
    /* 0x428 */ byte EventIdArray[0x20];
    /*       */ byte _gap_0x448[0x8];
    /* 0x450 */ __int64 EventHandlerArray[0x20];
    /*       */ byte _gap_0x550[0x8];
    /* 0x558 */ __int64 EventHandlerParamArray[0x20];
    /*       */ byte _gap_0x658[0x8];
    /* 0x660 */ unsigned __int32 ContextItemDisabledMask;
    /* 0x664 */ unsigned __int32 ContextSubMenuMask;
    /* 0x668 */ byte* ContextTitleString;
    /* 0x670 */ byte SelectedContextItemIndex;
    /*       */ byte _gap_0x671;
    /*       */ byte _gap_0x672[0x2];
    /*       */ byte _gap_0x674[0x4];
};

struct System_Drawing_Point /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct Client_UI_Agent_ContextMenuTarget /* Size=0x60 */
{
    /* 0x00 */ unsigned __int64 ContentId;
    /*      */ byte _gap_0x8[0x8];
    /*      */ byte _gap_0x10[0x4];
    /* 0x14 */ byte AddonListIndex;
    /*      */ byte _gap_0x15;
    /* 0x16 */ unsigned __int16 CurrentWorldId;
    /* 0x18 */ unsigned __int16 HomeWorldId;
    /* 0x1A */ unsigned __int16 TerritoryTypeId;
    /* 0x1C */ byte GrandCompany;
    /* 0x1D */ byte ClientLanguage;
    /* 0x1E */ byte LanguageBitmask;
    /*      */ byte _gap_0x1F;
    /* 0x20 */ byte Gender;
    /* 0x21 */ byte ClassJobId;
    /* 0x22 */ byte Name[0x20];
    /* 0x42 */ byte FcName[0xE];
    /* 0x50 */ void* Unk_Info_Ptr;
    /*      */ byte _gap_0x58[0x8];
};

struct Client_UI_Agent_AgentContext /* Size=0x1748 */
{
    /* 0x0000 */ Component_GUI_AgentInterface AgentInterface;
    union {
    /* 0x0028 */ byte ContextMenuArray[0xCF0];
    /* 0x0028 */ Client_UI_Agent_ContextMenu MainContextMenu;
    } _union_0x28;
    /*        */ byte _gap_0x30[0x670];
    /* 0x06A0 */ Client_UI_Agent_ContextMenu SubContextMenu;
    /* 0x0D18 */ Client_UI_Agent_ContextMenu* CurrentContextMenu;
    /* 0x0D20 */ Client_System_String_Utf8String ContextMenuTitle;
    /* 0x0D88 */ System_Drawing_Point Position;
    /* 0x0D90 */ unsigned __int32 OwnerAddon;
    /*        */ byte _gap_0xD94[0x4];
    /*        */ byte _gap_0xD98[0x8];
    /* 0x0DA0 */ Client_UI_Agent_ContextMenuTarget ContextMenuTarget;
    /* 0x0E00 */ Client_UI_Agent_ContextMenuTarget* CurrentContextMenuTarget;
    /* 0x0E08 */ Client_System_String_Utf8String TargetName;
    /* 0x0E70 */ Client_System_String_Utf8String YesNoTargetName;
    /*        */ byte _gap_0xED8[0x8];
    /* 0x0EE0 */ unsigned __int64 TargetContentId;
    /* 0x0EE8 */ unsigned __int64 YesNoTargetContentId;
    /* 0x0EF0 */ Client_Game_Object_GameObjectID TargetObjectId;
    /* 0x0EF8 */ Client_Game_Object_GameObjectID YesNoTargetObjectId;
    /* 0x0F00 */ __int16 TargetHomeWorldId;
    /* 0x0F02 */ __int16 YesNoTargetHomeWorldId;
    /* 0x0F04 */ byte YesNoEventId;
    /*        */ byte _gap_0xF05;
    /*        */ byte _gap_0xF06[0x2];
    /* 0x0F08 */ __int32 TargetGender;
    /* 0x0F0C */ unsigned __int32 TargetMountSeats;
    /*        */ byte _gap_0xF10[0x820];
    /* 0x1730 */ void* UpdateChecker;
    /* 0x1738 */ __int64 UpdateCheckerParam;
    /* 0x1740 */ byte ContextMenuIndex;
    /* 0x1741 */ byte OpenAtPosition;
    /*        */ byte _gap_0x1742[0x2];
    /*        */ byte _gap_0x1744[0x4];
};

struct Client_UI_Agent_ProgressEfficiencyCalculations /* Size=0x108 */
{
    /* 0x000 */ byte Actions[0xD8];
    /*       */ byte _gap_0xD8[0x30];
};

struct Client_UI_Agent_QualityEfficiencyCalculations /* Size=0x138 */
{
    /* 0x000 */ byte Actions[0x138];
};

struct Client_UI_Agent_AgentCraftActionSimulator /* Size=0x90 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /* 0x28 */ Client_UI_Agent_ProgressEfficiencyCalculations* Progress;
    /*      */ byte _gap_0x30[0x10];
    /* 0x40 */ Client_UI_Agent_QualityEfficiencyCalculations* Quality;
    /*      */ byte _gap_0x48[0x48];
};

enum Client_UI_Agent_ActionStatus0x1 /* Size=0x1 */
{
    Available = 0,
    NotYetAvailable = 1,
    NotCurrentlyAvailable = 3
};

struct Client_UI_Agent_EfficiencyCalculation /* Size=0x18 */
{
    /* 0x00 */ unsigned __int32 ActionId;
    /* 0x04 */ unsigned __int32 ProgressEfficiency;
    /* 0x08 */ unsigned __int32 ProgressIncrease;
    /* 0x0C */ unsigned __int32 QualityEfficiencyPercentage;
    /* 0x10 */ unsigned __int32 QualityIncrease;
    /*      */ byte _gap_0x14[0x2];
    /* 0x16 */ Client_UI_Agent_ActionStatus0x1 Status;
    /*      */ byte _gap_0x17;
};

struct Client_UI_Agent_ProgressEfficiencyCalculation /* Size=0x18 */
{
    /* 0x00 */ unsigned __int32 ActionId;
    /* 0x04 */ unsigned __int32 ProgressEfficiency;
    /* 0x08 */ unsigned __int32 ProgressIncrease;
    /*      */ byte _gap_0xC[0x4];
    /*      */ byte _gap_0x10[0x4];
    /*      */ byte _gap_0x14[0x2];
    /* 0x16 */ Client_UI_Agent_ActionStatus0x1 Status;
    /*      */ byte _gap_0x17;
};

struct Client_UI_Agent_QualityEfficiencyCalculation /* Size=0x18 */
{
    /* 0x00 */ unsigned __int32 ActionId;
    /*      */ byte _gap_0x4[0x4];
    /*      */ byte _gap_0x8[0x4];
    /* 0x0C */ unsigned __int32 QualityEfficiencyPercentage;
    /* 0x10 */ unsigned __int32 QualityIncrease;
    /*      */ byte _gap_0x14[0x2];
    /* 0x16 */ Client_UI_Agent_ActionStatus0x1 Status;
    /*      */ byte _gap_0x17;
};

struct Client_UI_Agent_AgentDeepDungeonInspect_AgentDeepDungeonInspectData /* Size=0x160 */
{
    /* 0x000 */ unsigned __int32 RequestObjectID;
    /* 0x004 */ unsigned __int32 CurrentObjectID;
    /* 0x008 */ unsigned __int32 StatusSearchComment;
    /* 0x00C */ unsigned __int32 Unk0C;
    /* 0x010 */ Client_System_String_Utf8String SearchComment;
    /* 0x078 */ Client_UI_Info_InfoProxySearchComment* InfoProxySearchComment;
    /* 0x080 */ byte Title;
    /* 0x081 */ byte Unk81;
    /* 0x082 */ byte WorldID;
    /* 0x083 */ byte Unk83;
    /* 0x084 */ byte Unk84;
    /* 0x085 */ byte Job;
    /* 0x086 */ byte Level;
    /* 0x087 */ byte AetherPoolArmLvl;
    /* 0x088 */ byte AetherPoolArmorLvl;
    /*       */ byte _gap_0x89;
    /*       */ byte _gap_0x8A[0x2];
    /*       */ byte _gap_0x8C[0x4];
    /* 0x090 */ Client_System_String_Utf8String Name;
    /* 0x0F8 */ Client_System_String_Utf8String UnkF8;
};

struct Client_UI_Agent_AgentDeepDungeonInspect /* Size=0x30 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /* 0x28 */ Client_UI_Agent_AgentDeepDungeonInspect_AgentDeepDungeonInspectData* Data;
};

struct Client_UI_Agent_AgentDeepDungeonMapData /* Size=0x36 */
{
    /* 0x00 */ signed __int8 MapArray[0x19];
    /* 0x19 */ signed __int8 RoomIndexArray[0x19];
    /* 0x32 */ byte RoomIndexCount;
    /* 0x33 */ byte DeepDungeonId;
    /* 0x34 */ byte Unk_34;
    /* 0x35 */ bool MapLocked;
};

struct Client_UI_Agent_AgentDeepDungeonMap /* Size=0x30 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /* 0x28 */ Client_UI_Agent_AgentDeepDungeonMapData* Data;
};

struct Client_UI_Agent_DeepDungeonStatusData /* Size=0x8D8 */
{
    /* 0x000 */ unsigned __int32 Level;
    /* 0x004 */ unsigned __int32 MaxLevel;
    /* 0x008 */ unsigned __int32 ClassJobId;
    /*       */ byte _gap_0xC[0x4];
    /*       */ byte _gap_0x10[0x8];
    /* 0x018 */ byte Pomander[0x700];
    /* 0x718 */ byte Magicite[0x1C0];
};

struct Client_UI_Agent_AgentDeepDungeonStatus /* Size=0x30 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /* 0x28 */ Client_UI_Agent_DeepDungeonStatusData* Data;
};

struct Client_UI_Agent_DeepDungeonStatusItem /* Size=0x70 */
{
    /* 0x00 */ unsigned __int32 ItemId;
    /* 0x04 */ unsigned __int32 Icon;
    /* 0x08 */ Client_System_String_Utf8String Name;
};

struct Client_UI_Agent_ExplorationResultData /* Size=0x3CB0 */
{
    /* 0x0000 */ byte ValueArray[0x970];
    /*        */ byte _gap_0x970[0x18];
    /* 0x0988 */ Client_System_String_Utf8String Rating;
    /*        */ byte _gap_0x9F0[0x10];
    /* 0x0A00 */ byte ItemReturn[0x6E0];
    /* 0x10E0 */ byte ItemReturnListCount;
    /*        */ byte _gap_0x10E1;
    /*        */ byte _gap_0x10E2[0x2];
    /*        */ byte _gap_0x10E4[0x4];
    /* 0x10E8 */ byte StringArray[0x28A0];
    /* 0x3988 */ byte StringPointerArray[0x320];
    /* 0x3CA8 */ byte StringPointerListCount;
    /*        */ byte _gap_0x3CA9;
    /*        */ byte _gap_0x3CAA[0x2];
    /*        */ byte _gap_0x3CAC[0x4];
};

struct Client_UI_Agent_AgentExplorationResultInterface /* Size=0x38 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /* 0x28 */ unsigned __int32 ItemId;
    /*      */ byte _gap_0x2C[0x4];
    /* 0x30 */ Client_UI_Agent_ExplorationResultData* Data;
};

struct Client_UI_Agent_AgentAirshipExplorationResult /* Size=0x38 */
{
    /* 0x00 */ Client_UI_Agent_AgentExplorationResultInterface Interface;
};

struct Client_UI_Agent_AgentSubmersibleExplorationResult /* Size=0x38 */
{
    /* 0x00 */ Client_UI_Agent_AgentExplorationResultInterface Interface;
};

struct Client_UI_Agent_ExplorationResultDataItemReturn /* Size=0xB0 */
{
    /* 0x00 */ unsigned __int32 ItemId;
    /* 0x04 */ unsigned __int32 Quantity;
    /* 0x08 */ byte UnknownBytes[0xA8];
};

enum Client_UI_Agent_WaymarkIndex0x4 /* Size=0x4 */
{
    A = 0,
    B = 1,
    C = 2,
    D = 3,
    One = 4,
    Two = 5,
    Three = 6,
    Four = 7
};

struct Client_UI_Agent_AgentFishGuide /* Size=0x1A8 */
{
    /* 0x000 */ Component_GUI_AgentInterface AgentInterface;
    /*       */ byte _gap_0x28[0x180];
};

struct Client_UI_Agent_AgentFreeCompany_FreeCompanyActionTimer /* Size=0x10 */
{
    /* 0x00 */ unsigned __int32 TimeSinceUpdate;
    /* 0x04 */ unsigned __int32 TimeRemainingAtUpdate[0x3];
};

struct Client_UI_Agent_AgentFreeCompany /* Size=0xAD8 */
{
    /* 0x000 */ Component_GUI_AgentInterface AgentInterface;
    /* 0x028 */ void* vtbl2;
    /* 0x030 */ void* vtbl3;
    /*       */ byte _gap_0x38[0x8];
    /* 0x040 */ Client_UI_Misc_RaptureTextModule* RaptureTextModule;
    /* 0x048 */ void* InfoProxy0;
    /* 0x050 */ void* InfoProxy1;
    /*       */ byte _gap_0x58[0x2D0];
    /* 0x328 */ Client_System_String_Utf8String Board;
    /*       */ byte _gap_0x390[0x70];
    /* 0x400 */ Client_System_String_Utf8String Slogan;
    /*       */ byte _gap_0x468[0x70];
    /* 0x4D8 */ Client_System_String_Utf8String ShortMessage;
    /*       */ byte _gap_0x540[0x550];
    /* 0xA90 */ Client_UI_Agent_AgentFreeCompany_FreeCompanyActionTimer ActionTimeRemaining;
    /*       */ byte _gap_0xAA0[0x38];
};

struct Client_UI_Agent_AgentFreeCompanyCrestEditor /* Size=0x70 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /*      */ byte _gap_0x28[0x38];
    /* 0x60 */ Client_UI_Agent_CrestData OriginalCrest;
    /* 0x68 */ Client_UI_Agent_CrestData CurrentCrest;
};

enum Client_UI_Agent_AgentFreeCompanyProfile_FCProfile_FocusType0x2 /* Size=0x2 */
{
    None = 0,
    RolePlaying = 1,
    Leveling = 2,
    Casual = 4,
    Hardcore = 8,
    GuildHeist = 16,
    Trials = 32,
    Dungeons = 64,
    Raids = 128,
    PvP = 256
};

enum Client_UI_Agent_AgentFreeCompanyProfile_FCProfile_SeekingType0x2 /* Size=0x2 */
{
    None = 0,
    Tank = 1,
    HEaler = 2,
    DPS = 4,
    Crafter = 8,
    Gatherer = 16
};

enum Client_UI_Agent_AgentFreeCompanyProfile_FCProfile_ActiveType0x1 /* Size=0x1 */
{
    Always = 0,
    Weekdays = 1,
    Weekends = 2
};

enum Client_UI_Agent_AgentFreeCompanyProfile_FCProfile_RecruitmentType0x1 /* Size=0x1 */
{
    None = 0,
    Full = 1,
    Provisional = 2
};

struct Client_UI_Agent_AgentFreeCompanyProfile_FCProfile /* Size=0x7 */
{
    /* 0x0 */ Client_UI_Agent_AgentFreeCompanyProfile_FCProfile_FocusType0x2 Focus;
    /* 0x2 */ Client_UI_Agent_AgentFreeCompanyProfile_FCProfile_SeekingType0x2 Seeking;
    /* 0x4 */ Client_UI_Agent_AgentFreeCompanyProfile_FCProfile_ActiveType0x1 Active;
    /*     */ byte _gap_0x5;
    /* 0x6 */ Client_UI_Agent_AgentFreeCompanyProfile_FCProfile_RecruitmentType0x1 Recruitment;
};

struct Client_UI_Agent_AgentGatheringNote /* Size=0x178 */
{
    /* 0x000 */ Component_GUI_AgentInterface AgentInterface;
    /*       */ byte _gap_0x28[0x150];
};

struct Client_UI_Agent_GcArmyExpeditionData /* Size=0x1998 */
{
    /*        */ byte _gap_0x0[0x10];
    /* 0x0010 */ __int32 NumEntries;
    /*        */ byte _gap_0x14[0x4];
    /* 0x0018 */ byte MissionInfoArray[0x1770];
    /*        */ byte _gap_0x1788[0x210];
};

struct Client_UI_Agent_AgentGcArmyExpedition /* Size=0x48 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /* 0x28 */ Client_UI_Agent_GcArmyExpeditionData* ExpeditionData;
    /*      */ byte _gap_0x30[0x10];
    /* 0x40 */ __int32 SelectedTab;
    /* 0x44 */ __int32 SelectedRow;
};

struct Client_UI_Agent_MissionInfo /* Size=0x78 */
{
    /* 0x00 */ Client_System_String_Utf8String Name;
    /* 0x68 */ byte Available;
    /*      */ byte _gap_0x69;
    /*      */ byte _gap_0x6A[0x2];
    /*      */ byte _gap_0x6C[0x4];
    /* 0x70 */ byte Level;
    /*      */ byte _gap_0x71;
    /*      */ byte _gap_0x72[0x2];
    /*      */ byte _gap_0x74[0x4];
};

struct Client_UI_Agent_SupplyProvisioningData /* Size=0x790 */
{
    /*       */ byte _gap_0x0[0x40];
    /* 0x040 */ byte SupplyData[0x540];
    /* 0x580 */ byte ProvisioningData[0x1F8];
    /*       */ byte _gap_0x778[0x18];
};

struct Client_UI_Agent_GrandCompanyItem /* Size=0xA0 */
{
    /* 0x00 */ Client_System_String_Utf8String ItemName;
    /*      */ byte _gap_0x68[0x8];
    /* 0x70 */ __int32 IconID;
    /* 0x74 */ __int32 ExpReward;
    /* 0x78 */ __int32 SealReward;
    /*      */ byte _gap_0x7C[0x4];
    /* 0x80 */ __int32 NumPossessed;
    /*      */ byte _gap_0x84[0x4];
    /*      */ byte _gap_0x88[0x8];
    /* 0x90 */ __int32 NumRequested;
    /*      */ byte _gap_0x94[0x4];
    /*      */ byte _gap_0x98[0x2];
    /* 0x9A */ byte TurnInAvailable;
    /* 0x9B */ byte Bonus;
    /*      */ byte _gap_0x9C[0x4];
};

struct Client_UI_Agent_AgentGrandCompanySupply /* Size=0x98 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /*      */ byte _gap_0x28[0x38];
    /* 0x60 */ Client_UI_Agent_SupplyProvisioningData* SupplyProvisioningData;
    /* 0x68 */ Client_UI_Agent_GrandCompanyItem* ItemArray;
    /*      */ byte _gap_0x70[0x8];
    /* 0x78 */ __int32 NumItems;
    /*      */ byte _gap_0x7C[0x4];
    /*      */ byte _gap_0x80[0x10];
    /* 0x90 */ __int32 SelectedTab;
    /*      */ byte _gap_0x94[0x4];
};

struct Client_UI_Agent_SupplyProvisioningItem /* Size=0xA8 */
{
    /* 0x00 */ __int32 ItemId;
    /* 0x04 */ __int32 ExpReward;
    /* 0x08 */ __int32 SealReward;
    /*      */ byte _gap_0xC[0x4];
    /*      */ byte _gap_0x10[0x8];
    /*      */ byte _gap_0x18[0x2];
    /* 0x1A */ byte NumRequested;
    /*      */ byte _gap_0x1B;
    /*      */ byte _gap_0x1C[0x4];
    /*      */ byte _gap_0x20[0x8];
    /* 0x28 */ Client_System_String_Utf8String ItemName;
    /* 0x90 */ __int32 ItemCategoryIconId;
    /*      */ byte _gap_0x94[0x4];
    /*      */ byte _gap_0x98[0x10];
};

struct Client_UI_Agent_HudPartyMemberEnmity /* Size=0xC */
{
    /* 0x0 */ unsigned __int32 ObjectId;
    /* 0x4 */ __int32 Enmity;
    /* 0x8 */ __int32 Index;
};

struct Client_UI_Agent_AgentHUD /* Size=0x4BA0 */
{
    /* 0x0000 */ Component_GUI_AgentInterface AgentInterface;
    /*        */ byte _gap_0x28[0xC90];
    /* 0x0CB8 */ __int32 CompanionSummonTimer;
    /*        */ byte _gap_0xCBC[0x4];
    /*        */ byte _gap_0xCC0[0x8];
    /* 0x0CC8 */ byte PartyMemberList[0x140];
    /*        */ byte _gap_0xE08[0x4B0];
    /* 0x12B8 */ __int16 PartyMemberCount;
    /*        */ byte _gap_0x12BA[0x2];
    /*        */ byte _gap_0x12BC[0x4];
    /* 0x12C0 */ unsigned __int32 PartyTitleAddonId;
    /* 0x12C4 */ unsigned __int32 RaidMemberIds[0x28];
    /* 0x1364 */ __int32 RaidGroupSize;
    /*        */ byte _gap_0x1368[0x88];
    /* 0x13F0 */ Client_UI_Agent_HudPartyMemberEnmity* PartyEnmityList;
    /*        */ byte _gap_0x13F8[0x37A8];
};

struct Client_Game_Character_Character_CharacterVTable /* Size=0x2B8 */
{
    /*       */ byte _gap_0x0[0x270];
    /* 0x270 */ __int64 GetStatusManager;
    /*       */ byte _gap_0x278[0x8];
    /* 0x280 */ __int64 GetCastInfo;
    /*       */ byte _gap_0x288[0x18];
    /* 0x2A0 */ __int64 GetForayInfo;
    /*       */ byte _gap_0x2A8[0x8];
    /* 0x2B0 */ __int64 IsMount;
};

struct Client_Game_Character_Character_MountContainer /* Size=0x60 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ Client_Game_Character_BattleChara* OwnerObject;
    /* 0x10 */ Client_Game_Character_Character* MountObject;
    /* 0x18 */ unsigned __int16 MountId;
    /*      */ byte _gap_0x1A[0x2];
    /* 0x1C */ float DismountTimer;
    /* 0x20 */ byte Flags;
    /*      */ byte _gap_0x21;
    /*      */ byte _gap_0x22[0x2];
    /* 0x24 */ unsigned __int32 MountedObjectIds[0x7];
    /*      */ byte _gap_0x40[0x20];
};

struct Client_Game_Character_Companion /* Size=0x1BE0 */
{
    /* 0x0000 */ Client_Game_Character_Character Character;
    /*        */ byte _gap_0x1B20[0xC0];
};

struct Client_Game_Character_Character_CompanionContainer /* Size=0x20 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ Client_Game_Character_BattleChara* OwnerObject;
    /* 0x10 */ Client_Game_Character_Companion* CompanionObject;
    /* 0x18 */ unsigned __int16 CompanionId;
    /*      */ byte _gap_0x1A[0x2];
    /*      */ byte _gap_0x1C[0x4];
};

struct Client_Game_Character_DrawObjectData /* Size=0x44 */
{
    /*      */ byte _gap_0x0[0x40];
    /*      */ byte _gap_0x40[0x4];
};

struct Client_Game_Character_CustomizeData /* Size=0x1A */
{
    /* 0x00 */ byte Data[0x1A];
};

struct Client_Game_Character_DrawDataContainer /* Size=0x190 */
{
    /* 0x000 */ void** Vtable;
    /* 0x008 */ void* Unk8;
    /* 0x010 */ Client_Game_Character_WeaponModelId MainHandModel;
    /*       */ byte _gap_0x18[0x8];
    /* 0x020 */ Client_Game_Character_DrawObjectData MainHand;
    /*       */ byte _gap_0x64[0x4];
    /*       */ byte _gap_0x68[0x8];
    /*       */ byte _gap_0x70[0x2];
    /* 0x072 */ unsigned __int16 MainHandFlags1;
    /* 0x074 */ byte MainHandFlags2;
    /*       */ byte _gap_0x75;
    /*       */ byte _gap_0x76[0x2];
    /* 0x078 */ Client_Game_Character_WeaponModelId OffHandModel;
    /*       */ byte _gap_0x80[0x8];
    /* 0x088 */ Client_Game_Character_DrawObjectData OffHand;
    /*       */ byte _gap_0xCC[0x4];
    /*       */ byte _gap_0xD0[0x8];
    /*       */ byte _gap_0xD8[0x2];
    /* 0x0DA */ unsigned __int16 OffHandFlags1;
    /* 0x0DC */ byte OffHandFlags2;
    /*       */ byte _gap_0xDD;
    /*       */ byte _gap_0xDE[0x2];
    /* 0x0E0 */ Client_Game_Character_WeaponModelId UnkE0Model;
    /*       */ byte _gap_0xE8[0x8];
    /* 0x0F0 */ Client_Game_Character_DrawObjectData UnkF0;
    /*       */ byte _gap_0x134[0x4];
    /*       */ byte _gap_0x138[0x8];
    /*       */ byte _gap_0x140[0x2];
    /* 0x142 */ unsigned __int16 Unk144Flags1;
    /* 0x144 */ byte Unk144Flags2;
    /*       */ byte _gap_0x145;
    /*       */ byte _gap_0x146[0x2];
    /* 0x148 */ Client_Game_Character_EquipmentModelId Head;
    /* 0x14C */ Client_Game_Character_EquipmentModelId Top;
    /* 0x150 */ Client_Game_Character_EquipmentModelId Arms;
    /* 0x154 */ Client_Game_Character_EquipmentModelId Legs;
    /* 0x158 */ Client_Game_Character_EquipmentModelId Feet;
    /* 0x15C */ Client_Game_Character_EquipmentModelId Ear;
    /* 0x160 */ Client_Game_Character_EquipmentModelId Neck;
    /* 0x164 */ Client_Game_Character_EquipmentModelId Wrist;
    /* 0x168 */ Client_Game_Character_EquipmentModelId RFinger;
    /* 0x16C */ Client_Game_Character_EquipmentModelId LFinger;
    /* 0x170 */ Client_Game_Character_CustomizeData CustomizeData;
    /* 0x18A */ unsigned __int32 Unk18A;
    /* 0x18E */ byte Flags1;
    /* 0x18F */ byte Flags2;
};

struct Client_Game_Character_Ornament /* Size=0x1B40 */
{
    /* 0x0000 */ Client_Game_Character_Character Character;
    /* 0x1B20 */ unsigned __int32 OrnamentId;
    /* 0x1B24 */ byte AttachmentPoint;
    /*        */ byte _gap_0x1B25;
    /*        */ byte _gap_0x1B26[0x2];
    /*        */ byte _gap_0x1B28[0x18];
};

struct Client_Game_Character_Character_OrnamentContainer /* Size=0x28 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ Client_Game_Character_BattleChara* OwnerObject;
    /* 0x10 */ Client_Game_Character_Ornament* OrnamentObject;
    /* 0x18 */ unsigned __int16 OrnamentId;
    /*      */ byte _gap_0x1A[0x2];
    /*      */ byte _gap_0x1C[0x4];
    /*      */ byte _gap_0x20[0x8];
};

struct Client_Game_ActionTimelineDriver /* Size=0x1F0 */
{
    /*       */ byte _gap_0x0[0xE0];
    /* 0x0E0 */ unsigned __int16 TimelineIds[0xD];
    /*       */ byte _gap_0xFA[0x2];
    /*       */ byte _gap_0xFC[0x4];
    /*       */ byte _gap_0x100[0x50];
    /*       */ byte _gap_0x150[0x4];
    /* 0x154 */ float TimelineSpeeds[0xD];
    /*       */ byte _gap_0x188[0x68];
};

struct Client_Game_ActionTimelineManager /* Size=0x340 */
{
    /*       */ byte _gap_0x0[0x10];
    /* 0x010 */ Client_Game_ActionTimelineDriver Driver;
    /*       */ byte _gap_0x200[0xC0];
    /* 0x2C0 */ float OverallSpeed;
    /*       */ byte _gap_0x2C4[0x4];
    /*       */ byte _gap_0x2C8[0x10];
    /*       */ byte _gap_0x2D8[0x4];
    /* 0x2DC */ unsigned __int16 BaseOverride;
    /* 0x2DE */ unsigned __int16 LipsOverride;
    /*       */ byte _gap_0x2E0[0x60];
};

enum Client_Game_BalloonType0x4 /* Size=0x4 */
{
    Timer = 0,
    Unknown = 1
};

enum Client_Game_BalloonState0x4 /* Size=0x4 */
{
    Waiting = 0,
    Active = 1,
    Closing = 2,
    Inactive = 3
};

struct Client_Game_Balloon /* Size=0x80 */
{
    /* 0x00 */ unsigned __int16 DefaultBalloonId;
    /* 0x02 */ unsigned __int16 NowPlayingBalloonId;
    /* 0x04 */ float PlayTimer;
    /* 0x08 */ Client_Game_BalloonType0x4 Type;
    /* 0x0C */ Client_Game_BalloonState0x4 State;
    /* 0x10 */ Client_System_String_Utf8String Text;
    /* 0x78 */ byte UnkBool;
    /*      */ byte _gap_0x79;
    /*      */ byte _gap_0x7A[0x2];
    /*      */ byte _gap_0x7C[0x4];
};

struct Client_Graphics_Vfx_VfxData /* Size=0x1D0 */
{
    /*       */ byte _gap_0x0[0x1D0];
};

enum Client_Game_Character_Character_CharacterModes0x1 /* Size=0x1 */
{
    None = 0,
    Normal = 1,
    EmoteLoop = 3,
    Mounted = 4,
    AnimLock = 8,
    Carrying = 9,
    InPositionLoop = 11,
    Performance = 16
};

struct Client_Game_Character_Character /* Size=0x1B20 */
{
    union {
    /* 0x0000 */ Client_Game_Object_GameObject GameObject;
    /* 0x0000 */ Client_Game_Character_Character_CharacterVTable* VTable;
    } _union_0x0;
    /*        */ byte _gap_0x8[0x1A8];
    /* 0x01B0 */ float ModelScale;
    /* 0x01B4 */ __int32 ModelCharaId;
    /* 0x01B8 */ __int32 ModelSkeletonId;
    /* 0x01BC */ __int32 ModelCharaId_2;
    /* 0x01C0 */ __int32 ModelSkeletonId_2;
    /* 0x01C4 */ unsigned __int32 Health;
    /* 0x01C8 */ unsigned __int32 MaxHealth;
    /* 0x01CC */ unsigned __int32 Mana;
    /* 0x01D0 */ unsigned __int32 MaxMana;
    /* 0x01D4 */ unsigned __int16 GatheringPoints;
    /* 0x01D6 */ unsigned __int16 MaxGatheringPoints;
    /* 0x01D8 */ unsigned __int16 CraftingPoints;
    /* 0x01DA */ unsigned __int16 MaxCraftingPoints;
    /* 0x01DC */ __int16 TransformationId;
    /* 0x01DE */ __int16 StatusEffectVFXId;
    /* 0x01E0 */ byte ClassJob;
    /* 0x01E1 */ byte Level;
    /*        */ byte _gap_0x1E2[0x2];
    /*        */ byte _gap_0x1E4[0x4];
    /*        */ byte _gap_0x1E8[0x468];
    /* 0x0650 */ Client_Game_Character_Character_MountContainer Mount;
    /* 0x06B0 */ Client_Game_Character_Character_CompanionContainer Companion;
    /* 0x06D0 */ Client_Game_Character_DrawDataContainer DrawData;
    /* 0x0860 */ Client_Game_Character_Character_OrnamentContainer Ornament;
    /*        */ byte _gap_0x888[0x68];
    /* 0x08F0 */ Client_Game_ActionTimelineManager ActionTimelineManager;
    /*        */ byte _gap_0xC30[0x50];
    /* 0x0C80 */ unsigned __int32 PlayerTargetObjectID;
    /*        */ byte _gap_0xC84[0x4];
    /*        */ byte _gap_0xC88[0xB08];
    /* 0x1790 */ Client_Game_Balloon Balloon;
    /*        */ byte _gap_0x1810[0x188];
    /* 0x1998 */ Client_Graphics_Vfx_VfxData* VfxData;
    /* 0x19A0 */ Client_Graphics_Vfx_VfxData* VfxData2;
    /*        */ byte _gap_0x19A8[0x20];
    /* 0x19C8 */ Client_Graphics_Vfx_VfxData* Omen;
    /*        */ byte _gap_0x19D0[0x80];
    /* 0x1A50 */ Client_Game_Character_Companion* CompanionObject;
    /*        */ byte _gap_0x1A58[0x10];
    /* 0x1A68 */ byte FreeCompanyTag[0x6];
    /*        */ byte _gap_0x1A6E[0x2];
    /*        */ byte _gap_0x1A70[0x18];
    /* 0x1A88 */ unsigned __int64 TargetObjectID;
    /*        */ byte _gap_0x1A90[0x48];
    /* 0x1AD8 */ unsigned __int32 NameID;
    /*        */ byte _gap_0x1ADC[0x4];
    /*        */ byte _gap_0x1AE0[0x8];
    /* 0x1AE8 */ unsigned __int32 CompanionOwnerID;
    /*        */ byte _gap_0x1AEC[0x4];
    /*        */ byte _gap_0x1AF0[0x4];
    /* 0x1AF4 */ unsigned __int16 CurrentWorld;
    /* 0x1AF6 */ unsigned __int16 HomeWorld;
    union {
    /* 0x1AF8 */ byte EventState;
    /* 0x1AF8 */ Client_Game_Character_Character_CharacterModes0x1 Mode;
    } _union_0x1B00;
    /*        */ byte _gap_0x1B00;
    /* 0x1B01 */ byte ModeParam;
    /* 0x1B02 */ byte OnlineStatus;
    /* 0x1B03 */ byte Battalion;
    /*        */ byte _gap_0x1B04[0x4];
    /*        */ byte _gap_0x1B08[0x8];
    /*        */ byte _gap_0x1B10[0x4];
    /*        */ byte _gap_0x1B14[0x2];
    /*        */ byte _gap_0x1B16;
    /* 0x1B17 */ byte ShieldValue;
    /*        */ byte _gap_0x1B18[0x2];
    /*        */ byte _gap_0x1B1A;
    /* 0x1B1B */ byte StatusFlags;
    /*        */ byte _gap_0x1B1C[0x2];
    /*        */ byte _gap_0x1B1E;
    /* 0x1B1F */ byte StatusFlags4;
};

struct Client_Game_StatusManager /* Size=0x188 */
{
    /* 0x000 */ Client_Game_Character_Character* Owner;
    /* 0x008 */ byte Status[0x168];
    /* 0x170 */ unsigned __int32 Unk_170;
    /* 0x174 */ unsigned __int16 Unk_174;
    /*       */ byte _gap_0x176[0x2];
    /* 0x178 */ __int64 Unk_178;
    /* 0x180 */ byte Unk_180;
    /*       */ byte _gap_0x181;
    /*       */ byte _gap_0x182[0x2];
    /*       */ byte _gap_0x184[0x4];
};

enum Client_Game_ActionType0x1 /* Size=0x1 */
{
    None = 0,
    Spell = 1,
    Item = 2,
    KeyItem = 3,
    Ability = 4,
    General = 5,
    Companion = 6,
    Unk_7 = 7,
    Unk_8 = 8,
    CraftAction = 9,
    MainCommand = 10,
    PetAction = 11,
    Unk_12 = 12,
    Mount = 13,
    PvPAction = 14,
    Waymark = 15,
    ChocoboRaceAbility = 16,
    ChocoboRaceItem = 17,
    Unk_18 = 18,
    SquadronAction = 19,
    Accessory = 20
};

struct Client_Game_Character_Character_CastInfo /* Size=0x170 */
{
    /* 0x000 */ byte IsCasting;
    /* 0x001 */ byte Interruptible;
    /* 0x002 */ Client_Game_ActionType0x1 ActionType;
    /*       */ byte _gap_0x3;
    /* 0x004 */ unsigned __int32 ActionID;
    /* 0x008 */ unsigned __int32 Unk_08;
    /*       */ byte _gap_0xC[0x4];
    /* 0x010 */ unsigned __int32 CastTargetID;
    /*       */ byte _gap_0x14[0x4];
    /*       */ byte _gap_0x18[0x8];
    /* 0x020 */ Common_Math_Vector3 CastLocation;
    /* 0x030 */ unsigned __int32 Unk_30;
    /* 0x034 */ float CurrentCastTime;
    /* 0x038 */ float TotalCastTime;
    /* 0x03C */ float AdjustedTotalCastTime;
    /* 0x040 */ unsigned __int32 UsedActionId;
    /* 0x044 */ Client_Game_ActionType0x1 UsedActionType;
    /*       */ byte _gap_0x45;
    /*       */ byte _gap_0x46[0x2];
    /*       */ byte _gap_0x48[0x10];
    /* 0x058 */ __int64 ActionRecipientsObjectIdArray[0x20];
    /* 0x158 */ __int32 ActionRecipientsCount;
    /*       */ byte _gap_0x15C[0x4];
    /*       */ byte _gap_0x160[0x10];
};

enum Client_Game_Character_Character_EurekaElement0x1 /* Size=0x1 */
{
    None = 0,
    Fire = 1,
    Ice = 2,
    Wind = 3,
    Earth = 4,
    Lightning = 5,
    Water = 6
};

struct Client_Game_Character_Character_ForayInfo /* Size=0x2 */
{
    /* 0x0 */ byte ForayRank;
    /* 0x1 */ Client_Game_Character_Character_EurekaElement0x1 Element;
};

struct Client_Game_Character_BattleChara /* Size=0x2D70 */
{
    /* 0x0000 */ Client_Game_Character_Character Character;
    /*        */ byte _gap_0x1B20[0x40];
    /* 0x1B60 */ Client_Game_StatusManager StatusManager;
    /*        */ byte _gap_0x1CE8[0x8];
    /* 0x1CF0 */ Client_Game_Character_Character_CastInfo SpellCastInfo;
    /*        */ byte _gap_0x1E60[0xF00];
    /* 0x2D60 */ Client_Game_Character_Character_ForayInfo Foray;
    /*        */ byte _gap_0x2D62[0x2];
    /*        */ byte _gap_0x2D64[0x4];
    /*        */ byte _gap_0x2D68[0x8];
};

struct Client_UI_Agent_HudPartyMember /* Size=0x20 */
{
    /* 0x00 */ Client_Game_Character_BattleChara* Object;
    /* 0x08 */ byte* Name;
    /* 0x10 */ unsigned __int64 ContentId;
    /* 0x18 */ unsigned __int32 ObjectId;
    /*      */ byte _gap_0x1C[0x4];
};

struct Client_UI_Agent_AgentInspect_FreeCompanyData /* Size=0x86 */
{
    /* 0x00 */ byte Unkown4b0;
    /* 0x01 */ bool IsPArtOfFreeCOmpany;
    /*      */ byte _gap_0x2[0x2];
    /*      */ byte _gap_0x4[0x4];
    /* 0x08 */ __int64 ID;
    /* 0x10 */ Client_UI_Agent_CrestData Crest;
    /* 0x18 */ unsigned __int16 MemberCount;
    /* 0x1A */ unsigned __int16 GrandCompany;
    /* 0x1C */ unsigned __int16 Unk1C;
    /* 0x1E */ Client_System_String_Utf8String GuildName;
};

struct Client_UI_Agent_AgentInspect /* Size=0x558 */
{
    /* 0x000 */ Component_GUI_AgentInterface AgentInterface;
    /* 0x028 */ unsigned __int32 RequestObjectID;
    /* 0x02C */ unsigned __int32 RequestSearchCommentOID;
    /* 0x030 */ unsigned __int32 RequestFreeCompanyOID;
    /* 0x034 */ unsigned __int32 CurrentObjectID;
    /* 0x038 */ Client_System_String_Utf8String SearchComment;
    /* 0x0A0 */ Client_System_String_Utf8String UnkString1;
    /* 0x108 */ Client_System_String_Utf8String PsnName;
    /* 0x170 */ Client_System_String_Utf8String ChocoboBarding1;
    /* 0x1D8 */ Client_System_String_Utf8String ChocoboBarding2;
    /* 0x240 */ Client_System_String_Utf8String ChocoboBarding3;
    /* 0x2A8 */ byte Items[0x208];
    /* 0x4B0 */ Client_UI_Agent_AgentInspect_FreeCompanyData FreeCompany;
    /* 0x536 */ __int16 UnkObj536;
    /* 0x538 */ unsigned __int32 FetchCharacterDataStatus;
    /* 0x53C */ unsigned __int32 FetchSearchCommentStatus;
    /* 0x540 */ unsigned __int32 FetchFreeCompanyStatus;
    /* 0x544 */ unsigned __int32 UnkObj544;
    /* 0x548 */ Client_UI_Info_InfoProxySearchComment* InfoProxySearchComment;
    /* 0x550 */ Client_UI_Info_InfoProxyFreeCompany* InfoProxyFreeCompany;
};

struct Client_UI_Agent_AgentInventoryContext /* Size=0x678 */
{
    /* 0x000 */ Component_GUI_AgentInterface AgentInterface;
    /* 0x028 */ unsigned __int32 BlockingAddonId;
    /* 0x02C */ __int32 ContexItemStartIndex;
    /* 0x030 */ __int32 ContextItemCount;
    /*       */ byte _gap_0x34[0x4];
    /* 0x038 */ byte EventParams[0x520];
    /* 0x558 */ byte EventIdArray[0x50];
    /* 0x5A8 */ unsigned __int32 ContextItemDisabledMask;
    /* 0x5AC */ unsigned __int32 ContextItemSubmenuMask;
    /* 0x5B0 */ __int32 PositionX;
    /* 0x5B4 */ __int32 PositionY;
    /*       */ byte _gap_0x5B8[0x10];
    /* 0x5C8 */ unsigned __int32 OwnerAddonId;
    union {
    /* 0x5CC */ Client_Game_InventoryType0x4 TargetInventoryId;
    /* 0x5CC */ Client_Game_InventoryType0x4 BlockedInventoryId;
    } _union_0x5D0;
    union {
    /* 0x5D4 */ __int32 TargetInventorySlotId;
    /* 0x5D4 */ __int32 BlockedInventorySlotId;
    } _union_0x5D4;
    /* 0x5DC */ unsigned __int32 DummyInventoryId;
    /*       */ byte _gap_0x5E0[0x8];
    /* 0x5E8 */ Client_Game_InventoryItem* TargetInventorySlot;
    /* 0x5F0 */ Client_Game_InventoryItem TargetDummyItem;
    /*       */ byte _gap_0x628[0x10];
    /* 0x638 */ Client_Game_InventoryItem DiscardDummyItem;
    /*       */ byte _gap_0x670[0x8];
};

struct Client_UI_Agent_AgentItemSearch /* Size=0x37F0 */
{
    /* 0x0000 */ Component_GUI_AgentInterface AgentInterface;
    /*        */ byte _gap_0x28[0x32D8];
    /*        */ byte _gap_0x3300[0x4];
    /* 0x3304 */ unsigned __int32 ResultItemID;
    /*        */ byte _gap_0x3308[0x4];
    /* 0x330C */ unsigned __int32 ResultSelectedIndex;
    /*        */ byte _gap_0x3310[0x8];
    /*        */ byte _gap_0x3318[0x4];
    /* 0x331C */ unsigned __int32 ResultHoveredIndex;
    /*        */ byte _gap_0x3320[0x4];
    /* 0x3324 */ unsigned __int32 ResultHoveredCount;
    /*        */ byte _gap_0x3328[0x4];
    /* 0x332C */ byte ResultHoveredHQ;
    /*        */ byte _gap_0x332D;
    /*        */ byte _gap_0x332E[0x2];
    /*        */ byte _gap_0x3330[0x4C0];
};

struct Client_UI_Agent_AgentLobby /* Size=0x1C58 */
{
    /* 0x0000 */ Component_GUI_AgentInterface AgentInterface;
    /*        */ byte _gap_0x28[0xE98];
    /* 0x0EC0 */ unsigned __int64 SelectedCharacterId;
    /* 0x0EC8 */ byte DataCenter;
    /*        */ byte _gap_0xEC9;
    /*        */ byte _gap_0xECA[0x2];
    /* 0x0ECC */ unsigned __int16 WorldId;
    /*        */ byte _gap_0xECE[0x2];
    /*        */ byte _gap_0xED0[0xC8];
    /* 0x0F98 */ unsigned __int32 IdleTime;
    /*        */ byte _gap_0xF9C[0x4];
    /*        */ byte _gap_0xFA0[0xCB8];
};

struct Client_UI_Agent_AgentLoot /* Size=0x90 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /*      */ byte _gap_0x28[0x4];
    /* 0x2C */ byte HoveredSlotIndex;
    /*      */ byte _gap_0x2D;
    /*      */ byte _gap_0x2E[0x2];
    /* 0x30 */ unsigned __int32 HoveredItemId;
    /*      */ byte _gap_0x34[0x4];
    /*      */ byte _gap_0x38[0x38];
    /*      */ byte _gap_0x70[0x4];
    /* 0x74 */ __int32 SelectedSlotIndex;
    /*      */ byte _gap_0x78[0x4];
    /* 0x7C */ __int32 NumItems;
    /*      */ byte _gap_0x80[0x10];
};

struct StdPair_System_UInt32_System_UInt32 /* Size=0x8 */
{
    /* 0x0 */ unsigned __int32 Item1;
    /* 0x4 */ unsigned __int32 Item2;
};

struct StdMap_Node_System_UInt32_System_UInt32 /* Size=0x30 */
{
    /* 0x00 */ StdMap_Node_System_UInt32_System_UInt32* Left;
    /* 0x08 */ StdMap_Node_System_UInt32_System_UInt32* Parent;
    /* 0x10 */ StdMap_Node_System_UInt32_System_UInt32* Right;
    /* 0x18 */ byte Color;
    /*      */ byte _gap_0x19;
    /*      */ byte _gap_0x1A[0x2];
    /* 0x1C */ bool IsNil;
    /*      */ byte _gap_0x1D;
    /*      */ byte _gap_0x1E[0x2];
    /* 0x20 */ byte _18;
    /* 0x21 */ byte _19;
    /*      */ byte _gap_0x22[0x2];
    /* 0x24 */ StdPair_System_UInt32_System_UInt32 KeyValuePair;
    /*      */ byte _gap_0x2C[0x4];
};

struct StdMap_System_UInt32_System_UInt32 /* Size=0x10 */
{
    /* 0x00 */ StdMap_Node_System_UInt32_System_UInt32* Head;
    /* 0x08 */ unsigned __int64 Count;
};

struct Client_UI_Agent_MapMarkerBase /* Size=0x38 */
{
    /* 0x00 */ byte SubtextOrientation;
    /* 0x01 */ byte SubtextStyle;
    /* 0x02 */ unsigned __int16 IconFlags;
    /* 0x04 */ unsigned __int32 IconId;
    /* 0x08 */ unsigned __int32 SecondaryIconId;
    /* 0x0C */ __int32 Scale;
    /* 0x10 */ byte* Subtext;
    /* 0x18 */ byte Index;
    /*      */ byte _gap_0x19;
    /*      */ byte _gap_0x1A[0x2];
    /*      */ byte _gap_0x1C[0x4];
    /*      */ byte _gap_0x20[0x8];
    /*      */ byte _gap_0x28[0x4];
    /* 0x2C */ __int16 X;
    /* 0x2E */ __int16 Y;
    /*      */ byte _gap_0x30[0x8];
};

struct Client_UI_Agent_FlagMapMarker /* Size=0x48 */
{
    /* 0x00 */ Client_UI_Agent_MapMarkerBase MapMarker;
    /* 0x38 */ unsigned __int32 TerritoryId;
    /* 0x3C */ unsigned __int32 MapId;
    /* 0x40 */ float XFloat;
    /* 0x44 */ float YFloat;
};

struct Client_UI_Agent_AgentMap /* Size=0x68A8 */
{
    /* 0x0000 */ Component_GUI_AgentInterface AgentInterface;
    /*        */ byte _gap_0x28[0xF0];
    /* 0x0118 */ StdMap_System_UInt32_System_UInt32 SymbolMap;
    /*        */ byte _gap_0x128[0x30];
    /* 0x0158 */ Client_System_String_Utf8String CurrentMapPath;
    /* 0x01C0 */ Client_System_String_Utf8String SelectedMapPath;
    /* 0x0228 */ Client_System_String_Utf8String SelectedMapBgPath;
    /* 0x0290 */ Client_System_String_Utf8String CurrentMapBgPath;
    /* 0x02F8 */ byte MapSelectionStrings[0x1A0];
    /* 0x0498 */ Client_System_String_Utf8String MapTitleString;
    /*        */ byte _gap_0x500[0x138];
    /* 0x0638 */ byte MapMarkerInfoArray[0x2520];
    /* 0x2B58 */ byte TempMapMarkerArray[0xC60];
    /* 0x37B8 */ Client_UI_Agent_FlagMapMarker FlagMapMarker;
    /* 0x3800 */ byte WarpMarkerArray[0x2A0];
    /* 0x3AA0 */ byte UnkArray2[0x3F0];
    /* 0x3E90 */ byte MiniMapMarkerArray[0x1900];
    /*        */ byte _gap_0x5790[0xA8];
    /* 0x5838 */ float SelectedMapSizeFactorFloat;
    /* 0x583C */ float CurrentMapSizeFactorFloat;
    /* 0x5840 */ __int16 SelectedMapSizeFactor;
    /* 0x5842 */ __int16 CurrentMapSizeFactor;
    /* 0x5844 */ __int16 SelectedOffsetX;
    /* 0x5846 */ __int16 SelectedOffsetY;
    /* 0x5848 */ __int16 CurrentOffsetX;
    /* 0x584A */ __int16 CurrentOffsetY;
    /*        */ byte _gap_0x584C[0x4];
    /*        */ byte _gap_0x5850[0x90];
    /* 0x58E0 */ unsigned __int32 CurrentTerritoryId;
    /* 0x58E4 */ unsigned __int32 CurrentMapId;
    /*        */ byte _gap_0x58E8[0x4];
    /* 0x58EC */ unsigned __int32 CurrentMapMarkerRange;
    /* 0x58F0 */ unsigned __int32 CurrentMapDiscoveryFlag;
    /* 0x58F4 */ unsigned __int32 SelectedTerritoryId;
    /* 0x58F8 */ unsigned __int32 SelectedMapId;
    /* 0x58FC */ unsigned __int32 SelectedMapMarkerRange;
    /* 0x5900 */ unsigned __int32 SelectedMapDiscoveryFlag;
    /* 0x5904 */ unsigned __int32 SelectedMapSub;
    /*        */ byte _gap_0x5908[0x8];
    /*        */ byte _gap_0x5910[0x4];
    /* 0x5914 */ unsigned __int32 UpdateFlags;
    /*        */ byte _gap_0x5918[0x98];
    /*        */ byte _gap_0x59B0[0x2];
    /* 0x59B2 */ byte MapMarkerCount;
    /* 0x59B3 */ byte TempMapMarkerCount;
    /*        */ byte _gap_0x59B4;
    /* 0x59B5 */ byte IsFlagMarkerSet;
    /*        */ byte _gap_0x59B6;
    /* 0x59B7 */ byte MiniMapMarkerCount;
    /*        */ byte _gap_0x59B8[0x4];
    /*        */ byte _gap_0x59BC[0x2];
    /*        */ byte _gap_0x59BE;
    /* 0x59BF */ byte IsPlayerMoving;
    /*        */ byte _gap_0x59C0[0x4];
    /*        */ byte _gap_0x59C4[0x2];
    /*        */ byte _gap_0x59C6;
    /* 0x59C7 */ byte IsControlKeyPressed;
    /*        */ byte _gap_0x59C8[0xEE0];
};

struct Client_UI_Agent_MapMarkerInfo /* Size=0x48 */
{
    /* 0x00 */ Client_UI_Agent_MapMarkerBase MapMarker;
    /*      */ byte _gap_0x38[0x4];
    /* 0x3C */ unsigned __int16 DataType;
    /* 0x3E */ unsigned __int16 DataKey;
    /*      */ byte _gap_0x40[0x4];
    /* 0x44 */ byte MapMarkerSubKey;
    /*      */ byte _gap_0x45;
    /*      */ byte _gap_0x46[0x2];
};

struct Client_UI_Agent_TempMapMarker /* Size=0x108 */
{
    /* 0x000 */ Client_System_String_Utf8String TooltipText;
    /* 0x068 */ Client_UI_Agent_MapMarkerBase MapMarker;
    /*       */ byte _gap_0xA0[0x8];
    /* 0x0A8 */ unsigned __int32 StyleFlags;
    /* 0x0AC */ unsigned __int32 Type;
    /*       */ byte _gap_0xB0[0x58];
};

struct Client_UI_Agent_MiniMapMarker /* Size=0x40 */
{
    /* 0x00 */ unsigned __int16 DataType;
    /* 0x02 */ unsigned __int16 DataKey;
    /*      */ byte _gap_0x4[0x4];
    /* 0x08 */ Client_UI_Agent_MapMarkerBase MapMarker;
};

enum Client_UI_Agent_MapType0x4 /* Size=0x4 */
{
    SharedFate = 0,
    FlagMarker = 1,
    GatheringLog = 2,
    QuestLog = 3,
    Centered = 4,
    Treasure = 5,
    Teleport = 6,
    MobHunt = 7,
    AetherCurrent = 8,
    Bozja = 9
};

struct Client_UI_Agent_OpenMapInfo /* Size=0xB8 */
{
    /* 0x00 */ Client_UI_Agent_MapType0x4 Type;
    /*      */ byte _gap_0x4[0x4];
    /* 0x08 */ unsigned __int32 TerritoryId;
    /* 0x0C */ unsigned __int32 MapId;
    /*      */ byte _gap_0x10[0x10];
    /* 0x20 */ Client_System_String_Utf8String TitleString;
    /*      */ byte _gap_0x88[0x30];
};

struct Client_UI_Agent_PrismBoxItem /* Size=0x88 */
{
    /* 0x00 */ Client_System_String_Utf8String Name;
    /*      */ byte _gap_0x68[0x4];
    /* 0x6C */ unsigned __int32 ItemId;
    /* 0x70 */ unsigned __int32 IconId;
    /*      */ byte _gap_0x74[0x4];
    /*      */ byte _gap_0x78[0x4];
    /*      */ byte _gap_0x7C[0x2];
    /* 0x7E */ byte Stain;
    /*      */ byte _gap_0x7F;
    /*      */ byte _gap_0x80[0x8];
};

struct Client_UI_Agent_PrismBoxCrystallizeItem /* Size=0x1C */
{
    /* 0x00 */ Client_Game_InventoryType0x4 Inventory;
    /* 0x04 */ __int32 Slot;
    /* 0x08 */ unsigned __int32 ItemId;
    /*      */ byte _gap_0xC[0x4];
    /*      */ byte _gap_0x10[0x8];
    /*      */ byte _gap_0x18[0x4];
};

struct Client_UI_Agent_MiragePrismPrismBoxData /* Size=0x1BAE0 */
{
    /*         */ byte _gap_0x0[0x8];
    /* 0x00008 */ byte PrismBoxItems[0x1A900];
    /* 0x1A908 */ Client_UI_Agent_PrismBoxItem TempContextItem;
    /* 0x1A990 */ __int32 PageItemIndexArray[0x32];
    /* 0x1AA58 */ __int32 TempContextItemIndex;
    /* 0x1AA5C */ __int32 SelectedPageIndex;
    /* 0x1AA60 */ __int32 UsedSlots;
    /*         */ byte _gap_0x1AA64[0x4];
    /*         */ byte _gap_0x1AA68[0x8];
    /* 0x1AA70 */ __int32 CrystallizeCategory;
    /* 0x1AA74 */ __int32 CrystallizeItemIndex;
    /* 0x1AA78 */ __int32 CrystallizeItemCount;
    /* 0x1AA7C */ byte CrystallizeItems[0xF50];
    /* 0x1B9CC */ Client_UI_Agent_PrismBoxCrystallizeItem CrystallizeSelectedItem;
    /*         */ byte _gap_0x1B9E8[0x8];
    /*         */ byte _gap_0x1B9F0[0x4];
    /* 0x1B9F4 */ unsigned __int32 FilterFlags;
    /* 0x1B9F8 */ void* AgentCabinet;
    /* 0x1BA00 */ void* AgentMiragePrismMiragePlate;
    /* 0x1BA08 */ byte FilterLevel;
    /*         */ byte _gap_0x1BA09;
    /* 0x1BA0A */ byte FilterGender;
    /*         */ byte _gap_0x1BA0B;
    /*         */ byte _gap_0x1BA0C[0x4];
    /* 0x1BA10 */ Client_System_String_Utf8String FilterString;
    /* 0x1BA78 */ Client_System_String_Utf8String SearchString;
};

struct Client_UI_Agent_AgentMiragePrismPrismBox /* Size=0x80 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /* 0x28 */ Client_UI_Agent_MiragePrismPrismBoxData* Data;
    /*      */ byte _gap_0x30[0x8];
    /*      */ byte _gap_0x38;
    /* 0x39 */ byte TabIndex;
    /* 0x3A */ byte PageIndex;
    /*      */ byte _gap_0x3B;
    /*      */ byte _gap_0x3C[0x4];
    /*      */ byte _gap_0x40[0x8];
    /* 0x48 */ Client_Game_InventoryItem TempDyeItem;
};

struct Client_UI_Agent_AgentMJIPouch_PouchIndexInfo /* Size=0x8 */
{
    /* 0x0 */ __int32 CurrentIndex;
    /* 0x4 */ __int32 MaxIndex;
};

struct Client_UI_Agent_PouchInventoryItem /* Size=0x80 */
{
    /* 0x00 */ unsigned __int32 ItemId;
    /* 0x04 */ unsigned __int32 IconId;
    /* 0x08 */ __int32 SlotIndex;
    /* 0x0C */ __int32 StackSize;
    /* 0x10 */ __int32 MaxStackSize;
    /* 0x14 */ byte InventoryIndex;
    /* 0x15 */ byte ItemCategory;
    /* 0x16 */ byte Undiscovered;
    /*      */ byte _gap_0x17;
    /* 0x18 */ Client_System_String_Utf8String Name;
};

struct StdVector_Client_UI_Agent_PouchInventoryItem /* Size=0x18 */
{
    /* 0x00 */ Client_UI_Agent_PouchInventoryItem* First;
    /* 0x08 */ Client_UI_Agent_PouchInventoryItem* Last;
    /* 0x10 */ Client_UI_Agent_PouchInventoryItem* End;
};

struct Pointer_Client_UI_Agent_PouchInventoryItem /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct StdVector_Pointer_Client_UI_Agent_PouchInventoryItem /* Size=0x18 */
{
    /* 0x00 */ Pointer_Client_UI_Agent_PouchInventoryItem* First;
    /* 0x08 */ Pointer_Client_UI_Agent_PouchInventoryItem* Last;
    /* 0x10 */ Pointer_Client_UI_Agent_PouchInventoryItem* End;
};

struct StdVector_Client_System_String_Utf8String /* Size=0x18 */
{
    /* 0x00 */ Client_System_String_Utf8String* First;
    /* 0x08 */ Client_System_String_Utf8String* Last;
    /* 0x10 */ Client_System_String_Utf8String* End;
};

struct Client_UI_Agent_AgentMJIPouch_PouchInventoryData /* Size=0x1A0 */
{
    /*       */ byte _gap_0x0[0x78];
    /* 0x078 */ StdVector_Client_UI_Agent_PouchInventoryItem Inventory;
    /* 0x090 */ StdVector_Pointer_Client_UI_Agent_PouchInventoryItem Materials;
    /* 0x0A8 */ StdVector_Pointer_Client_UI_Agent_PouchInventoryItem Produce;
    /* 0x0C0 */ StdVector_Pointer_Client_UI_Agent_PouchInventoryItem StockStores;
    /* 0x0D8 */ StdVector_Pointer_Client_UI_Agent_PouchInventoryItem Tools;
    /* 0x0F0 */ StdVector_Client_System_String_Utf8String InventoryNames;
    /* 0x108 */ unsigned __int32 MJIItemPouchItemCount;
    /*       */ byte _gap_0x10C[0x4];
    /*       */ byte _gap_0x110[0x90];
};

struct Client_UI_Agent_AgentMJIPouch /* Size=0x38 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /* 0x28 */ Client_UI_Agent_AgentMJIPouch_PouchIndexInfo* InventoryIndex;
    /* 0x30 */ Client_UI_Agent_AgentMJIPouch_PouchInventoryData* InventoryData;
};

struct Client_UI_Agent_AgentModule /* Size=0xD78 */
{
    /* 0x000 */ void* vtbl;
    /* 0x008 */ Client_UI_UIModule* UIModule;
    /* 0x010 */ byte Initialized;
    /* 0x011 */ byte Unk_11;
    /*       */ byte _gap_0x12[0x2];
    /* 0x014 */ unsigned __int32 FrameCounter;
    /* 0x018 */ float FrameDelta;
    /*       */ byte _gap_0x1C[0x4];
    /* 0x020 */ byte Agents[0xD48];
    /* 0xD68 */ Client_UI_UIModule* UIModulePtr;
    /* 0xD70 */ Client_UI_Agent_AgentModule* AgentModulePtr;
};

enum Client_UI_Agent_AgentId0x4 /* Size=0x4 */
{
    Lobby = 0,
    CharaMake = 1,
    MovieStaffList = 2,
    Cursor = 3,
    Hud = 4,
    ChatLog = 5,
    Inventory = 6,
    ScenarioTree = 7,
    EventFade = 8,
    Context = 9,
    InventoryContext = 10,
    Config = 11,
    ConfigLog = 12,
    ConfigLogColor = 13,
    Configkey = 14,
    ConfigCharacter = 15,
    ConfigPadcustomize = 16,
    ChatConfig = 17,
    HudLayout = 18,
    Emote = 19,
    Macro = 20,
    TargetCircle = 21,
    GatheringNote = 22,
    RecipeNote = 23,
    RecipeTree = 24,
    RecipeMaterialList = 25,
    RecipeProductList = 26,
    FishingNote = 27,
    FishGuide = 28,
    FishRecord = 29,
    Journal = 31,
    ActionMenu = 32,
    Marker = 33,
    Trade = 34,
    ScreenLog = 35,
    Request = 36,
    Status = 37,
    Map = 38,
    Loot = 39,
    Repair = 40,
    Materialize = 42,
    MateriaAttach = 43,
    MiragePrism = 44,
    Colorant = 45,
    Howto = 46,
    HowtoNotice = 47,
    ContentsTutorial = 48,
    Inspect = 49,
    Teleport = 50,
    TelepotTown = 51,
    ContentsFinder = 52,
    ContentsFinderSetting = 53,
    Social = 54,
    SocialBlacklist = 55,
    SocialFriendList = 56,
    Linkshell = 57,
    SocialPartyMember = 58,
    SocialSearch = 60,
    SocialDetail = 61,
    LetterList = 62,
    LetterView = 63,
    LetterEdit = 64,
    ItemDetail = 65,
    ActionDetail = 66,
    Retainer = 67,
    Return = 68,
    Cutscene = 69,
    CutsceneReplay = 70,
    MonsterNote = 71,
    ItemSearch = 72,
    GoldSaucerReward = 73,
    FateProgress = 74,
    Catch = 75,
    FreeCompany = 76,
    FreeCompanyProfile = 78,
    FreeCompanyProfileEdit = 79,
    FreeCompanyInputString = 81,
    FreeCompanyChest = 82,
    FreeCompanyExchange = 83,
    FreeCompanyCrestEditor = 84,
    FreeCompanyCrestDecal = 85,
    ArmouryBoard = 87,
    HowtoList = 88,
    Cabinet = 89,
    LegacyItemStorage = 90,
    GrandCompanyRank = 91,
    GrandCompanySupply = 92,
    GrandCompanyExchange = 93,
    Gearset = 94,
    SupportMain = 95,
    SupportList = 96,
    SupportView = 97,
    SupportEdit = 98,
    Achievement = 99,
    LicenseViewer = 101,
    ContentsTimer = 102,
    MovieSubtitle = 103,
    PadMouseMode = 104,
    RecommendList = 105,
    Buddy = 106,
    ColosseumRecord = 107,
    CloseMessage = 108,
    CreditPlayer = 109,
    CreditScroll = 110,
    CreditCast = 111,
    CreditEnd = 112,
    CreditCutCast = 113,
    Shop = 114,
    Bait = 115,
    Housing = 116,
    HousingHarvest = 117,
    HousingSignboard = 118,
    HousingPortal = 119,
    HousingTravellersNote = 120,
    HousingPlant = 121,
    PersonalRoomPortal = 122,
    HousingBuddyList = 123,
    TreasureHunt = 124,
    Salvage = 125,
    LookingForGroup = 126,
    ContentsMvp = 127,
    VoteKick = 128,
    VoteGiveUp = 129,
    VoteTreasure = 130,
    PvpProfile = 131,
    ContentsNote = 132,
    ReadyCheck = 133,
    FieldMarker = 134,
    CursorLocation = 135,
    CursorRect = 136,
    RetainerStatus = 137,
    RetainerTask = 138,
    RetainerItemTransfer = 141,
    RelicNotebook = 143,
    RelicSphere = 144,
    TradeMultiple = 145,
    RelicSphereUpgrade = 146,
    Relic2Glass = 149,
    Minigame = 150,
    Tryon = 151,
    TryonRetainer = 152,
    AdventureNotebook = 153,
    ArmouryNotebook = 154,
    MinionNotebook = 155,
    MountNotebook = 156,
    ItemCompare = 157,
    DailyQuestSupply = 158,
    MobHunt = 159,
    PatchMark = 160,
    HousingWithdrawStorage = 161,
    WeatherReport = 162,
    LoadingTips = 164,
    Revive = 165,
    ChocoboRace = 167,
    GoldSaucerMiniGame = 169,
    TrippleTriad = 170,
    LotteryDaily = 178,
    AetherialWheel = 179,
    LotteryWeekly = 180,
    GoldSaucer = 181,
    TripleTriadCoinExchange = 182,
    ShopExchangeCoin = 183,
    JournalAccept = 184,
    JournalResult = 185,
    LeveQuest = 186,
    CompanyCraftRecipeNoteBook = 187,
    AirShipParts = 188,
    AirShipExploration = 189,
    AirShipExplorationResult = 190,
    AirShipExplorationDetail = 191,
    SubmersibleParts = 192,
    SubmersibleExploration = 193,
    SubmersibleExplorationResult = 194,
    SubmersibleExplorationDetail = 195,
    CompanyCraftMaterial = 196,
    AetherCurrent = 197,
    FreeCompanyCreditShop = 198,
    Currency = 199,
    PuryfyItemSelector = 200,
    LovmParty = 202,
    LovmRanking = 203,
    LovmNamePlate = 204,
    CharacterTitle = 205,
    CharacterTitleSelect = 206,
    LovmResult = 207,
    LovmPaletteEdit = 208,
    SkyIslandFinder = 209,
    SkyIslandFinderSetting = 210,
    ItemContextCustomize = 213,
    BeginnersMansionProblem = 214,
    DpsChallenge = 215,
    PlayGuide = 216,
    WebLauncher = 217,
    WebGuidance = 218,
    Orchestrion = 219,
    BeginnerChatList = 220,
    ReturnerDialog = 223,
    OrchestrionInn = 224,
    HousingEditContainer = 225,
    ConfigPartyListRoleSort = 226,
    RecommendEquip = 227,
    YkwNote = 228,
    ContentsFinderMenu = 229,
    RaidFinder = 230,
    GcArmyExpedition = 231,
    GcArmyMemberList = 232,
    DeepDungeonInspect = 234,
    DeepDungeonMap = 235,
    DeepDungeonStatus = 236,
    DeepDungeonSaveData = 237,
    DeepDungeonScore = 238,
    GcArmyTraining = 239,
    GcArmyMenberProfile = 240,
    GcArmyExpeditionResult = 241,
    GcArmyCapture = 242,
    GcArmyOrder = 243,
    MansionSelectRoom = 244,
    OrchestrionPlayList = 245,
    CountDownSettingDialog = 246,
    WeeklyBingo = 247,
    WeeklyPuzzle = 248,
    CameraSetting = 249,
    PvPDuelRequest = 250,
    PvPHeader = 251,
    AquariumSetting = 255,
    DeepDungeonMenu = 257,
    ItemAppraisal = 260,
    ItemInspection = 261,
    RecipeItemContext = 262,
    ContactList = 263,
    SatisfactionSupply = 266,
    Snipe = 268,
    MountSpeed = 269,
    PvpTeam = 285,
    EurekaElementalHud = 287,
    EurekaElementalEdit = 288,
    EurekaChainInfo = 289,
    TeleportHousingFriend = 293,
    ContentMemberList = 294,
    InventoryBuddy = 295,
    ContentsReplayPlayer = 296,
    ContentsReplaySetting = 297,
    MiragePrismPrismBox = 298,
    MiragePrismPrismItemDetail = 299,
    MiragePrismMiragePlate = 300,
    Fashion = 304,
    HousingGuestBook = 307,
    ReconstructionBox = 310,
    ReconstructionBuyback = 311,
    CrossWorldLinkShell = 312,
    Description = 314,
    AozNotebook = 319,
    RhythmAction = 320,
    Emj = 322,
    EmjIntro = 325,
    AozContentBriefing = 326,
    AozContentResult = 327,
    WorldTravel = 328,
    RideShooting = 329,
    Credit = 331,
    EmjSetting = 332,
    RetainerList = 333,
    Dawn = 338,
    DawnStory = 339,
    HousingCatalogPreview = 340,
    SubmersibleExplorationMapSelect = 342,
    QuestRedo = 343,
    QuestRedoHud = 344,
    CircleList = 346,
    CircleBook = 347,
    CircleFinder = 352,
    MentorCondition = 354,
    PerformanceMetronome = 355,
    PerformanceGamepadGuide = 356,
    PerformanceReadyCheck = 358,
    HwdAetherGauge = 362,
    HwdScore = 364,
    HwdMonument = 366,
    McGuffin = 367,
    CraftActionSimulator = 368,
    MycWarResultNotebook = 375,
    MycInfo = 376,
    MycItemBox = 377,
    MycItemBag = 378,
    MycBattleAreaInfo = 380,
    OrnamentNoteBook = 382,
    TourismMenu = 384,
    StarlightGiftBox = 386,
    SpearFishing = 387,
    Omikuji = 388,
    FittingShop = 389,
    AkatsukiNote = 390,
    ExHotbarEditor = 391,
    BannerList = 392,
    BannerEditor = 393,
    BannerUpdateView = 394,
    PvPMap = 395,
    CharaCard = 397,
    CharaCardDesignSetting = 398,
    CharaCardProfileSetting = 399,
    PvPMKSIntroduction = 401,
    MJIHud = 402,
    MJIPouch = 403,
    MJIRecipeNoteBook = 404,
    MJICraftSchedule = 405,
    MJICraftSales = 406,
    MJIAnimalManagement = 407,
    MJIFarmManagement = 408,
    MJIGatheringHouse = 409,
    MJIBuilding = 410,
    MJIGatheringNoteBook = 411,
    MJIDisposeShop = 412,
    MJIMinionManagement = 413,
    MJIMinionNoteBook = 414,
    MJIBuildingMove = 415,
    MJIEntrance = 416,
    MJISettings = 417,
    ArchiveItem = 418,
    VVDNotebook = 419,
    VVDFinder = 420,
    TofuList = 421,
    BannerParty = 423,
    BannerMIP = 424
};

struct Client_UI_Agent_AgentMonsterNote /* Size=0x68 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /* 0x28 */ StdVector_Client_System_String_Utf8String StringVector;
    /* 0x40 */ unsigned __int32 BaseId;
    /* 0x44 */ byte ClassId;
    /* 0x45 */ byte ClassIndex;
    /* 0x46 */ byte MonsterNote;
    /* 0x47 */ byte Rank;
    /* 0x48 */ byte Filter;
    /*      */ byte _gap_0x49;
    /*      */ byte _gap_0x4A[0x2];
    /*      */ byte _gap_0x4C[0x4];
    /*      */ byte _gap_0x50[0x8];
    /*      */ byte _gap_0x58[0x4];
    /* 0x5C */ byte IsLocked;
    /*      */ byte _gap_0x5D;
    /*      */ byte _gap_0x5E[0x2];
    /*      */ byte _gap_0x60[0x8];
};

struct Client_UI_Agent_AgentReadyCheck /* Size=0x3B0 */
{
    /* 0x000 */ Component_GUI_AgentInterface AgentInterface;
    /*       */ byte _gap_0x28[0x88];
    /* 0x0B0 */ byte ReadyCheckEntries[0x300];
};

struct Client_UI_Agent_AgentRecipeNote /* Size=0x560 */
{
    /* 0x000 */ Component_GUI_AgentInterface AgentInterface;
    /*       */ byte _gap_0x28[0x390];
    /*       */ byte _gap_0x3B8[0x4];
    /* 0x3BC */ __int32 SelectedRecipeIndex;
    /*       */ byte _gap_0x3C0[0x10];
    /*       */ byte _gap_0x3D0[0x4];
    /* 0x3D4 */ unsigned __int32 ActiveCraftRecipeId;
    /*       */ byte _gap_0x3D8[0x188];
};

struct Client_UI_Agent_AgentReconstructionBox /* Size=0x240 */
{
    /* 0x000 */ Component_GUI_AgentInterface AgentInterface;
    /*       */ byte _gap_0x28[0x28];
    /* 0x050 */ byte ItemDonationArray[0xF0];
    union {
    /* 0x140 */ __int32 LimitedTotal;
    /* 0x140 */ __int32 UnlimitedTotal;
    } _union_0x21C;
    /*       */ byte _gap_0x148[0xF8];
};

struct Client_UI_Agent_AgentItemDonationInfo /* Size=0x18 */
{
    /* 0x00 */ void* UnkPtr1;
    /* 0x08 */ void* UnkPtr2;
    /* 0x10 */ void* UnkPtr3;
};

struct Client_UI_Agent_AgentRequest /* Size=0x460 */
{
    /* 0x000 */ Component_GUI_AgentInterface AgentInterface;
    /*       */ byte _gap_0x28[0xE8];
    /*       */ byte _gap_0x110[0x4];
    /* 0x114 */ signed __int8 SelectedTurnInSlot;
    /*       */ byte _gap_0x115;
    /*       */ byte _gap_0x116[0x2];
    /*       */ byte _gap_0x118[0x8];
    /*       */ byte _gap_0x120[0x4];
    /* 0x124 */ __int16 SelectedTurnInSlotItemOptions;
    /*       */ byte _gap_0x126[0x2];
    /*       */ byte _gap_0x128[0x338];
};

struct Client_UI_Agent_AgentRetainerItemTransferData /* Size=0x41E8 */
{
    /* 0x0000 */ __int32 ItemCount;
    /*        */ byte _gap_0x4[0x4];
    /*        */ byte _gap_0x8[0x8];
    /* 0x0010 */ byte DuplicateItem[0x41A0];
    /*        */ byte _gap_0x41B0[0x38];
};

struct Client_UI_Agent_AgentRetainerItemTransfer /* Size=0x38 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /* 0x28 */ Client_UI_Agent_AgentRetainerItemTransferData* Data;
    /*      */ byte _gap_0x30[0x8];
};

struct Client_UI_Agent_AgentRetainerList_Retainer /* Size=0x70 */
{
    /* 0x00 */ Client_System_String_Utf8String Name;
    /*      */ byte _gap_0x68[0x4];
    /* 0x6C */ byte Index;
    /* 0x6D */ byte SortedIndex;
    /*      */ byte _gap_0x6E[0x2];
};

struct Client_UI_Agent_AgentRetainerList_RetainerList /* Size=0x460 */
{
    /* 0x000 */ Client_UI_Agent_AgentRetainerList_Retainer Retainer0;
    /* 0x070 */ Client_UI_Agent_AgentRetainerList_Retainer Retainer1;
    /* 0x0E0 */ Client_UI_Agent_AgentRetainerList_Retainer Retainer2;
    /* 0x150 */ Client_UI_Agent_AgentRetainerList_Retainer Retainer3;
    /* 0x1C0 */ Client_UI_Agent_AgentRetainerList_Retainer Retainer4;
    /* 0x230 */ Client_UI_Agent_AgentRetainerList_Retainer Retainer5;
    /* 0x2A0 */ Client_UI_Agent_AgentRetainerList_Retainer Retainer6;
    /* 0x310 */ Client_UI_Agent_AgentRetainerList_Retainer Retainer7;
    /* 0x380 */ Client_UI_Agent_AgentRetainerList_Retainer Retainer8;
    /* 0x3F0 */ Client_UI_Agent_AgentRetainerList_Retainer Retainer9;
};

struct Client_UI_Agent_AgentRetainerList /* Size=0x5B8 */
{
    /* 0x000 */ Component_GUI_AgentInterface AgentInterface;
    /*       */ byte _gap_0x28[0x8];
    /* 0x030 */ unsigned __int32 RetainerListOpenedTime;
    /* 0x034 */ unsigned __int32 RetainerListSortAddonId;
    /*       */ byte _gap_0x38[0x10];
    /* 0x048 */ byte RetainerCount;
    /*       */ byte _gap_0x49;
    /*       */ byte _gap_0x4A[0x2];
    /*       */ byte _gap_0x4C[0x4];
    /* 0x050 */ Client_UI_Agent_AgentRetainerList_RetainerList Retainers;
    /*       */ byte _gap_0x4B0[0x108];
};

struct Client_Game_UI_Revive /* Size=0x30 */
{
    /* 0x00 */ Component_GUI_AtkEventInterface AtkEventInterface;
    /*      */ byte _gap_0x8[0x8];
    /*      */ byte _gap_0x10[0x4];
    /* 0x14 */ float Timer;
    /*      */ byte _gap_0x18[0x8];
    /*      */ byte _gap_0x20[0x4];
    /* 0x24 */ byte ReviveState;
    /*      */ byte _gap_0x25;
    /*      */ byte _gap_0x26[0x2];
    /*      */ byte _gap_0x28[0x8];
};

struct Client_UI_Agent_AgentRevive /* Size=0xB8 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /* 0x28 */ Client_Game_UI_Revive* Revive;
    /*      */ byte _gap_0x30[0x8];
    /* 0x38 */ byte ReviveState;
    /*      */ byte _gap_0x39;
    /*      */ byte _gap_0x3A[0x2];
    /*      */ byte _gap_0x3C[0x4];
    /* 0x40 */ __int32 ResurrectionTimeLeft;
    /* 0x44 */ unsigned __int32 ResurrectingPlayerId;
    /* 0x48 */ Client_System_String_Utf8String ResurrectingPlayerName;
    /*      */ byte _gap_0xB0[0x8];
};

struct Client_UI_Agent_AgentSalvage_SalvageListItem /* Size=0x88 */
{
    /* 0x00 */ Client_System_String_Utf8String Name;
    /* 0x68 */ Client_Game_InventoryType0x4 InventoryType;
    /* 0x6C */ unsigned __int32 InventorySlot;
    /* 0x70 */ unsigned __int32 Quantity;
    /* 0x74 */ unsigned __int32 ItemId;
    /* 0x78 */ unsigned __int32 ClassJob;
    /* 0x7C */ byte Flags;
    /*      */ byte _gap_0x7D;
    /*      */ byte _gap_0x7E[0x2];
    /*      */ byte _gap_0x80[0x8];
};

struct Client_UI_Agent_SalvageResult /* Size=0x8 */
{
    /* 0x0 */ unsigned __int32 ItemId;
    /* 0x4 */ __int32 Quantity;
};

struct Client_UI_Agent_AgentSalvage /* Size=0x3D0 */
{
    /* 0x000 */ Component_GUI_AgentInterface AgentInterface;
    /*       */ byte _gap_0x28[0x8];
    /* 0x030 */ Client_UI_Agent_AgentSalvage_SalvageItemCategory0x4 SelectedCategory;
    /*       */ byte _gap_0x34[0x4];
    /* 0x038 */ Client_UI_Agent_AgentSalvage_SalvageListItem* ItemList;
    /* 0x040 */ Client_System_String_Utf8String TextCarpenter;
    /* 0x0A8 */ Client_System_String_Utf8String TextBlacksmith;
    /* 0x110 */ Client_System_String_Utf8String TextArmourer;
    /* 0x178 */ Client_System_String_Utf8String TextGoldsmith;
    /* 0x1E0 */ Client_System_String_Utf8String TextLeatherworker;
    /* 0x248 */ Client_System_String_Utf8String TextWeaver;
    /* 0x2B0 */ Client_System_String_Utf8String TextAlchemist;
    /* 0x318 */ Client_System_String_Utf8String TextCulinarian;
    /* 0x380 */ unsigned __int32 ItemCount;
    /*       */ byte _gap_0x384[0x4];
    /*       */ byte _gap_0x388[0x8];
    /* 0x390 */ Client_Game_InventoryItem* DesynthItemSlot;
    /* 0x398 */ Client_UI_Agent_SalvageResult DesynthItem;
    /*       */ byte _gap_0x3A0[0x4];
    /* 0x3A4 */ unsigned __int32 DesynthItemId;
    /* 0x3A8 */ byte DesynthResult[0x18];
    /*       */ byte _gap_0x3C0[0x10];
};

struct Client_UI_Agent_AgentSatisfactionSupply /* Size=0x500 */
{
    /* 0x000 */ Component_GUI_AgentInterface AgentInterface;
    /*       */ byte _gap_0x28[0x1A8];
    /*       */ byte _gap_0x1D0[0x4];
    /* 0x1D4 */ byte DeliveryInfo[0x318];
    /*       */ byte _gap_0x4EC[0x4];
    /*       */ byte _gap_0x4F0[0x10];
};

struct Client_UI_Agent_AgentDeliveryItemInfo /* Size=0x108 */
{
    /*       */ byte _gap_0x0[0x28];
    /* 0x028 */ Client_System_String_Utf8String ItemName;
    /*       */ byte _gap_0x90[0x78];
};

struct Client_UI_Agent_BalloonSlot /* Size=0x8 */
{
    /* 0x0 */ __int32 Id;
    /* 0x4 */ byte Available;
    /*     */ byte _gap_0x5;
    /*     */ byte _gap_0x6[0x2];
};

struct StdDeque_Client_UI_Agent_BalloonInfo /* Size=0x28 */
{
    /* 0x00 */ void* ContainerBase;
    /* 0x08 */ Client_UI_Agent_BalloonInfo** Map;
    /* 0x10 */ unsigned __int64 MapSize;
    /* 0x18 */ unsigned __int64 MyOff;
    /* 0x20 */ unsigned __int64 MySize;
};

struct Client_UI_Agent_AgentScreenLog /* Size=0x3F0 */
{
    /* 0x000 */ Component_GUI_AgentInterface AgentInterface;
    /*       */ byte _gap_0x28[0x328];
    /* 0x350 */ StdDeque_Client_UI_Agent_BalloonInfo BalloonQueue;
    /* 0x378 */ byte BalloonsHaveUpdate;
    /*       */ byte _gap_0x379;
    /*       */ byte _gap_0x37A[0x2];
    /* 0x37C */ __int32 BalloonCounter;
    /*       */ byte _gap_0x380[0x10];
    /* 0x390 */ byte BalloonSlots[0x50];
    /*       */ byte _gap_0x3E0[0x10];
};

struct Client_Game_UI_TeleportInfo /* Size=0x20 */
{
    /* 0x00 */ unsigned __int32 AetheryteId;
    /* 0x04 */ unsigned __int32 GilCost;
    /* 0x08 */ unsigned __int16 TerritoryId;
    /*      */ byte _gap_0xA[0x2];
    /*      */ byte _gap_0xC[0x4];
    /*      */ byte _gap_0x10[0x8];
    /* 0x18 */ byte Ward;
    /* 0x19 */ byte Plot;
    /* 0x1A */ byte SubIndex;
    /* 0x1B */ byte IsFavourite;
    /*      */ byte _gap_0x1C[0x4];
};

struct StdVector_Client_Game_UI_TeleportInfo /* Size=0x18 */
{
    /* 0x00 */ Client_Game_UI_TeleportInfo* First;
    /* 0x08 */ Client_Game_UI_TeleportInfo* Last;
    /* 0x10 */ Client_Game_UI_TeleportInfo* End;
};

struct Client_UI_Agent_AgentTeleport /* Size=0x90 */
{
    /* 0x00 */ Component_GUI_AgentInterface AgentInterface;
    /*      */ byte _gap_0x28[0x38];
    /* 0x60 */ __int32 AetheryteCount;
    /*      */ byte _gap_0x64[0x4];
    /* 0x68 */ StdVector_Client_Game_UI_TeleportInfo* AetheryteList;
    /*      */ byte _gap_0x70[0x20];
};

struct Client_System_Scheduler_Resource_SchedulerResource_ResourceName /* Size=0x40 */
{
    /* 0x00 */ void** VTable;
    /* 0x08 */ byte* DataPointer;
    /* 0x10 */ unsigned __int16 Unk1;
    /* 0x12 */ byte Buffer[0x2E];
};

struct Client_System_Scheduler_Resource_SchedulerResource /* Size=0x88 */
{
    /* 0x00 */ void** VTable;
    /* 0x08 */ Client_System_Scheduler_Resource_SchedulerResource* Next;
    /* 0x10 */ Client_System_Scheduler_Resource_SchedulerResource* Previous;
    /*      */ byte _gap_0x18[0x8];
    /* 0x20 */ Client_System_Resource_Handle_ResourceHandle* Resource;
    /*      */ byte _gap_0x28[0x10];
    /* 0x38 */ Client_System_Scheduler_Resource_SchedulerResource_ResourceName Name;
    /* 0x78 */ unsigned __int32 Unk1;
    /* 0x7C */ unsigned __int32 Consumers;
    /*      */ byte _gap_0x80[0x8];
};

struct Client_System_Scheduler_Resource_SchedulerResourceManagement /* Size=0x58 */
{
    /* 0x00 */ void** VTable;
    /* 0x08 */ Client_System_Scheduler_Resource_SchedulerResource* Begin;
    /* 0x10 */ void* Unknown;
    /* 0x18 */ unsigned __int64 NumResources;
    /*      */ byte _gap_0x20[0x38];
};

struct Client_System_Scheduler_Base_SchedulerState /* Size=0x18 */
{
    /* 0x00 */ void** VTable;
    /*      */ byte _gap_0x8[0x10];
};

struct Client_System_Scheduler_Base_TimelineController /* Size=0x80 */
{
    /* 0x00 */ Client_System_Scheduler_Base_SchedulerState SchedulerState;
    /*      */ byte _gap_0x18[0x68];
};

struct Client_System_Scheduler_Base_SchedulerTimeline_SchedulerTimelineVTable /* Size=0xE8 */
{
    /*      */ byte _gap_0x0[0xE0];
    /* 0xE0 */ __int64 GetOwningGameObjectIndex;
};

struct Client_System_Scheduler_Base_SchedulerTimeline /* Size=0x280 */
{
    union {
    /* 0x000 */ Client_System_Scheduler_Base_TimelineController TimelineController;
    /* 0x000 */ Client_System_Scheduler_Base_SchedulerTimeline_SchedulerTimelineVTable* VTable;
    } _union_0x0;
    /*       */ byte _gap_0x8[0x180];
    /*       */ byte _gap_0x188[0x4];
    /* 0x18C */ unsigned __int32 OwningGameObjectIndex;
    /*       */ byte _gap_0x190[0xF0];
};

struct Pointer_StdMap_System_UInt32_Pointer_Client_System_Resource_Handle_ResourceHandle /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct StdPair_System_UInt32_Pointer_StdMap_System_UInt32_Pointer_Client_System_Resource_Handle_ResourceHandle /* Size=0x10 */
{
    /* 0x00 */ unsigned __int32 Item1;
    /*      */ byte _gap_0x4[0x4];
    /* 0x08 */ Pointer_StdMap_System_UInt32_Pointer_Client_System_Resource_Handle_ResourceHandle Item2;
};

struct StdMap_Node_System_UInt32_Pointer_StdMap_System_UInt32_Pointer_Client_System_Resource_Handle_ResourceHandle /* Size=0x38 */
{
    /* 0x00 */ StdMap_Node_System_UInt32_Pointer_StdMap_System_UInt32_Pointer_Client_System_Resource_Handle_ResourceHandle* Left;
    /* 0x08 */ StdMap_Node_System_UInt32_Pointer_StdMap_System_UInt32_Pointer_Client_System_Resource_Handle_ResourceHandle* Parent;
    /* 0x10 */ StdMap_Node_System_UInt32_Pointer_StdMap_System_UInt32_Pointer_Client_System_Resource_Handle_ResourceHandle* Right;
    /* 0x18 */ byte Color;
    /*      */ byte _gap_0x19;
    /*      */ byte _gap_0x1A[0x2];
    /* 0x1C */ bool IsNil;
    /*      */ byte _gap_0x1D;
    /*      */ byte _gap_0x1E[0x2];
    /* 0x20 */ byte _18;
    /* 0x21 */ byte _19;
    /*      */ byte _gap_0x22[0x2];
    /*      */ byte _gap_0x24[0x4];
    /* 0x28 */ StdPair_System_UInt32_Pointer_StdMap_System_UInt32_Pointer_Client_System_Resource_Handle_ResourceHandle KeyValuePair;
};

struct StdMap_System_UInt32_Pointer_StdMap_System_UInt32_Pointer_Client_System_Resource_Handle_ResourceHandle /* Size=0x10 */
{
    /* 0x00 */ StdMap_Node_System_UInt32_Pointer_StdMap_System_UInt32_Pointer_Client_System_Resource_Handle_ResourceHandle* Head;
    /* 0x08 */ unsigned __int64 Count;
};

struct Client_System_Resource_ResourceGraph_CategoryContainer /* Size=0xA0 */
{
    union {
    /* 0x00 */ byte CategoryMaps[0xA0];
    /* 0x00 */ StdMap_System_UInt32_Pointer_StdMap_System_UInt32_Pointer_Client_System_Resource_Handle_ResourceHandle* MainMap;
    } _union_0x0;
    /*      */ byte _gap_0x8[0x98];
};

struct Client_System_Resource_ResourceGraph /* Size=0xC80 */
{
    union {
    /* 0x000 */ byte ContainerArray[0xC80];
    /* 0x000 */ Client_System_Resource_ResourceGraph_CategoryContainer CommonContainer;
    } _union_0x0;
    /*       */ byte _gap_0x8[0x98];
    /* 0x0A0 */ Client_System_Resource_ResourceGraph_CategoryContainer BgCommonContainer;
    /* 0x140 */ Client_System_Resource_ResourceGraph_CategoryContainer BgContainer;
    /* 0x1E0 */ Client_System_Resource_ResourceGraph_CategoryContainer CutContainer;
    /* 0x280 */ Client_System_Resource_ResourceGraph_CategoryContainer CharaContainer;
    /* 0x320 */ Client_System_Resource_ResourceGraph_CategoryContainer ShaderContainer;
    /* 0x3C0 */ Client_System_Resource_ResourceGraph_CategoryContainer UiContainer;
    /* 0x460 */ Client_System_Resource_ResourceGraph_CategoryContainer SoundContainer;
    /* 0x500 */ Client_System_Resource_ResourceGraph_CategoryContainer VfxContainer;
    /* 0x5A0 */ Client_System_Resource_ResourceGraph_CategoryContainer UiScriptContainer;
    /* 0x640 */ Client_System_Resource_ResourceGraph_CategoryContainer ExdContainer;
    /* 0x6E0 */ Client_System_Resource_ResourceGraph_CategoryContainer GameScriptContainer;
    /* 0x780 */ Client_System_Resource_ResourceGraph_CategoryContainer MusicContainer;
    /*       */ byte _gap_0x820[0x320];
    /* 0xB40 */ Client_System_Resource_ResourceGraph_CategoryContainer SqpackTestContainer;
    /* 0xBE0 */ Client_System_Resource_ResourceGraph_CategoryContainer DebugContainer;
};

struct Client_System_Resource_ResourceManager /* Size=0x1728 */
{
    /*        */ byte _gap_0x0[0x8];
    /* 0x0008 */ Client_System_Resource_ResourceGraph* ResourceGraph;
    /*        */ byte _gap_0x10[0x1718];
};

struct Client_System_Resource_Handle_MaterialResourceHandle /* Size=0x108 */
{
    /* 0x000 */ Client_System_Resource_Handle_ResourceHandle ResourceHandle;
    /*       */ byte _gap_0xB0[0x58];
};

struct FFXIVClientStructs_Havok_hkBaseObject_hkBaseObjectVtbl /* Size=0x10 */
{
    /* 0x00 */ void* dtor;
    /* 0x08 */ void* __first_virtual_table_function__;
};

struct FFXIVClientStructs_Havok_hkBaseObject /* Size=0x8 */
{
    /* 0x0 */ FFXIVClientStructs_Havok_hkBaseObject_hkBaseObjectVtbl* vfptr;
};

struct FFXIVClientStructs_Havok_hkReferencedObject /* Size=0x10 */
{
    /* 0x00 */ FFXIVClientStructs_Havok_hkBaseObject hkBaseObject;
    /* 0x08 */ unsigned __int32 MemSizeAndRefCount;
    /*      */ byte _gap_0xC[0x4];
};

struct FFXIVClientStructs_Havok_hkStringPtr /* Size=0x8 */
{
    /* 0x0 */ byte* StringAndFlag;
};

struct FFXIVClientStructs_Havok_hkArray_System_Int16 /* Size=0x10 */
{
    /* 0x00 */ __int16* Data;
    /* 0x08 */ __int32 Length;
    /* 0x0C */ __int32 CapacityAndFlags;
};

struct FFXIVClientStructs_Havok_hkaBone /* Size=0x10 */
{
    /* 0x00 */ FFXIVClientStructs_Havok_hkStringPtr Name;
    /* 0x08 */ byte LockTranslation;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /*      */ byte _gap_0xC[0x4];
};

struct FFXIVClientStructs_Havok_hkArray_FFXIVClientStructs_Havok_hkaBone /* Size=0x10 */
{
    /* 0x00 */ FFXIVClientStructs_Havok_hkaBone* Data;
    /* 0x08 */ __int32 Length;
    /* 0x0C */ __int32 CapacityAndFlags;
};

struct FFXIVClientStructs_Havok_hkVector4f /* Size=0x10 */
{
    /* 0x00 */ float X;
    /* 0x04 */ float Y;
    /* 0x08 */ float Z;
    /* 0x0C */ float W;
};

struct FFXIVClientStructs_Havok_hkQuaternionf /* Size=0x10 */
{
    /* 0x00 */ float X;
    /* 0x04 */ float Y;
    /* 0x08 */ float Z;
    /* 0x0C */ float W;
};

struct FFXIVClientStructs_Havok_hkQsTransformf /* Size=0x30 */
{
    /* 0x00 */ FFXIVClientStructs_Havok_hkVector4f Translation;
    /* 0x10 */ FFXIVClientStructs_Havok_hkQuaternionf Rotation;
    /* 0x20 */ FFXIVClientStructs_Havok_hkVector4f Scale;
};

struct FFXIVClientStructs_Havok_hkArray_FFXIVClientStructs_Havok_hkQsTransformf /* Size=0x10 */
{
    /* 0x00 */ FFXIVClientStructs_Havok_hkQsTransformf* Data;
    /* 0x08 */ __int32 Length;
    /* 0x0C */ __int32 CapacityAndFlags;
};

struct FFXIVClientStructs_Havok_hkArray_System_Single /* Size=0x10 */
{
    /* 0x00 */ float* Data;
    /* 0x08 */ __int32 Length;
    /* 0x0C */ __int32 CapacityAndFlags;
};

struct FFXIVClientStructs_Havok_hkArray_FFXIVClientStructs_Havok_hkStringPtr /* Size=0x10 */
{
    /* 0x00 */ FFXIVClientStructs_Havok_hkStringPtr* Data;
    /* 0x08 */ __int32 Length;
    /* 0x0C */ __int32 CapacityAndFlags;
};

struct FFXIVClientStructs_Havok_hkLocalFrame /* Size=0x10 */
{
    /* 0x00 */ FFXIVClientStructs_Havok_hkReferencedObject hkReferencedObject;
};

struct FFXIVClientStructs_Havok_hkRefPtr_FFXIVClientStructs_Havok_hkLocalFrame /* Size=0x8 */
{
    /* 0x0 */ FFXIVClientStructs_Havok_hkLocalFrame* ptr;
};

struct FFXIVClientStructs_Havok_hkaSkeleton_LocalFrameOnBone /* Size=0x10 */
{
    /* 0x00 */ FFXIVClientStructs_Havok_hkRefPtr_FFXIVClientStructs_Havok_hkLocalFrame LocalFrame;
    /* 0x08 */ __int16 BoneIndex;
    /*      */ byte _gap_0xA[0x2];
    /*      */ byte _gap_0xC[0x4];
};

struct FFXIVClientStructs_Havok_hkArray_FFXIVClientStructs_Havok_hkaSkeleton_LocalFrameOnBone /* Size=0x10 */
{
    /* 0x00 */ FFXIVClientStructs_Havok_hkaSkeleton_LocalFrameOnBone* Data;
    /* 0x08 */ __int32 Length;
    /* 0x0C */ __int32 CapacityAndFlags;
};

struct FFXIVClientStructs_Havok_hkaSkeleton_Partition /* Size=0x10 */
{
    /* 0x00 */ FFXIVClientStructs_Havok_hkStringPtr Name;
    /* 0x08 */ __int16 StartBoneIndex;
    /* 0x0A */ __int16 NumBones;
    /*      */ byte _gap_0xC[0x4];
};

struct FFXIVClientStructs_Havok_hkArray_FFXIVClientStructs_Havok_hkaSkeleton_Partition /* Size=0x10 */
{
    /* 0x00 */ FFXIVClientStructs_Havok_hkaSkeleton_Partition* Data;
    /* 0x08 */ __int32 Length;
    /* 0x0C */ __int32 CapacityAndFlags;
};

struct FFXIVClientStructs_Havok_hkaSkeleton /* Size=0x88 */
{
    /* 0x00 */ FFXIVClientStructs_Havok_hkReferencedObject hkReferencedObject;
    /* 0x10 */ FFXIVClientStructs_Havok_hkStringPtr Name;
    /* 0x18 */ FFXIVClientStructs_Havok_hkArray_System_Int16 ParentIndices;
    /* 0x28 */ FFXIVClientStructs_Havok_hkArray_FFXIVClientStructs_Havok_hkaBone Bones;
    /* 0x38 */ FFXIVClientStructs_Havok_hkArray_FFXIVClientStructs_Havok_hkQsTransformf ReferencePose;
    /* 0x48 */ FFXIVClientStructs_Havok_hkArray_System_Single ReferenceFloats;
    /* 0x58 */ FFXIVClientStructs_Havok_hkArray_FFXIVClientStructs_Havok_hkStringPtr FloatSlots;
    /* 0x68 */ FFXIVClientStructs_Havok_hkArray_FFXIVClientStructs_Havok_hkaSkeleton_LocalFrameOnBone LocalFrames;
    /* 0x78 */ FFXIVClientStructs_Havok_hkArray_FFXIVClientStructs_Havok_hkaSkeleton_Partition Partitions;
};

struct Pointer_FFXIVClientStructs_Havok_hkaSkeletonMapper /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct StdPair_System_UInt32_Pointer_FFXIVClientStructs_Havok_hkaSkeletonMapper /* Size=0x10 */
{
    /* 0x00 */ unsigned __int32 Item1;
    /*      */ byte _gap_0x4[0x4];
    /* 0x08 */ Pointer_FFXIVClientStructs_Havok_hkaSkeletonMapper Item2;
};

struct StdMap_Node_System_UInt32_Pointer_FFXIVClientStructs_Havok_hkaSkeletonMapper /* Size=0x38 */
{
    /* 0x00 */ StdMap_Node_System_UInt32_Pointer_FFXIVClientStructs_Havok_hkaSkeletonMapper* Left;
    /* 0x08 */ StdMap_Node_System_UInt32_Pointer_FFXIVClientStructs_Havok_hkaSkeletonMapper* Parent;
    /* 0x10 */ StdMap_Node_System_UInt32_Pointer_FFXIVClientStructs_Havok_hkaSkeletonMapper* Right;
    /* 0x18 */ byte Color;
    /*      */ byte _gap_0x19;
    /*      */ byte _gap_0x1A[0x2];
    /* 0x1C */ bool IsNil;
    /*      */ byte _gap_0x1D;
    /*      */ byte _gap_0x1E[0x2];
    /* 0x20 */ byte _18;
    /* 0x21 */ byte _19;
    /*      */ byte _gap_0x22[0x2];
    /*      */ byte _gap_0x24[0x4];
    /* 0x28 */ StdPair_System_UInt32_Pointer_FFXIVClientStructs_Havok_hkaSkeletonMapper KeyValuePair;
};

struct StdMap_System_UInt32_Pointer_FFXIVClientStructs_Havok_hkaSkeletonMapper /* Size=0x10 */
{
    /* 0x00 */ StdMap_Node_System_UInt32_Pointer_FFXIVClientStructs_Havok_hkaSkeletonMapper* Head;
    /* 0x08 */ unsigned __int64 Count;
};

struct Pointer_FFXIVClientStructs_Havok_hkResource /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct FFXIVClientStructs_Havok_hkArray_Pointer_FFXIVClientStructs_Havok_hkResource /* Size=0x10 */
{
    /* 0x00 */ Pointer_FFXIVClientStructs_Havok_hkResource* Data;
    /* 0x08 */ __int32 Length;
    /* 0x0C */ __int32 CapacityAndFlags;
};

struct FFXIVClientStructs_Havok_hkLoader /* Size=0x20 */
{
    /* 0x00 */ FFXIVClientStructs_Havok_hkReferencedObject hkReferencedObject;
    /* 0x10 */ FFXIVClientStructs_Havok_hkArray_Pointer_FFXIVClientStructs_Havok_hkResource LoadedData;
};

struct Client_System_Resource_Handle_SkeletonResourceHandle_SkeletonHeader /* Size=0x30 */
{
    /* 0x00 */ unsigned __int32 SklbMagic;
    /* 0x04 */ unsigned __int32 SklbVersion;
    /* 0x08 */ unsigned __int32 LayerOffset;
    /* 0x0C */ unsigned __int32 SklbOffset;
    /* 0x10 */ unsigned __int16 ConnectBoneIndex;
    /*      */ byte _gap_0x12[0x2];
    /* 0x14 */ unsigned __int32 CharacterId;
    /* 0x18 */ unsigned __int32 SkeletonMappers[0x4];
    /* 0x28 */ unsigned __int16 ConnectBoneIds[0x4];
};

struct Client_System_Resource_Handle_SkeletonResourceHandle /* Size=0x138 */
{
    /* 0x000 */ Client_System_Resource_Handle_ResourceHandle ResourceHandle;
    /*       */ byte _gap_0xB0[0x18];
    /* 0x0C8 */ unsigned __int32 BoneCount;
    /*       */ byte _gap_0xCC[0x4];
    /* 0x0D0 */ FFXIVClientStructs_Havok_hkaSkeleton* HavokSkeleton;
    /* 0x0D8 */ StdMap_System_UInt32_Pointer_FFXIVClientStructs_Havok_hkaSkeletonMapper SkeletonMapperDict1;
    /* 0x0E8 */ StdMap_System_UInt32_Pointer_FFXIVClientStructs_Havok_hkaSkeletonMapper SkeletonMapperDict2;
    /* 0x0F8 */ Common_Math_Matrix4x4* InverseBoneMatrix;
    /* 0x100 */ FFXIVClientStructs_Havok_hkLoader* HavokLoader;
    /* 0x108 */ Client_System_Resource_Handle_SkeletonResourceHandle_SkeletonHeader SkeletonData;
};

struct Client_System_Memory_IMemorySpace_IMemorySpaceVTable /* Size=0x20 */
{
    /*      */ byte _gap_0x0[0x18];
    /* 0x18 */ __int64 Malloc;
};

struct Client_System_Memory_IMemorySpace /* Size=0x8 */
{
    /* 0x0 */ Client_System_Memory_IMemorySpace_IMemorySpaceVTable* VTable;
};

struct Client_System_Configuration_SystemConfig /* Size=0x450 */
{
    /* 0x000 */ Common_Configuration_SystemConfig CommonSystemConfig;
};

struct Client_System_Configuration_DevConfig /* Size=0x110 */
{
    /* 0x000 */ Common_Configuration_DevConfig CommonDevConfig;
};

struct Client_System_Framework_GameVersion /* Size=0x900 */
{
    /*       */ byte _gap_0x0[0x900];
};

struct Client_System_Framework_Framework /* Size=0x35C8 */
{
    /*        */ byte _gap_0x0[0x10];
    /* 0x0010 */ Client_System_Configuration_SystemConfig SystemConfig;
    /* 0x0460 */ Client_System_Configuration_DevConfig DevConfig;
    /*        */ byte _gap_0x570[0x1108];
    /* 0x1678 */ bool IsNetworkModuleInitialized;
    /* 0x1679 */ bool EnableNetworking;
    /*        */ byte _gap_0x167A[0x2];
    /*        */ byte _gap_0x167C[0x4];
    /* 0x1680 */ __int64 ServerTime;
    /*        */ byte _gap_0x1688[0x30];
    /* 0x16B8 */ float FrameDeltaTime;
    /*        */ byte _gap_0x16BC[0x4];
    /*        */ byte _gap_0x16C0[0x8];
    /* 0x16C8 */ unsigned __int32 FrameCounter;
    /*        */ byte _gap_0x16CC[0x4];
    /*        */ byte _gap_0x16D0[0xA0];
    /* 0x1770 */ __int64 EorzeaTime;
    /*        */ byte _gap_0x1778[0x20];
    /* 0x1798 */ __int64 EorzeaTimeOverride;
    /* 0x17A0 */ bool IsEorzeaTimeOverridden;
    /*        */ byte _gap_0x17A1;
    /*        */ byte _gap_0x17A2[0x2];
    /*        */ byte _gap_0x17A4[0x4];
    /*        */ byte _gap_0x17A8[0x18];
    /*        */ byte _gap_0x17C0[0x4];
    /* 0x17C4 */ float FrameRate;
    /*        */ byte _gap_0x17C8[0x8];
    /* 0x17D0 */ bool WindowInactive;
    /*        */ byte _gap_0x17D1;
    /*        */ byte _gap_0x17D2[0x2];
    /*        */ byte _gap_0x17D4[0x4];
    /*        */ byte _gap_0x17D8[0x1358];
    /* 0x2B30 */ Component_Excel_ExcelModuleInterface* ExcelModuleInterface;
    /* 0x2B38 */ Component_Exd_ExdModule* ExdModule;
    /*        */ byte _gap_0x2B40[0x10];
    /* 0x2B50 */ Common_Component_BGCollision_BGCollisionModule* BGCollisionModule;
    /*        */ byte _gap_0x2B58[0x8];
    /* 0x2B60 */ Client_UI_UIModule* UIModule;
    /*        */ byte _gap_0x2B68[0x60];
    /* 0x2BC8 */ Common_Lua_LuaState LuaState;
    /* 0x2BF0 */ Client_System_Framework_GameVersion GameVersion;
    /*        */ byte _gap_0x34F0[0xD8];
};

enum Client_System_File_FileMode0x4 /* Size=0x4 */
{
    LoadUnpackedResource = 0,
    LoadFileResource = 1,
    CreateFileResource = 2,
    LoadIndexResource = 10,
    LoadSqPackResource = 11
};

struct Client_System_File_FileDescriptor /* Size=0x278 */
{
    /* 0x000 */ Client_System_File_FileMode0x4 FileMode;
    /*       */ byte _gap_0x4[0x4];
    /* 0x008 */ byte* FileBuffer;
    /* 0x010 */ unsigned __int64 FileLength;
    /* 0x018 */ unsigned __int64 CurrentFileOffset;
    /*       */ byte _gap_0x20[0x10];
    /* 0x030 */ void* FileInterface;
    /*       */ byte _gap_0x38[0x28];
    /* 0x060 */ Client_System_File_FileDescriptor* Previous;
    /* 0x068 */ Client_System_File_FileDescriptor* Next;
    /* 0x070 */ byte Utf16FilePath[0x208];
};

struct Client_LayoutEngine_IndoorFloorLayoutData /* Size=0x14 */
{
    /* 0x00 */ __int32 Part0;
    /* 0x04 */ __int32 Part1;
    /* 0x08 */ __int32 Part2;
    /* 0x0C */ __int32 Part3;
    /* 0x10 */ __int32 Part4;
};

struct Client_LayoutEngine_IndoorAreaLayoutData /* Size=0x84 */
{
    /*      */ byte _gap_0x0[0x28];
    /* 0x28 */ Client_LayoutEngine_IndoorFloorLayoutData Floor0;
    /* 0x3C */ Client_LayoutEngine_IndoorFloorLayoutData Floor1;
    /* 0x50 */ Client_LayoutEngine_IndoorFloorLayoutData Floor2;
    /*      */ byte _gap_0x64[0x4];
    /*      */ byte _gap_0x68[0x18];
    /* 0x80 */ float LightLevel;
};

struct Client_LayoutEngine_LayoutManager /* Size=0x98 */
{
    /*      */ byte _gap_0x0[0x20];
    /* 0x20 */ unsigned __int32 TerritoryTypeId;
    /*      */ byte _gap_0x24[0x4];
    /*      */ byte _gap_0x28[0x10];
    /* 0x38 */ unsigned __int32 FestivalStatus;
    /*      */ byte _gap_0x3C[0x4];
    /* 0x40 */ unsigned __int32 ActiveFestivals[0x4];
    /*      */ byte _gap_0x50[0x30];
    /* 0x80 */ void* HousingController;
    /*      */ byte _gap_0x88[0x8];
    /* 0x90 */ Client_LayoutEngine_IndoorAreaLayoutData* IndoorAreaData;
};

struct Pointer_System_Byte /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct StdPair_Client_System_String_Utf8String_Pointer_System_Byte /* Size=0x70 */
{
    /* 0x00 */ Client_System_String_Utf8String Item1;
    /* 0x68 */ Pointer_System_Byte Item2;
};

struct StdMap_Node_Client_System_String_Utf8String_Pointer_System_Byte /* Size=0x98 */
{
    /* 0x00 */ StdMap_Node_Client_System_String_Utf8String_Pointer_System_Byte* Left;
    /* 0x08 */ StdMap_Node_Client_System_String_Utf8String_Pointer_System_Byte* Parent;
    /* 0x10 */ StdMap_Node_Client_System_String_Utf8String_Pointer_System_Byte* Right;
    /* 0x18 */ byte Color;
    /*      */ byte _gap_0x19;
    /*      */ byte _gap_0x1A[0x2];
    /* 0x1C */ bool IsNil;
    /*      */ byte _gap_0x1D;
    /*      */ byte _gap_0x1E[0x2];
    /* 0x20 */ byte _18;
    /* 0x21 */ byte _19;
    /*      */ byte _gap_0x22[0x2];
    /*      */ byte _gap_0x24[0x4];
    /* 0x28 */ StdPair_Client_System_String_Utf8String_Pointer_System_Byte KeyValuePair;
};

struct StdMap_Client_System_String_Utf8String_Pointer_System_Byte /* Size=0x10 */
{
    /* 0x00 */ StdMap_Node_Client_System_String_Utf8String_Pointer_System_Byte* Head;
    /* 0x08 */ unsigned __int64 Count;
};

struct Client_LayoutEngine_LayoutWorld /* Size=0x228 */
{
    /*       */ byte _gap_0x0[0x20];
    /* 0x020 */ Client_LayoutEngine_LayoutManager* ActiveLayout;
    /*       */ byte _gap_0x28[0x1F0];
    /* 0x218 */ StdMap_Client_System_String_Utf8String_Pointer_System_Byte* RsvMap;
    /*       */ byte _gap_0x220[0x8];
};

struct Client_Graphics_Ray /* Size=0x20 */
{
    /* 0x00 */ Common_Math_Vector3 Origin;
    /* 0x10 */ Common_Math_Vector3 Direction;
};

struct Client_Graphics_Transform /* Size=0x30 */
{
    /* 0x00 */ Common_Math_Vector3 Position;
    /* 0x10 */ Common_Math_Quaternion Rotation;
    /* 0x20 */ Common_Math_Vector3 Scale;
};

struct Client_Graphics_Scene_CameraManager /* Size=0x120 */
{
    /*       */ byte _gap_0x0[0x50];
    /* 0x050 */ __int32 CameraIndex;
    /*       */ byte _gap_0x54[0x4];
    /* 0x058 */ byte CameraArray[0x70];
    /*       */ byte _gap_0xC8[0x58];
};

struct Client_Graphics_Scene_CharacterBase_CharacterBaseVTable /* Size=0x220 */
{
    /*       */ byte _gap_0x0[0x190];
    /* 0x190 */ __int64 GetModelType;
    /*       */ byte _gap_0x198[0x80];
    /* 0x218 */ __int64 FlagSlotForUpdate;
};

struct Client_Graphics_Animation_AnimationResourceHandle /* Size=0x1 */
{
    /*     */ byte _gap_0x0;
};

struct Client_Graphics_Render_PartialSkeleton /* Size=0x1C0 */
{
    /* 0x000 */ void* vtbl;
    /*       */ byte _gap_0x8[0x18];
    /* 0x020 */ byte Jobs[0x100];
    /* 0x120 */ __int16 ConnectedParentBoneIndex;
    /* 0x122 */ __int16 ConnectedBoneIndex;
    /*       */ byte _gap_0x124[0x4];
    /*       */ byte _gap_0x128[0x8];
    /* 0x130 */ unsigned __int64 HavokAnimatedSkeleton[0x2];
    /* 0x140 */ unsigned __int64 HavokPoses[0x4];
    /* 0x160 */ Client_Graphics_Render_Skeleton* Skeleton;
    /*       */ byte _gap_0x168[0x18];
    /* 0x180 */ void* SkeletonParameterResourceHandle;
    /* 0x188 */ Client_System_Resource_Handle_SkeletonResourceHandle* SkeletonResourceHandle;
    /*       */ byte _gap_0x190[0x30];
};

struct Client_Graphics_Render_Skeleton /* Size=0x100 */
{
    /* 0x000 */ Client_Graphics_ReferencedClassBase ReferencedClassBase;
    /* 0x010 */ Client_Graphics_Render_Skeleton* LinkedListPrevious;
    /* 0x018 */ Client_Graphics_Render_Skeleton* LinkedListNext;
    /* 0x020 */ Client_Graphics_Transform Transform;
    /* 0x050 */ unsigned __int16 PartialSkeletonCount;
    /*       */ byte _gap_0x52[0x2];
    /*       */ byte _gap_0x54[0x4];
    /* 0x058 */ Client_System_Resource_Handle_SkeletonResourceHandle** SkeletonResourceHandles;
    /* 0x060 */ Client_Graphics_Animation_AnimationResourceHandle** AnimationResourceHandles;
    /* 0x068 */ Client_Graphics_Render_PartialSkeleton* PartialSkeletons;
    /*       */ byte _gap_0x70[0x48];
    /* 0x0B8 */ Client_Graphics_Scene_CharacterBase* Owner;
    /*       */ byte _gap_0xC0[0x40];
};

struct Pointer_Client_Graphics_Physics_BoneSimulator /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct StdVector_Pointer_Client_Graphics_Physics_BoneSimulator /* Size=0x18 */
{
    /* 0x00 */ Pointer_Client_Graphics_Physics_BoneSimulator* First;
    /* 0x08 */ Pointer_Client_Graphics_Physics_BoneSimulator* Last;
    /* 0x10 */ Pointer_Client_Graphics_Physics_BoneSimulator* End;
};

struct Client_Graphics_Physics_BoneSimulators /* Size=0x78 */
{
    /* 0x00 */ StdVector_Pointer_Client_Graphics_Physics_BoneSimulator BoneSimulator_1;
    /* 0x18 */ StdVector_Pointer_Client_Graphics_Physics_BoneSimulator BoneSimulator_2;
    /* 0x30 */ StdVector_Pointer_Client_Graphics_Physics_BoneSimulator BoneSimulator_3;
    /* 0x48 */ StdVector_Pointer_Client_Graphics_Physics_BoneSimulator BoneSimulator_4;
    /* 0x60 */ StdVector_Pointer_Client_Graphics_Physics_BoneSimulator BoneSimulator_5;
};

struct Client_Graphics_Physics_BonePhysicsModule /* Size=0x1C0 */
{
    /* 0x000 */ void* vtbl;
    /*       */ byte _gap_0x8[0x8];
    /* 0x010 */ Common_Math_Matrix4x4 SkeletonWorldMatrix;
    /* 0x050 */ Common_Math_Matrix4x4 SkeletonInvWorldMatrix;
    /* 0x090 */ float WindScale;
    /* 0x094 */ float WindVariation;
    /* 0x098 */ Client_Graphics_Render_Skeleton* Skeleton;
    /* 0x0A0 */ Client_Graphics_Physics_BoneSimulators BoneSimulators;
    /*       */ byte _gap_0x118[0xA8];
};

struct Client_Graphics_Scene_CharacterBase /* Size=0x8F0 */
{
    union {
    /* 0x000 */ Client_Graphics_Scene_DrawObject DrawObject;
    /* 0x000 */ Client_Graphics_Scene_CharacterBase_CharacterBaseVTable* VTable;
    } _union_0x0;
    /*       */ byte _gap_0x8[0x88];
    /* 0x090 */ byte UnkFlags_01;
    /* 0x091 */ byte UnkFlags_02;
    /* 0x092 */ byte UnkFlags_03;
    /*       */ byte _gap_0x93;
    /*       */ byte _gap_0x94[0x4];
    /* 0x098 */ __int32 SlotCount;
    /*       */ byte _gap_0x9C[0x4];
    /* 0x0A0 */ Client_Graphics_Render_Skeleton* Skeleton;
    /* 0x0A8 */ void** ModelArray;
    /*       */ byte _gap_0xB0[0x98];
    /* 0x148 */ void* PostBoneDeformer;
    /* 0x150 */ Client_Graphics_Physics_BonePhysicsModule* BonePhysicsModule;
    /*       */ byte _gap_0x158[0xC8];
    /*       */ byte _gap_0x220[0x4];
    /* 0x224 */ float VfxScale;
    /*       */ byte _gap_0x228[0x18];
    /* 0x240 */ void* CharacterDataCB;
    /*       */ byte _gap_0x248[0x68];
    /* 0x2B0 */ float WeatherWetness;
    /* 0x2B4 */ float SwimmingWetness;
    /* 0x2B8 */ float WetnessDepth;
    /* 0x2BC */ float ForcedWetness;
    /*       */ byte _gap_0x2C0[0x8];
    /* 0x2C8 */ unsigned __int32 HasModelInSlotLoaded;
    /* 0x2CC */ unsigned __int32 HasModelFilesInSlotLoaded;
    /* 0x2D0 */ void* TempData;
    /* 0x2D8 */ void* TempSlotData;
    /*       */ byte _gap_0x2E0[0x8];
    /* 0x2E8 */ void** MaterialArray;
    /* 0x2F0 */ void* EID;
    /* 0x2F8 */ void** IMCArray;
    /*       */ byte _gap_0x300[0x5F0];
};

struct Client_Graphics_Scene_Demihuman /* Size=0x978 */
{
    /* 0x000 */ Client_Graphics_Scene_CharacterBase CharacterBase;
    /*       */ byte _gap_0x8F0[0x88];
};

struct Client_Graphics_Scene_EnvLocation /* Size=0xB0 */
{
    /* 0x00 */ Client_Graphics_Scene_DrawObject DrawObject;
    /*      */ byte _gap_0x90[0x20];
};

struct Client_Graphics_Scene_EnvScene /* Size=0x790 */
{
    /*       */ byte _gap_0x0[0xB0];
    /* 0x0B0 */ byte EnvSpaces[0x680];
    /*       */ byte _gap_0x730[0x60];
};

struct Client_Graphics_Scene_EnvSpace /* Size=0xD0 */
{
    /* 0x00 */ Client_Graphics_Scene_DrawObject DrawObject;
    /*      */ byte _gap_0x90[0x20];
    /* 0xB0 */ Client_Graphics_Scene_EnvLocation* EnvLocation;
    /*      */ byte _gap_0xB8[0x18];
};

struct Client_Graphics_Scene_Monster /* Size=0x900 */
{
    /* 0x000 */ Client_Graphics_Scene_CharacterBase CharacterBase;
    /*       */ byte _gap_0x8F0[0x10];
};

enum Client_Graphics_Scene_ObjectType0x4 /* Size=0x4 */
{
    Object = 0,
    Terrain = 1,
    BgObject = 2,
    CharacterBase = 3,
    VfxObject = 4,
    Light = 5,
    Unk_Type6 = 6,
    EnvSpace = 7,
    EnvLocation = 8,
    Unk_Type9 = 9
};

struct Client_Graphics_Scene_Weapon /* Size=0x920 */
{
    /* 0x000 */ Client_Graphics_Scene_CharacterBase CharacterBase;
    /* 0x8F0 */ unsigned __int16 ModelSetId;
    /* 0x8F2 */ unsigned __int16 SecondaryId;
    /* 0x8F4 */ unsigned __int16 Variant;
    /* 0x8F6 */ unsigned __int16 ModelUnknown;
    /*       */ byte _gap_0x8F8[0x2];
    /* 0x8FA */ byte MaterialId;
    /* 0x8FB */ byte DecalId;
    /*       */ byte _gap_0x8FC[0x2];
    /* 0x8FE */ byte VfxId;
    /*       */ byte _gap_0x8FF;
    /*       */ byte _gap_0x900[0x20];
};

struct Client_Graphics_Scene_World /* Size=0x160 */
{
    /* 0x000 */ Client_Graphics_Scene_Object Object;
    /*       */ byte _gap_0x80[0xE0];
};

struct Client_Graphics_Physics_BoneSimulator /* Size=0x100 */
{
    /* 0x000 */ void* vtbl;
    /*       */ byte _gap_0x8[0x8];
    /* 0x010 */ unsigned __int32 PhysicsGroup;
    /*       */ byte _gap_0x14[0x4];
    /* 0x018 */ Client_Graphics_Render_Skeleton* Skeleton;
    /* 0x020 */ Common_Math_Vector3 CharacterPosition;
    /* 0x030 */ Common_Math_Vector3 Gravity;
    /* 0x040 */ Common_Math_Vector3 Wind;
    /*       */ byte _gap_0x50[0xB0];
};

struct Client_Graphics_Render_Manager /* Size=0x2D710 */
{
    /* 0x00000 */ void* Vtbl;
    /* 0x00008 */ byte ViewArray[0xB400];
    /*         */ byte _gap_0xB408[0x22308];
};

struct Client_Graphics_Render_OffscreenRenderingManager /* Size=0x190 */
{
    /* 0x000 */ void* vtbl;
    /* 0x008 */ void* JobSystem_vtbl;
    /*       */ byte _gap_0x10[0xB8];
    /* 0x0C8 */ void* Camera_1;
    /* 0x0D0 */ void* Camera_2;
    /* 0x0D8 */ void* Camera_3;
    /* 0x0E0 */ void* Camera_4;
    /*       */ byte _gap_0xE8[0xA8];
};

struct Client_Graphics_Render_RenderTargetManager /* Size=0x480 */
{
    /* 0x000 */ void* vtbl;
    /* 0x008 */ Client_Graphics_Render_Notifier Notifier;
    /* 0x020 */ byte RenderTargetArray[0x208];
    /*       */ byte _gap_0x228[0x20];
    /* 0x248 */ unsigned __int32 Resolution_Width;
    /* 0x24C */ unsigned __int32 Resolution_Height;
    /* 0x250 */ unsigned __int32 ShadowMap_Width;
    /* 0x254 */ unsigned __int32 ShadowMap_Height;
    /* 0x258 */ unsigned __int32 NearShadowMap_Width;
    /* 0x25C */ unsigned __int32 NearShadowMap_Height;
    /* 0x260 */ unsigned __int32 FarShadowMap_Width;
    /* 0x264 */ unsigned __int32 FarShadowMap_Height;
    /* 0x268 */ bool UnkBool_1;
    /*       */ byte _gap_0x269;
    /*       */ byte _gap_0x26A[0x2];
    /*       */ byte _gap_0x26C[0x4];
    /* 0x270 */ byte RenderTargetArray2[0x188];
    /*       */ byte _gap_0x3F8[0x88];
};

struct Client_Graphics_Render_ShadowCamera /* Size=0x150 */
{
    /* 0x000 */ Client_Graphics_Render_Camera Camera;
    /*       */ byte _gap_0x130[0x20];
};

struct Client_Graphics_Render_SubView /* Size=0x58 */
{
    /* 0x00 */ void* Vtbl;
    /* 0x08 */ unsigned __int32 Flags;
    /*      */ byte _gap_0xC[0x4];
    /* 0x10 */ Common_Math_Rectangle ViewportRegion;
    /* 0x20 */ void* Camera;
    /* 0x28 */ Client_Graphics_Render_Texture* RenderTarget_1;
    /* 0x30 */ Client_Graphics_Render_Texture* RenderTarget_2;
    /* 0x38 */ Client_Graphics_Render_Texture* RenderTarget_3;
    /* 0x40 */ Client_Graphics_Render_Texture* RenderTarget_4;
    /* 0x48 */ unsigned __int32 RenderTargetUsedCount;
    /*      */ byte _gap_0x4C[0x4];
    /* 0x50 */ Client_Graphics_Render_Texture* DepthStencil;
};

struct Client_Graphics_Render_View /* Size=0x5A0 */
{
    /* 0x000 */ void* Vtbl;
    /* 0x008 */ unsigned __int32 Flags;
    /*       */ byte _gap_0xC[0x4];
    /* 0x010 */ Common_Math_Rectangle CanvasRegion;
    /* 0x020 */ byte SubViewArray[0x580];
};

struct Client_Graphics_Kernel_CVector; /* Size=unknown due to generic type with parameters */
struct Client_Graphics_Kernel_SwapChain /* Size=0x70 */
{
    /*      */ byte _gap_0x0[0x38];
    /* 0x38 */ unsigned __int32 Width;
    /* 0x3C */ unsigned __int32 Height;
    /*      */ byte _gap_0x40[0x18];
    /* 0x58 */ Client_Graphics_Render_Texture* BackBuffer;
    /* 0x60 */ Client_Graphics_Render_Texture* DepthStencil;
    /* 0x68 */ void* DXGISwapChain;
};

struct Client_Graphics_Kernel_Device /* Size=0x258 */
{
    /*       */ byte _gap_0x0[0x8];
    /* 0x008 */ void* ContextArray;
    /* 0x010 */ void* RenderThread;
    /*       */ byte _gap_0x18[0x58];
    /* 0x070 */ Client_Graphics_Kernel_SwapChain* SwapChain;
    /*       */ byte _gap_0x78[0x2];
    /* 0x07A */ byte RequestResolutionChange;
    /*       */ byte _gap_0x7B;
    /*       */ byte _gap_0x7C[0x4];
    /*       */ byte _gap_0x80[0x8];
    /* 0x088 */ unsigned __int32 Width;
    /* 0x08C */ unsigned __int32 Height;
    /* 0x090 */ float AspectRatio;
    /* 0x094 */ float GammaCorrection;
    /* 0x098 */ __int32 ColorFilter;
    /* 0x09C */ float ColorFilterRange;
    /*       */ byte _gap_0xA0[0x120];
    /* 0x1C0 */ unsigned __int32 NewWidth;
    /* 0x1C4 */ unsigned __int32 NewHeight;
    /*       */ byte _gap_0x1C8[0x58];
    /* 0x220 */ __int32 D3DFeatureLevel;
    /*       */ byte _gap_0x224[0x4];
    /* 0x228 */ void* DXGIFactory;
    /* 0x230 */ void* DXGIOutput;
    /* 0x238 */ void* D3D11Forwarder;
    /* 0x240 */ void* D3D11DeviceContext;
    /*       */ byte _gap_0x248[0x8];
    /* 0x250 */ void* ImmediateContext;
};

struct Client_Graphics_Kernel_PixelShader /* Size=0x1 */
{
    /*     */ byte _gap_0x0;
};

struct Pointer_Client_Graphics_Kernel_VertexShader /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct StdVector_Pointer_Client_Graphics_Kernel_VertexShader /* Size=0x18 */
{
    /* 0x00 */ Pointer_Client_Graphics_Kernel_VertexShader* First;
    /* 0x08 */ Pointer_Client_Graphics_Kernel_VertexShader* Last;
    /* 0x10 */ Pointer_Client_Graphics_Kernel_VertexShader* End;
};

struct Client_Graphics_Kernel_CVector_Pointer_Client_Graphics_Kernel_VertexShader /* Size=0x20 */
{
    /* 0x00 */ void* vtbl;
    /* 0x08 */ StdVector_Pointer_Client_Graphics_Kernel_VertexShader Vector;
};

struct Pointer_Client_Graphics_Kernel_PixelShader /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct StdVector_Pointer_Client_Graphics_Kernel_PixelShader /* Size=0x18 */
{
    /* 0x00 */ Pointer_Client_Graphics_Kernel_PixelShader* First;
    /* 0x08 */ Pointer_Client_Graphics_Kernel_PixelShader* Last;
    /* 0x10 */ Pointer_Client_Graphics_Kernel_PixelShader* End;
};

struct Client_Graphics_Kernel_CVector_Pointer_Client_Graphics_Kernel_PixelShader /* Size=0x20 */
{
    /* 0x00 */ void* vtbl;
    /* 0x08 */ StdVector_Pointer_Client_Graphics_Kernel_PixelShader Vector;
};

struct Pointer_Client_Graphics_Kernel_ShaderNode /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct StdVector_Pointer_Client_Graphics_Kernel_ShaderNode /* Size=0x18 */
{
    /* 0x00 */ Pointer_Client_Graphics_Kernel_ShaderNode* First;
    /* 0x08 */ Pointer_Client_Graphics_Kernel_ShaderNode* Last;
    /* 0x10 */ Pointer_Client_Graphics_Kernel_ShaderNode* End;
};

struct Client_Graphics_Kernel_CVector_Pointer_Client_Graphics_Kernel_ShaderNode /* Size=0x20 */
{
    /* 0x00 */ void* vtbl;
    /* 0x08 */ StdVector_Pointer_Client_Graphics_Kernel_ShaderNode Vector;
};

struct Client_Graphics_Kernel_ShaderPackage_MaterialElement /* Size=0x8 */
{
    /* 0x0 */ unsigned __int32 CRC;
    /* 0x4 */ unsigned __int16 Offset;
    /* 0x6 */ unsigned __int16 Size;
};

struct Client_Graphics_Kernel_ShaderPackage_ConstantSamplerUnknown /* Size=0xC */
{
    /*     */ byte _gap_0x0[0x8];
    /*     */ byte _gap_0x8[0x4];
};

struct Client_Graphics_Kernel_ShaderPackage /* Size=0x408 */
{
    /* 0x000 */ Client_Graphics_ReferencedClassBase ReferencedClassBase;
    /* 0x010 */ Client_Graphics_Kernel_CVector_Pointer_Client_Graphics_Kernel_VertexShader VertexShaders;
    /* 0x030 */ Client_Graphics_Kernel_CVector_Pointer_Client_Graphics_Kernel_PixelShader PixelShaders;
    /* 0x050 */ Client_Graphics_Kernel_CVector_Pointer_Client_Graphics_Kernel_ShaderNode ShaderNodes;
    /* 0x070 */ unsigned __int16 MaterialConstantBufferSize;
    /*       */ byte _gap_0x72[0x2];
    /* 0x074 */ unsigned __int16 MaterialElementCount;
    /*       */ byte _gap_0x76[0x2];
    /* 0x078 */ unsigned __int16 ConstantCount;
    /*       */ byte _gap_0x7A[0x2];
    /* 0x07C */ unsigned __int16 SamplerCount;
    /*       */ byte _gap_0x7E[0x2];
    /* 0x080 */ unsigned __int16 UnkCount;
    /*       */ byte _gap_0x82[0x2];
    /* 0x084 */ unsigned __int16 SystemKeyCount;
    /*       */ byte _gap_0x86[0x2];
    /* 0x088 */ unsigned __int16 SceneKeyCount;
    /*       */ byte _gap_0x8A[0x2];
    /* 0x08C */ unsigned __int16 MaterialKeyCount;
    /*       */ byte _gap_0x8E[0x2];
    /* 0x090 */ Client_Graphics_Kernel_ShaderPackage_MaterialElement* MaterialElements;
    /* 0x098 */ Client_Graphics_Kernel_ShaderPackage_ConstantSamplerUnknown* Constants;
    /* 0x0A0 */ Client_Graphics_Kernel_ShaderPackage_ConstantSamplerUnknown* Samplers;
    /* 0x0A8 */ Client_Graphics_Kernel_ShaderPackage_ConstantSamplerUnknown* Unknowns;
    /* 0x0B0 */ unsigned __int32* SystemKeys;
    /* 0x0B8 */ unsigned __int32* SceneKeys;
    /* 0x0C0 */ unsigned __int32* MaterialKeys;
    /* 0x0C8 */ unsigned __int32* SystemValues;
    /* 0x0D0 */ unsigned __int32* SceneValues;
    /* 0x0D8 */ unsigned __int32* MaterialValues;
    /* 0x0E0 */ unsigned __int32 SubviewValue1;
    /* 0x0E4 */ unsigned __int32 SubviewValue2;
    /* 0x0E8 */ void* ShaderNodeTreeVtbl;
    /*       */ byte _gap_0xF0[0x318];
};

struct Client_Graphics_Kernel_ShaderNode_ShaderPass /* Size=0x8 */
{
    /* 0x0 */ unsigned __int32 VertexShader;
    /* 0x4 */ unsigned __int32 PixelShader;
};

struct Client_Graphics_Kernel_ShaderNode /* Size=0x38 */
{
    /* 0x00 */ void* vtbl;
    /* 0x08 */ Client_Graphics_Kernel_ShaderPackage* OwnerPackage;
    /* 0x10 */ unsigned __int32 PassNum;
    /* 0x14 */ byte PassIndices[0x10];
    /*      */ byte _gap_0x24[0x4];
    /* 0x28 */ Client_Graphics_Kernel_ShaderNode_ShaderPass* Passes;
    /* 0x30 */ unsigned __int32* ShaderKeys;
};

struct Client_Graphics_Kernel_VertexShader /* Size=0x1 */
{
    /*     */ byte _gap_0x0;
};

struct Client_Graphics_Environment_EnvState /* Size=0x258 */
{
    /*       */ byte _gap_0x0[0x258];
};

struct Client_Graphics_Environment_EnvSimulator /* Size=0x310 */
{
    /*       */ byte _gap_0x0[0x310];
};

struct Client_Graphics_Environment_EnvSoundState /* Size=0x68 */
{
    /*      */ byte _gap_0x0[0x68];
};

struct Client_Game_ComboDetail /* Size=0x8 */
{
    /* 0x0 */ float Timer;
    /* 0x4 */ unsigned __int32 Action;
};

struct Client_Game_ActionManager /* Size=0x7F0 */
{
    /*       */ byte _gap_0x0[0x60];
    /* 0x060 */ Client_Game_ComboDetail Combo;
    /* 0x068 */ bool ActionQueued;
    /*       */ byte _gap_0x69;
    /*       */ byte _gap_0x6A[0x2];
    /* 0x06C */ Client_Game_ActionType0x1 QueuedActionType;
    /*       */ byte _gap_0x6D;
    /*       */ byte _gap_0x6E[0x2];
    /* 0x070 */ unsigned __int32 QueuedActionId;
    /*       */ byte _gap_0x74[0x4];
    /* 0x078 */ Client_Game_Object_GameObjectID QueuedTargetId;
    /* 0x080 */ unsigned __int32 QueueType;
    /*       */ byte _gap_0x84[0x4];
    /*       */ byte _gap_0x88[0xB0];
    /*       */ byte _gap_0x138[0x4];
    /* 0x13C */ unsigned __int32 BlueMageActions[0x18];
    /*       */ byte _gap_0x19C[0x4];
    /*       */ byte _gap_0x1A0[0x650];
};

struct Client_Game_RecastDetail /* Size=0x14 */
{
    /* 0x00 */ byte IsActive;
    /*      */ byte _gap_0x1;
    /*      */ byte _gap_0x2[0x2];
    /* 0x04 */ unsigned __int32 ActionID;
    /* 0x08 */ float Elapsed;
    /* 0x0C */ float Total;
    /*      */ byte _gap_0x10[0x4];
};

enum Client_Game_ActionTimelineSlots0x4 /* Size=0x4 */
{
    Base = 0,
    UpperBody = 1,
    Facial = 2,
    Add = 3,
    Lips = 7,
    Parts1 = 8,
    Parts2 = 9,
    Parts3 = 10,
    Parts4 = 11,
    Overlay = 12
};

struct Client_Game_LobbyCamera /* Size=0x300 */
{
    /* 0x000 */ Client_Game_Camera Camera;
    /*       */ byte _gap_0x2B0[0x48];
    /* 0x2F8 */ void* LobbyExcelSheet;
};

struct Client_Game_Camera3 /* Size=0x300 */
{
    /* 0x000 */ Client_Game_Camera Camera;
    /*       */ byte _gap_0x2B0[0x50];
};

struct Client_Game_LowCutCamera /* Size=0x2E0 */
{
    /* 0x000 */ Client_Game_CameraBase CameraBase;
    /*       */ byte _gap_0x110[0x1D0];
};

struct Client_Game_Camera4 /* Size=0x350 */
{
    /* 0x000 */ Client_Game_CameraBase CameraBase;
    /* 0x110 */ Client_Graphics_Scene_Camera SceneCamera0;
    /* 0x200 */ Client_Graphics_Scene_Camera SceneCamera1;
    /*       */ byte _gap_0x2F0[0x60];
};

struct Client_Game_Gauge_JobGauge /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct Client_Game_Gauge_WhiteMageGauge /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /*      */ byte _gap_0x8[0x2];
    /* 0x0A */ __int16 LilyTimer;
    /* 0x0C */ byte Lily;
    /* 0x0D */ byte BloodLily;
    /*      */ byte _gap_0xE[0x2];
};

struct Client_Game_Gauge_ScholarGauge /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /*      */ byte _gap_0x8[0x2];
    /* 0x0A */ byte Aetherflow;
    /* 0x0B */ byte FairyGauge;
    /* 0x0C */ __int16 SeraphTimer;
    /* 0x0E */ byte DismissedFairy;
    /*      */ byte _gap_0xF;
};

struct Client_Game_Gauge_AstrologianGauge /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ __int16 Timer;
    /*      */ byte _gap_0xA[0x2];
    /*      */ byte _gap_0xC;
    /* 0x0D */ byte Card;
    /* 0x0E */ byte Seals;
    /*      */ byte _gap_0xF;
};

struct Client_Game_Gauge_SageGauge /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ __int16 AddersgallTimer;
    /* 0x0A */ byte Addersgall;
    /* 0x0B */ byte Addersting;
    /* 0x0C */ byte Eukrasia;
    /*      */ byte _gap_0xD;
    /*      */ byte _gap_0xE[0x2];
};

enum Client_Game_Gauge_SongFlags0x1 /* Size=0x1 */
{
    None = 0,
    MagesBallad = 1,
    ArmysPaeon = 2,
    WanderersMinuet = 3,
    MagesBalladLastPlayed = 4,
    ArmysPaeonLastPlayed = 8,
    WanderersMinuetLastPlayed = 12,
    MagesBalladCoda = 16,
    ArmysPaeonCoda = 32,
    WanderersMinuetCoda = 64
};

struct Client_Game_Gauge_BardGauge /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ unsigned __int16 SongTimer;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ byte Repertoire;
    /* 0x0D */ byte SoulVoice;
    /* 0x0E */ Client_Game_Gauge_SongFlags0x1 SongFlags;
    /*      */ byte _gap_0xF;
};

struct Client_Game_Gauge_MachinistGauge /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ __int16 OverheatTimeRemaining;
    /* 0x0A */ __int16 SummonTimeRemaining;
    /* 0x0C */ byte Heat;
    /* 0x0D */ byte Battery;
    /* 0x0E */ byte LastSummonBatteryPower;
    /* 0x0F */ byte TimerActive;
};

struct Client_Game_Gauge_DancerGauge /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ byte Feathers;
    /* 0x09 */ byte Esprit;
    /* 0x0A */ byte DanceSteps[0x4];
    /* 0x0E */ byte StepIndex;
    /*      */ byte _gap_0xF;
};

enum Client_Game_Gauge_EnochianFlags0x1 /* Size=0x1 */
{
    None = 0,
    Enochian = 1,
    Paradox = 2
};

struct Client_Game_Gauge_BlackMageGauge /* Size=0x30 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ __int16 EnochianTimer;
    /* 0x0A */ __int16 ElementTimeRemaining;
    /* 0x0C */ signed __int8 ElementStance;
    /* 0x0D */ byte UmbralHearts;
    /* 0x0E */ byte PolyglotStacks;
    /* 0x0F */ Client_Game_Gauge_EnochianFlags0x1 EnochianFlags;
    /*      */ byte _gap_0x10[0x20];
};

enum Client_Game_Gauge_AetherFlags0x1 /* Size=0x1 */
{
    None = 0,
    Aetherflow1 = 1,
    Aetherflow2 = 2,
    Aetherflow = 3,
    IfritAttuned = 4,
    TitanAttuned = 8,
    GarudaAttuned = 12,
    PhoenixReady = 16,
    IfritReady = 32,
    TitanReady = 64,
    GarudaReady = 128
};

struct Client_Game_Gauge_SummonerGauge /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ unsigned __int16 SummonTimer;
    /* 0x0A */ unsigned __int16 AttunementTimer;
    /* 0x0C */ byte ReturnSummon;
    /* 0x0D */ byte ReturnSummonGlam;
    /* 0x0E */ byte Attunement;
    /* 0x0F */ Client_Game_Gauge_AetherFlags0x1 AetherFlags;
};

struct Client_Game_Gauge_RedMageGauge /* Size=0x50 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ byte WhiteMana;
    /* 0x09 */ byte BlackMana;
    /* 0x0A */ byte ManaStacks;
    /*      */ byte _gap_0xB;
    /*      */ byte _gap_0xC[0x4];
    /*      */ byte _gap_0x10[0x40];
};

enum Client_Game_Gauge_BeastChakraType0x1 /* Size=0x1 */
{
    None = 0,
    Coeurl = 1,
    OpoOpo = 2,
    Raptor = 3
};

enum Client_Game_Gauge_NadiFlags0x1 /* Size=0x1 */
{
    Lunar = 2,
    Solar = 4
};

struct Client_Game_Gauge_MonkGauge /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ byte Chakra;
    /* 0x09 */ Client_Game_Gauge_BeastChakraType0x1 BeastChakra1;
    /* 0x0A */ Client_Game_Gauge_BeastChakraType0x1 BeastChakra2;
    /* 0x0B */ Client_Game_Gauge_BeastChakraType0x1 BeastChakra3;
    /* 0x0C */ Client_Game_Gauge_NadiFlags0x1 Nadi;
    /*      */ byte _gap_0xD;
    /* 0x0E */ unsigned __int16 BlitzTimeRemaining;
};

struct Client_Game_Gauge_DragoonGauge /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ __int16 LotdTimer;
    /* 0x0A */ byte LotdState;
    /* 0x0B */ byte EyeCount;
    /* 0x0C */ byte FirstmindsFocusCount;
    /*      */ byte _gap_0xD;
    /*      */ byte _gap_0xE[0x2];
};

struct Client_Game_Gauge_NinjaGauge /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ unsigned __int16 HutonTimer;
    /* 0x0A */ byte Ninki;
    /* 0x0B */ byte HutonManualCasts;
    /*      */ byte _gap_0xC[0x4];
};

enum Client_Game_Gauge_KaeshiAction0x1 /* Size=0x1 */
{
    Higanbana = 1,
    Goken = 2,
    Setsugekka = 3,
    Namikiri = 4
};

enum Client_Game_Gauge_SenFlags0x1 /* Size=0x1 */
{
    None = 0,
    Setsu = 1,
    Getsu = 2,
    Ka = 4
};

struct Client_Game_Gauge_SamuraiGauge /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /*      */ byte _gap_0x8[0x2];
    /* 0x0A */ Client_Game_Gauge_KaeshiAction0x1 Kaeshi;
    /* 0x0B */ byte Kenki;
    /* 0x0C */ byte MeditationStacks;
    /* 0x0D */ Client_Game_Gauge_SenFlags0x1 SenFlags;
    /*      */ byte _gap_0xE[0x2];
};

struct Client_Game_Gauge_ReaperGauge /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ byte Soul;
    /* 0x09 */ byte Shroud;
    /* 0x0A */ unsigned __int16 EnshroudedTimeRemaining;
    /* 0x0C */ byte LemureShroud;
    /* 0x0D */ byte VoidShroud;
    /*      */ byte _gap_0xE[0x2];
};

struct Client_Game_Gauge_DarkKnightGauge /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ byte Blood;
    /*      */ byte _gap_0x9;
    /* 0x0A */ unsigned __int16 DarksideTimer;
    /* 0x0C */ byte DarkArtsState;
    /*      */ byte _gap_0xD;
    /* 0x0E */ unsigned __int16 ShadowTimer;
};

struct Client_Game_Gauge_PaladinGauge /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ byte OathGauge;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /*      */ byte _gap_0xC[0x4];
};

struct Client_Game_Gauge_WarriorGauge /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ byte BeastGauge;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /*      */ byte _gap_0xC[0x4];
};

struct Client_Game_Gauge_GunbreakerGauge /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ byte Ammo;
    /*      */ byte _gap_0x9;
    /* 0x0A */ __int16 MaxTimerDuration;
    /* 0x0C */ byte AmmoComboStep;
    /*      */ byte _gap_0xD;
    /*      */ byte _gap_0xE[0x2];
};

struct Client_Game_JobGaugeManager /* Size=0x60 */
{
    /* 0x00 */ Client_Game_Gauge_JobGauge* CurrentGauge;
    union {
    /* 0x08 */ Client_Game_Gauge_JobGauge EmptyGauge;
    /* 0x08 */ Client_Game_Gauge_WhiteMageGauge WhiteMage;
    /* 0x08 */ Client_Game_Gauge_ScholarGauge Scholar;
    /* 0x08 */ Client_Game_Gauge_AstrologianGauge Astrologian;
    /* 0x08 */ Client_Game_Gauge_SageGauge Sage;
    /* 0x08 */ Client_Game_Gauge_BardGauge Bard;
    /* 0x08 */ Client_Game_Gauge_MachinistGauge Machinist;
    /* 0x08 */ Client_Game_Gauge_DancerGauge Dancer;
    /* 0x08 */ Client_Game_Gauge_BlackMageGauge BlackMage;
    /* 0x08 */ Client_Game_Gauge_SummonerGauge Summoner;
    /* 0x08 */ Client_Game_Gauge_RedMageGauge RedMage;
    /* 0x08 */ Client_Game_Gauge_MonkGauge Monk;
    /* 0x08 */ Client_Game_Gauge_DragoonGauge Dragoon;
    /* 0x08 */ Client_Game_Gauge_NinjaGauge Ninja;
    /* 0x08 */ Client_Game_Gauge_SamuraiGauge Samurai;
    /* 0x08 */ Client_Game_Gauge_ReaperGauge Reaper;
    /* 0x08 */ Client_Game_Gauge_DarkKnightGauge DarkKnight;
    /* 0x08 */ Client_Game_Gauge_PaladinGauge Paladin;
    /* 0x08 */ Client_Game_Gauge_WarriorGauge Warrior;
    /* 0x08 */ Client_Game_Gauge_GunbreakerGauge Gunbreaker;
    } _union_0x8;
    /*      */ byte _gap_0x10[0x48];
    /* 0x58 */ byte ClassJobID;
    /*      */ byte _gap_0x59;
    /*      */ byte _gap_0x5A[0x2];
    /*      */ byte _gap_0x5C[0x4];
};

struct Client_Game_GameMain /* Size=0x58D0 */
{
    /* 0x0000 */ unsigned __int32 ActiveFestivals[0x4];
    /*        */ byte _gap_0x10[0x30];
    /* 0x0040 */ unsigned __int32 QueuedFestivals[0x4];
    /*        */ byte _gap_0x50[0xA88];
    /* 0x0AD8 */ Client_Game_JobGaugeManager JobGaugeManager;
    /*        */ byte _gap_0xB38[0x34D8];
    /* 0x4010 */ unsigned __int32 CurrentTerritoryTypeId;
    /* 0x4014 */ unsigned __int32 CurrentTerritoryIntendedUseId;
    /*        */ byte _gap_0x4018[0x4];
    /* 0x401C */ unsigned __int16 CurrentContentFinderConditionId;
    /*        */ byte _gap_0x401E[0x2];
    /*        */ byte _gap_0x4020[0x8];
    /* 0x4028 */ unsigned __int32 CurrentMapId;
    /*        */ byte _gap_0x402C[0x4];
    /*        */ byte _gap_0x4030[0x18A0];
};

struct Client_Game_InventoryContainer /* Size=0x18 */
{
    /* 0x00 */ Client_Game_InventoryItem* Items;
    /* 0x08 */ Client_Game_InventoryType0x4 Type;
    /* 0x0C */ unsigned __int32 Size;
    /* 0x10 */ byte Loaded;
    /*      */ byte _gap_0x11;
    /*      */ byte _gap_0x12[0x2];
    /*      */ byte _gap_0x14[0x4];
};

struct Client_Game_InventoryManager /* Size=0x3620 */
{
    /*        */ byte _gap_0x0[0x1E08];
    /* 0x1E08 */ Client_Game_InventoryContainer* Inventories;
    /*        */ byte _gap_0x1E10[0x1810];
};

struct Client_Game_MonsterNoteManager /* Size=0x460 */
{
    /* 0x000 */ byte RankDataArray[0x300];
    /*       */ byte _gap_0x300[0x160];
};

struct Client_Game_MonsterNoteRankInfo /* Size=0x40 */
{
    /* 0x00 */ byte RankDataArray[0x28];
    /* 0x28 */ __int64 Flags;
    /* 0x30 */ __int32 Rank;
    /* 0x34 */ __int32 Unknown2;
    /* 0x38 */ __int32 Index;
    /* 0x3C */ __int32 Unknown3;
};

struct Client_Game_RankData /* Size=0x4 */
{
    /* 0x0 */ byte Counts[0x4];
};

struct Client_Game_QuestManager_QuestListArray /* Size=0x2D0 */
{
    /*       */ byte _gap_0x0[0x2D0];
};

struct Client_Game_QuestManager /* Size=0xF00 */
{
    union {
    /* 0x000 */ Client_Game_QuestManager_QuestListArray Quest;
    /* 0x000 */ byte NormalQuests[0x2D0];
    } _union_0x10;
    /*       */ byte _gap_0x8[0x560];
    /* 0x568 */ byte DailyQuests[0xC0];
    /*       */ byte _gap_0x628[0x30];
    /* 0x658 */ byte TrackedQuests[0x50];
    /*       */ byte _gap_0x6A8[0x4C8];
    /* 0xB70 */ byte BeastReputation[0x110];
    /* 0xC80 */ byte LeveQuests[0x180];
    /* 0xE00 */ byte NumLeveAllowances;
    /*       */ byte _gap_0xE01;
    /*       */ byte _gap_0xE02[0x2];
    /*       */ byte _gap_0xE04[0x4];
    /*       */ byte _gap_0xE08[0xE0];
    /* 0xEE8 */ byte NumAcceptedQuests;
    /*       */ byte _gap_0xEE9;
    /*       */ byte _gap_0xEEA[0x2];
    /*       */ byte _gap_0xEEC[0x4];
    /*       */ byte _gap_0xEF0[0x8];
    /* 0xEF8 */ byte NumAcceptedLeveQuests;
    /*       */ byte _gap_0xEF9;
    /*       */ byte _gap_0xEFA[0x2];
    /*       */ byte _gap_0xEFC[0x4];
};

struct Client_Game_RaceChocoboManager /* Size=0x26 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ byte MaximumSpeed;
    /* 0x09 */ byte Acceleration;
    /* 0x0A */ byte Endurance;
    /* 0x0B */ byte Stamina;
    /* 0x0C */ byte Cunning;
    /* 0x0D */ byte Parameters;
    /* 0x0E */ __int16 Father;
    /* 0x10 */ __int16 Mother;
    /* 0x12 */ byte AbilityHereditary;
    /* 0x13 */ byte AbilityLearned;
    /*      */ byte _gap_0x14[0x2];
    /* 0x16 */ __int16 NameFirst;
    /* 0x18 */ __int16 NameLast;
    /* 0x1A */ byte Rank;
    /*      */ byte _gap_0x1B;
    /* 0x1C */ __int16 ExperienceCurrent;
    /* 0x1E */ __int16 ExperienceMax;
    /* 0x20 */ byte Color;
    /* 0x21 */ byte GearHead;
    /* 0x22 */ byte GearBody;
    /* 0x23 */ byte GearLegs;
    /* 0x24 */ byte SessionsAvailable;
    /*      */ byte _gap_0x25;
};

struct Client_Game_ReconstructionBoxData /* Size=0xA8 */
{
    /*      */ byte _gap_0x0[0xA0];
    /* 0xA0 */ unsigned __int16 Donated;
    /*      */ byte _gap_0xA2[0x2];
    /*      */ byte _gap_0xA4[0x2];
    /* 0xA6 */ unsigned __int16 Allowance;
};

struct Client_Game_ReconstructionBoxManager /* Size=0x10 */
{
    /* 0x00 */ Client_Game_ReconstructionBoxData* ReconstructionBoxData;
    /* 0x08 */ void* UnknownDataPointer;
};

enum Client_Game_RetainerManager_RetainerList_RetainerTown0x1 /* Size=0x1 */
{
    LimsaLominsa = 1,
    Gridania = 2,
    Uldah = 3,
    Ishgard = 4,
    Kugane = 7,
    Crystarium = 10,
    OldSharlayan = 12
};

struct Client_Game_RetainerManager_RetainerList_Retainer /* Size=0x48 */
{
    /* 0x00 */ unsigned __int64 RetainerID;
    /* 0x08 */ byte Name[0x20];
    /* 0x28 */ bool Available;
    /* 0x29 */ byte ClassJob;
    /* 0x2A */ byte Level;
    /* 0x2B */ byte ItemCount;
    /* 0x2C */ unsigned __int32 Gil;
    /* 0x30 */ Client_Game_RetainerManager_RetainerList_RetainerTown0x1 Town;
    /* 0x31 */ byte MarkerItemCount;
    /*      */ byte _gap_0x32[0x2];
    /* 0x34 */ unsigned __int32 MarketExpire;
    /* 0x38 */ unsigned __int32 VentureID;
    /* 0x3C */ unsigned __int32 VentureComplete;
    /*      */ byte _gap_0x40[0x8];
};

struct Client_Game_RetainerManager_RetainerList /* Size=0x2D0 */
{
    /* 0x000 */ Client_Game_RetainerManager_RetainerList_Retainer Retainer0;
    /* 0x048 */ Client_Game_RetainerManager_RetainerList_Retainer Retainer1;
    /* 0x090 */ Client_Game_RetainerManager_RetainerList_Retainer Retainer2;
    /* 0x0D8 */ Client_Game_RetainerManager_RetainerList_Retainer Retainer3;
    /* 0x120 */ Client_Game_RetainerManager_RetainerList_Retainer Retainer4;
    /* 0x168 */ Client_Game_RetainerManager_RetainerList_Retainer Retainer5;
    /* 0x1B0 */ Client_Game_RetainerManager_RetainerList_Retainer Retainer6;
    /* 0x1F8 */ Client_Game_RetainerManager_RetainerList_Retainer Retainer7;
    /* 0x240 */ Client_Game_RetainerManager_RetainerList_Retainer Retainer8;
    /* 0x288 */ Client_Game_RetainerManager_RetainerList_Retainer Retainer9;
};

struct Client_Game_RetainerManager /* Size=0x2EC */
{
    /* 0x000 */ Client_Game_RetainerManager_RetainerList Retainer;
    /* 0x2D0 */ byte DisplayOrder[0xA];
    /* 0x2DA */ byte Ready;
    /* 0x2DB */ byte MaxRetainerEntitlement;
    /*       */ byte _gap_0x2DC[0x4];
    /* 0x2E0 */ unsigned __int64 LastSelectedRetainerId;
    /* 0x2E8 */ unsigned __int32 RetainerObjectId;
};

struct Client_Game_SatisfactionSupplyManager /* Size=0x31F */
{
    /*       */ byte _gap_0x0[0x10];
    /*       */ byte _gap_0x10[0x4];
    /* 0x014 */ byte SatisfactionRankArray[0x9];
    /* 0x01D */ byte UsedAllowanceArray[0x9];
    /*       */ byte _gap_0x26[0x2];
    /*       */ byte _gap_0x28[0x2F0];
    /*       */ byte _gap_0x318[0x4];
    /*       */ byte _gap_0x31C[0x2];
    /*       */ byte _gap_0x31E;
};

enum Client_Game_SatisfactionSupplyNpc0x4 /* Size=0x4 */
{
    ZholeAliapoh = 1,
    Mnaago = 2,
    Kurenai = 3,
    Adkiragh = 4,
    KaiShirr = 5,
    EhllTou = 6,
    Charlemend = 7,
    Ameliance = 8,
    Anden = 9
};

struct Client_Game_Status /* Size=0xC */
{
    /* 0x0 */ unsigned __int16 StatusID;
    /* 0x2 */ unsigned __int16 Param;
    /* 0x4 */ float RemainingTime;
    /* 0x8 */ unsigned __int32 SourceID;
};

struct Client_Game_UI_AreaInstance /* Size=0x28 */
{
    /*      */ byte _gap_0x0[0x10];
    /* 0x10 */ void* vtbl;
    /*      */ byte _gap_0x18[0x8];
    /* 0x20 */ __int32 Instance;
    /*      */ byte _gap_0x24[0x4];
};

struct Client_Game_UI_Buddy_BuddyMember /* Size=0x198 */
{
    /* 0x000 */ unsigned __int32 ObjectID;
    /* 0x004 */ unsigned __int32 CurrentHealth;
    /* 0x008 */ unsigned __int32 MaxHealth;
    /* 0x00C */ byte DataID;
    /* 0x00D */ byte Synced;
    /*       */ byte _gap_0xE[0x2];
    /* 0x010 */ Client_Game_StatusManager StatusManager;
};

struct Client_Game_UI_Buddy /* Size=0xED8 */
{
    /* 0x000 */ Client_Game_UI_Buddy_BuddyMember Companion;
    /* 0x198 */ Client_Game_UI_Buddy_BuddyMember Pet;
    /* 0x330 */ byte BattleBuddies[0xB28];
    /* 0xE58 */ Client_Game_UI_Buddy_BuddyMember* CompanionPtr;
    /* 0xE60 */ float TimeLeft;
    /*       */ byte _gap_0xE64[0x4];
    /*       */ byte _gap_0xE68[0x8];
    /*       */ byte _gap_0xE70[0x2];
    /*       */ byte _gap_0xE72;
    /* 0xE73 */ byte Name[0x15];
    /* 0xE88 */ unsigned __int32 CurrentXP;
    /* 0xE8C */ byte Rank;
    /* 0xE8D */ byte Stars;
    /* 0xE8E */ byte SkillPoints;
    /* 0xE8F */ byte DefenderLevel;
    /* 0xE90 */ byte AttackerLevel;
    /* 0xE91 */ byte HealerLevel;
    /* 0xE92 */ byte ActiveCommand;
    /* 0xE93 */ byte FavoriteFeed;
    /* 0xE94 */ byte CurrentColorStainId;
    /* 0xE95 */ byte Mounted;
    /*       */ byte _gap_0xE96[0x2];
    /*       */ byte _gap_0xE98[0x8];
    /* 0xEA0 */ Client_Game_UI_Buddy_BuddyMember* PetPtr;
    /*       */ byte _gap_0xEA8[0x8];
    /* 0xEB0 */ Client_Game_UI_Buddy_BuddyMember* SquadronTrustPtr;
    /*       */ byte _gap_0xEB8[0x20];
};

struct Client_Game_UI_Cabinet /* Size=0x48 */
{
    /* 0x00 */ __int32 CabinetLoaded;
    /* 0x04 */ byte UnlockedItems[0x41];
    /*      */ byte _gap_0x45;
    /*      */ byte _gap_0x46[0x2];
};

enum Client_Game_UI_ContentsFinder_LootRule0x1 /* Size=0x1 */
{
    Normal = 0,
    GreedOnly = 1,
    Lootmaster = 2
};

struct Client_Game_UI_ContentsFinder /* Size=0xB0 */
{
    /* 0x00 */ void* vtbl;
    /*      */ byte _gap_0x8[0x10];
    /* 0x18 */ Client_Game_UI_ContentsFinder_LootRule0x1 LootRules;
    /* 0x19 */ bool IsUnrestrictedParty;
    /* 0x1A */ bool IsMinimalIL;
    /* 0x1B */ bool IsSilenceEcho;
    /* 0x1C */ bool IsExplorerMode;
    /* 0x1D */ bool IsLevelSync;
    /* 0x1E */ bool IsLimitedLevelingRoulette;
    /*      */ byte _gap_0x1F;
    /*      */ byte _gap_0x20[0x40];
    /* 0x60 */ __int32 EnteredQueueTimestamp;
    /*      */ byte _gap_0x64[0x4];
    /*      */ byte _gap_0x68[0x10];
    /*      */ byte _gap_0x78[0x4];
    /* 0x7C */ byte PositionInQueue;
    /*      */ byte _gap_0x7D;
    /*      */ byte _gap_0x7E[0x2];
    /*      */ byte _gap_0x80[0x4];
    /*      */ byte _gap_0x84[0x2];
    /*      */ byte _gap_0x86;
    /* 0x87 */ byte AverageWaitTime;
    /*      */ byte _gap_0x88[0x28];
};

struct Client_Game_UI_ContentsNote /* Size=0xA8 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ byte CompletionFlags[0xB];
    /*      */ byte _gap_0x13;
    /*      */ byte _gap_0x14[0x4];
    /*      */ byte _gap_0x18[0x4];
    /* 0x1C */ byte SelectedTab;
    /* 0x1D */ byte DisplayCount;
    /*      */ byte _gap_0x1E[0x2];
    /* 0x20 */ __int32 DisplayID[0x11];
    /* 0x64 */ __int32 DisplayStatus[0x11];
};

struct Client_Game_UI_Hate /* Size=0x108 */
{
    /* 0x000 */ byte HateArray[0x100];
    /* 0x100 */ __int32 HateArrayLength;
    /* 0x104 */ unsigned __int32 HateTargetId;
};

struct Client_Game_UI_HateInfo /* Size=0x8 */
{
    /* 0x0 */ unsigned __int32 ObjectId;
    /* 0x4 */ __int32 Enmity;
};

struct Client_Game_UI_Hater /* Size=0x908 */
{
    /* 0x000 */ byte HaterArray[0x900];
    /* 0x900 */ __int32 HaterArrayLength;
    /*       */ byte _gap_0x904[0x4];
};

struct Client_Game_UI_HaterInfo /* Size=0x48 */
{
    /* 0x00 */ byte Name[0x40];
    /* 0x40 */ unsigned __int32 ObjectId;
    /* 0x44 */ __int32 Enmity;
};

struct Client_Game_UI_Hotbar /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct Client_Game_UI_LimitBreakController /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ byte BarCount;
    /*      */ byte _gap_0x9;
    /* 0x0A */ unsigned __int16 CurrentValue;
    /* 0x0C */ unsigned __int32 BarValue;
};

struct Client_Game_UI_Loot /* Size=0x6A0 */
{
    /*       */ byte _gap_0x0[0x10];
    /* 0x010 */ byte ItemArray[0x400];
    /* 0x410 */ __int32 SelectedIndex;
    /*       */ byte _gap_0x414[0x4];
    /* 0x418 */ unsigned __int32 UnkObjectId;
    /*       */ byte _gap_0x41C[0x4];
    /*       */ byte _gap_0x420[0x258];
    /* 0x678 */ unsigned __int32 UnkObjectId2;
    /*       */ byte _gap_0x67C[0x4];
    /*       */ byte _gap_0x680[0x20];
};

enum Client_Game_UI_RollState0x4 /* Size=0x4 */
{
    Unrolled = 0,
    Available = 1,
    Rolled = 17,
    Unavailable = 21,
    Unknown = 28
};

enum Client_Game_UI_RollResult0x4 /* Size=0x4 */
{
    UnAwarded = 0,
    Greeded = 2,
    Passed = 5,
    Awarded = 6,
    Unknown = 7
};

enum Client_Game_UI_LootMode0x4 /* Size=0x4 */
{
    Normal = 0,
    GreedOnly = 1,
    Unavailable = 2,
    LootMasterGreedOnly = 3,
    Unknown = 4
};

struct Client_Game_UI_LootItem /* Size=0x40 */
{
    /* 0x00 */ unsigned __int32 ChestObjectId;
    /* 0x04 */ unsigned __int32 ChestItemIndex;
    /* 0x08 */ unsigned __int32 ItemId;
    /* 0x0C */ unsigned __int16 ItemCount;
    /*      */ byte _gap_0xE[0x2];
    /*      */ byte _gap_0x10[0x10];
    /* 0x20 */ Client_Game_UI_RollState0x4 RollState;
    /* 0x24 */ Client_Game_UI_RollResult0x4 RollResult;
    /* 0x28 */ unsigned __int32 RollValue;
    /* 0x2C */ float Time;
    /* 0x30 */ float MaxTime;
    /*      */ byte _gap_0x34[0x4];
    /* 0x38 */ Client_Game_UI_LootMode0x4 LootMode;
    /*      */ byte _gap_0x3C[0x4];
};

struct Client_Game_UI_Map_QuestMarkerArray /* Size=0x10E0 */
{
    /*        */ byte _gap_0x0[0x10E0];
};

struct Client_Game_UI_Map /* Size=0x1168 */
{
    /*        */ byte _gap_0x0[0x88];
    /* 0x0088 */ Client_Game_UI_Map_QuestMarkerArray QuestMarkers;
};

struct Client_Game_UI_MarkingController /* Size=0x2B0 */
{
    /*       */ byte _gap_0x0[0x10];
    /* 0x010 */ __int64 MarkerArray[0xE];
    /* 0x080 */ unsigned __int32 LetterMarkerArray[0x1A];
    /* 0x0E8 */ __int64 MarkerTimeArray[0xE];
    /*       */ byte _gap_0x158[0x58];
    /* 0x1B0 */ byte FieldMarkerArray[0x100];
};

struct Client_Game_UI_FieldMarker /* Size=0x20 */
{
    /* 0x00 */ System_Numerics_Vector3 Position;
    /*      */ byte _gap_0xC[0x4];
    /* 0x10 */ __int32 X;
    /* 0x14 */ __int32 Y;
    /* 0x18 */ __int32 Z;
    /* 0x1C */ bool Active;
    /*      */ byte _gap_0x1D;
    /*      */ byte _gap_0x1E[0x2];
};

struct Client_Game_UI_MobHunt /* Size=0x198 */
{
    /*       */ byte _gap_0x0[0x8];
    /* 0x008 */ byte unkArray[0x12];
    /* 0x01A */ byte MarkID[0x12];
    /* 0x02C */ byte CurrentKills[0x168];
    /* 0x194 */ __int32 ObtainedFlags;
};

struct Client_Game_UI_PlayerState /* Size=0x7D0 */
{
    /* 0x000 */ byte IsLoaded;
    /* 0x001 */ byte CharacterName[0x40];
    /* 0x041 */ byte PSNOnlineID[0x11];
    /*       */ byte _gap_0x52[0x2];
    /* 0x054 */ unsigned __int32 ObjectId;
    /* 0x058 */ unsigned __int64 ContentId;
    /* 0x060 */ unsigned __int32 PenaltyTimestamps[0x2];
    /*       */ byte _gap_0x68;
    /* 0x069 */ byte MaxLevel;
    /* 0x06A */ byte MaxExpansion;
    /* 0x06B */ byte Sex;
    /* 0x06C */ byte Race;
    /* 0x06D */ byte Tribe;
    /* 0x06E */ byte CurrentClassJobId;
    /*       */ byte _gap_0x6F;
    /*       */ byte _gap_0x70[0x8];
    /* 0x078 */ __int16 CurrentLevel;
    /* 0x07A */ __int16 ClassJobLevelArray[0x1E];
    /*       */ byte _gap_0xB6[0x2];
    /* 0x0B8 */ __int32 ClassJobExpArray[0x1E];
    /* 0x130 */ __int16 SyncedLevel;
    /* 0x132 */ byte IsLevelSynced;
    /* 0x133 */ bool HasPremiumSaddlebag;
    /*       */ byte _gap_0x134[0x2];
    /* 0x136 */ byte GuardianDeity;
    /* 0x137 */ byte BirthMonth;
    /* 0x138 */ byte BirthDay;
    /* 0x139 */ byte FirstClass;
    /* 0x13A */ byte StartTown;
    /* 0x13B */ byte QuestSpecialFlags;
    /*       */ byte _gap_0x13C[0x4];
    /*       */ byte _gap_0x140[0x10];
    /*       */ byte _gap_0x150[0x4];
    /* 0x154 */ __int32 BaseStrength;
    /* 0x158 */ __int32 BaseDexterity;
    /* 0x15C */ __int32 BaseVitality;
    /* 0x160 */ __int32 BaseIntelligence;
    /* 0x164 */ __int32 BaseMind;
    /* 0x168 */ __int32 BasePiety;
    /* 0x16C */ __int32 Attributes[0x4A];
    /* 0x294 */ byte GrandCompany;
    /* 0x295 */ byte GCRankMaelstrom;
    /* 0x296 */ byte GCRankTwinAdders;
    /* 0x297 */ byte GCRankImmortalFlames;
    /* 0x298 */ byte HomeAetheryteId;
    /* 0x299 */ byte FavouriteAetheryteCount;
    /* 0x29A */ byte FavouriteAetheryteArray[0x4];
    /* 0x29E */ byte FreeAetheryteId;
    /*       */ byte _gap_0x29F;
    /* 0x2A0 */ unsigned __int32 BaseRestedExperience;
    /*       */ byte _gap_0x2A4[0x4];
    /*       */ byte _gap_0x2A8[0x38];
    /*       */ byte _gap_0x2E0;
    /* 0x2E1 */ byte NumOwnedMounts;
    /*       */ byte _gap_0x2E2[0x2];
    /*       */ byte _gap_0x2E4[0x4];
    /*       */ byte _gap_0x2E8[0x148];
    /* 0x430 */ unsigned __int32 NumFishCaught;
    /* 0x434 */ unsigned __int32 FishingBait;
    /*       */ byte _gap_0x438[0x28];
    /*       */ byte _gap_0x460[0x4];
    /* 0x464 */ unsigned __int32 NumSpearfishCaught;
    /*       */ byte _gap_0x468[0x4];
    /* 0x46C */ byte ContentRouletteCompletion[0xC];
    /* 0x478 */ __int16 PlayerCommendations;
    /* 0x47A */ byte SelectedPoses[0x7];
    /* 0x481 */ byte PlayerStateFlags1;
    /* 0x482 */ byte PlayerStateFlags2;
    /* 0x483 */ byte PlayerStateFlags3;
    /*       */ byte _gap_0x484[0x4];
    /*       */ byte _gap_0x488[0x78];
    /*       */ byte _gap_0x500;
    /* 0x501 */ byte UnlockFlags[0x2C];
    /*       */ byte _gap_0x52D;
    /*       */ byte _gap_0x52E[0x2];
    /*       */ byte _gap_0x530;
    /* 0x531 */ byte DeliveryLevel;
    /*       */ byte _gap_0x532;
    /* 0x533 */ byte MeisterFlag;
    /*       */ byte _gap_0x534[0x4];
    /* 0x538 */ unsigned __int32 SquadronMissionCompletionTimestamp;
    /* 0x53C */ unsigned __int32 SquadronTrainingCompletionTimestamp;
    /* 0x540 */ unsigned __int16 ActiveGcArmyExpedition;
    /* 0x542 */ unsigned __int16 ActiveGcArmyTraining;
    /*       */ byte _gap_0x544[0x4];
    /*       */ byte _gap_0x548[0xF8];
    /* 0x640 */ byte WeeklyBingoOrderData[0x10];
    /* 0x650 */ byte WeeklyBingoRewardData[0x4];
    /*       */ byte _gap_0x654[0x4];
    /*       */ byte _gap_0x658[0x8];
    /* 0x660 */ byte WeeklyBingoRequestOpenBingoNo;
    /*       */ byte _gap_0x661;
    /*       */ byte _gap_0x662[0x2];
    /*       */ byte _gap_0x664[0x4];
    /*       */ byte _gap_0x668[0x30];
    /*       */ byte _gap_0x698[0x4];
    /* 0x69C */ byte WeeklyBingoExpMultiplier;
    /* 0x69D */ bool WeeklyBingoUnk63;
    /*       */ byte _gap_0x69E[0x2];
    /*       */ byte _gap_0x6A0[0x90];
    /*       */ byte _gap_0x730[0x4];
    /* 0x734 */ byte MentorVersion;
    /*       */ byte _gap_0x735;
    /*       */ byte _gap_0x736[0x2];
    /* 0x738 */ unsigned __int32 DesynthesisLevels[0x8];
    /*       */ byte _gap_0x758[0x78];
};

enum Client_Game_UI_PlayerStateFlag0x4 /* Size=0x4 */
{
    IsLoginSecurityToken = 1,
    IsBuddyInStable = 2,
    IsMentorStatusActive = 7,
    IsNoviceNetworkAutoJoinEnabled = 8,
    IsBattleMentorStatusActive = 9,
    IsTradeMentorStatusActive = 10,
    IsPvPMentorStatusActive = 11,
    Unknown14 = 14
};

struct Client_Game_UI_PvPProfile /* Size=0x7C */
{
    /* 0x00 */ byte IsLoaded;
    /*      */ byte _gap_0x1;
    /*      */ byte _gap_0x2[0x2];
    /* 0x04 */ unsigned __int32 ExperienceMaelstrom;
    /* 0x08 */ unsigned __int32 ExperienceTwinAdder;
    /* 0x0C */ unsigned __int32 ExperienceImmortalFlames;
    /* 0x10 */ byte RankMaelstrom;
    /* 0x11 */ byte RankTwinAdder;
    /* 0x12 */ byte RankImmortalFlames;
    /*      */ byte _gap_0x13;
    /*      */ byte _gap_0x14[0x4];
    /*      */ byte _gap_0x18[0x4];
    /*      */ byte _gap_0x1C[0x2];
    /* 0x1E */ byte Series;
    /* 0x1F */ byte SeriesCurrentRank;
    /* 0x20 */ byte SeriesClaimedRank;
    /*      */ byte _gap_0x21;
    /* 0x22 */ unsigned __int16 SeriesExperience;
    /* 0x24 */ byte PreviousSeriesClaimedRank;
    /* 0x25 */ byte PreviousSeriesRank;
    /*      */ byte _gap_0x26[0x2];
    /* 0x28 */ unsigned __int32 FrontlineTotalMatches;
    /* 0x2C */ unsigned __int32 FrontlineTotalFirstPlace;
    /* 0x30 */ unsigned __int32 FrontlineTotalSecondPlace;
    /* 0x34 */ unsigned __int32 FrontlineTotalThirdPlace;
    /* 0x38 */ unsigned __int16 FrontlineWeeklyMatches;
    /* 0x3A */ unsigned __int16 FrontlineWeeklyFirstPlace;
    /* 0x3C */ unsigned __int16 FrontlineWeeklySecondPlace;
    /* 0x3E */ unsigned __int16 FrontlineWeeklyThirdPlace;
    /*      */ byte _gap_0x40;
    /* 0x41 */ byte CrystallineConflictSeason;
    /* 0x42 */ unsigned __int16 CrystallineConflictCasualMatches;
    /* 0x44 */ unsigned __int16 CrystallineConflictCasualMatchesWon;
    /* 0x46 */ unsigned __int16 CrystallineConflictRankedMatches;
    /* 0x48 */ unsigned __int16 CrystallineConflictRankedMatchesWon;
    /*      */ byte _gap_0x4A[0x2];
    /*      */ byte _gap_0x4C[0x2];
    /* 0x4E */ unsigned __int16 CrystallineConflictCurrentCrystalCredit;
    /* 0x50 */ unsigned __int16 CrystallineConflictHighestCrystalCredit;
    /*      */ byte _gap_0x52[0x2];
    /* 0x54 */ byte CrystallineConflictCurrentRank;
    /* 0x55 */ byte CrystallineConflictHighestRank;
    /* 0x56 */ byte CrystallineConflictCurrentRiser;
    /* 0x57 */ byte CrystallineConflictHighestRiser;
    /* 0x58 */ byte CrystallineConflictCurrentRisingStars;
    /* 0x59 */ byte CrystallineConflictHighestRisingStars;
    /*      */ byte _gap_0x5A[0x2];
    /*      */ byte _gap_0x5C[0x4];
    /*      */ byte _gap_0x60[0x8];
    /*      */ byte _gap_0x68[0x4];
    /* 0x6C */ unsigned __int32 RivalWingsTotalMatches;
    /* 0x70 */ unsigned __int32 RivalWingsTotalMatchesWon;
    /* 0x74 */ unsigned __int32 RivalWingsWeeklyMatches;
    /* 0x78 */ unsigned __int32 RivalWingsWeeklyMatchesWon;
};

struct Client_Game_UI_RecipeNote_RecipeEntry /* Size=0x4F8 */
{
    /*       */ byte _gap_0x0[0x4C0];
    /*       */ byte _gap_0x4C0[0x2];
    /* 0x4C2 */ unsigned __int16 RecipeId;
    /*       */ byte _gap_0x4C4[0x4];
    /*       */ byte _gap_0x4C8[0x18];
    /*       */ byte _gap_0x4E0[0x4];
    /*       */ byte _gap_0x4E4[0x2];
    /*       */ byte _gap_0x4E6;
    /* 0x4E7 */ byte CraftType;
    /*       */ byte _gap_0x4E8[0x10];
};

struct Client_Game_UI_RecipeNote_RecipeData /* Size=0x3C0 */
{
    /* 0x000 */ Client_Game_UI_RecipeNote_RecipeEntry* Recipes;
    /*       */ byte _gap_0x8[0x3A0];
    /* 0x3A8 */ unsigned __int16 SelectedIndex;
    /*       */ byte _gap_0x3AA[0x2];
    /*       */ byte _gap_0x3AC[0x4];
    /*       */ byte _gap_0x3B0[0x10];
};

struct Client_Game_UI_RecipeNote /* Size=0x610 */
{
    /* 0x000 */ unsigned __int32 Jobs[0x8];
    /*       */ byte _gap_0x20[0x98];
    /* 0x0B8 */ Client_Game_UI_RecipeNote_RecipeData* RecipeList;
    /*       */ byte _gap_0xC0[0x80];
    /*       */ byte _gap_0x140[0x4];
    /* 0x144 */ unsigned __int16 SelectedRecipeId;
    /*       */ byte _gap_0x146[0x2];
    /*       */ byte _gap_0x148[0x4C8];
};

struct Client_Game_UI_RelicNote /* Size=0x18 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ byte RelicID;
    /* 0x09 */ byte RelicNoteID;
    /* 0x0A */ byte MonsterProgress[0xA];
    /* 0x14 */ __int32 ObjectiveProgress;
};

struct Client_Game_UI_RouletteController /* Size=0x70 */
{
    /*      */ byte _gap_0x0[0x70];
};

struct Client_Game_UI_SelectUseTicketInvoker /* Size=0x28 */
{
    /* 0x00 */ void* vtbl;
    /*      */ byte _gap_0x8[0x8];
    /* 0x10 */ Client_Game_UI_Telepo* Telepo;
    /*      */ byte _gap_0x18[0x10];
};

struct Client_Game_UI_Telepo /* Size=0x58 */
{
    /* 0x00 */ void* vtbl;
    /*      */ byte _gap_0x8[0x8];
    /* 0x10 */ StdVector_Client_Game_UI_TeleportInfo TeleportList;
    /* 0x28 */ Client_Game_UI_SelectUseTicketInvoker UseTicketInvoker;
    /*      */ byte _gap_0x50[0x8];
};

struct Client_Game_UI_TerritoryInfo /* Size=0x60 */
{
    /*      */ byte _gap_0x0[0x18];
    /*      */ byte _gap_0x18[0x4];
    /* 0x1C */ __int32 InSanctuary;
    /*      */ byte _gap_0x20[0x4];
    /* 0x24 */ unsigned __int32 AreaPlaceNameID;
    /* 0x28 */ unsigned __int32 SubAreaPlaceNameID;
    /*      */ byte _gap_0x2C[0x4];
    /*      */ byte _gap_0x30[0x30];
};

struct Client_Game_UI_WeaponState /* Size=0x20 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ bool IsUnsheathed;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /* 0x0C */ float SheatheCooldown;
    /* 0x10 */ float AutoSheathTimer;
    /* 0x14 */ bool AutoSheatheState;
    /*      */ byte _gap_0x15;
    /*      */ byte _gap_0x16[0x2];
    /* 0x18 */ bool IsAutoAttacking;
    /*      */ byte _gap_0x19;
    /*      */ byte _gap_0x1A[0x2];
    /*      */ byte _gap_0x1C[0x4];
};

struct Pointer_Client_Game_Object_GameObject /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct StdSet_Node_Pointer_Client_Game_Object_GameObject /* Size=0x30 */
{
    /* 0x00 */ StdSet_Node_Pointer_Client_Game_Object_GameObject* Left;
    /* 0x08 */ StdSet_Node_Pointer_Client_Game_Object_GameObject* Parent;
    /* 0x10 */ StdSet_Node_Pointer_Client_Game_Object_GameObject* Right;
    /* 0x18 */ byte Color;
    /*      */ byte _gap_0x19;
    /*      */ byte _gap_0x1A[0x2];
    /* 0x1C */ bool IsNil;
    /*      */ byte _gap_0x1D;
    /*      */ byte _gap_0x1E[0x2];
    /* 0x20 */ byte _18;
    /* 0x21 */ byte _19;
    /*      */ byte _gap_0x22[0x2];
    /*      */ byte _gap_0x24[0x4];
    /* 0x28 */ Pointer_Client_Game_Object_GameObject Key;
};

struct StdSet_Pointer_Client_Game_Object_GameObject /* Size=0x10 */
{
    /* 0x00 */ StdSet_Node_Pointer_Client_Game_Object_GameObject* Head;
    /* 0x08 */ unsigned __int64 Count;
};

struct Client_Game_Event_EventGPoseController /* Size=0x1 */
{
    /*     */ byte _gap_0x0;
};

struct Client_Game_Event_EventSceneModule /* Size=0x31A0 */
{
    /* 0x0000 */ Client_Game_Event_EventSceneModuleUsualImpl EventSceneModuleUsualImpl;
    /* 0x0010 */ Client_Game_Event_EventSceneModuleImplBase EventSceneModuleImplBase;
    /* 0x0020 */ Client_Game_Event_EventSceneModuleImplBase* EventSceneModuleImpl;
    /*        */ byte _gap_0x28[0x1A8];
    /* 0x01D0 */ Client_Game_Event_EventGPoseController EventGPoseController;
    /*        */ byte _gap_0x1D1;
    /*        */ byte _gap_0x1D2[0x2];
    /*        */ byte _gap_0x1D4[0x4];
    /*        */ byte _gap_0x1D8[0x2FC8];
};

struct Client_Game_Event_EventSceneModuleImplBase /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ Client_Game_Event_EventSceneModule* EventSceneModule;
};

struct Client_Game_Event_EventSceneModuleUsualImpl /* Size=0x10 */
{
    /* 0x00 */ Client_Game_Event_EventSceneModuleImplBase ImplBase;
};

struct Client_Game_Event_EventHandlerInfo /* Size=0x38 */
{
    /* 0x00 */ Client_Game_Event_EventId EventId;
    /* 0x04 */ byte Flags;
    /*      */ byte _gap_0x5;
    /*      */ byte _gap_0x6[0x2];
    /*      */ byte _gap_0x8[0x30];
};

struct Client_Game_Event_EventHandler /* Size=0x210 */
{
    /*       */ byte _gap_0x0[0x8];
    /* 0x008 */ StdSet_Pointer_Client_Game_Object_GameObject EventObjects;
    /* 0x018 */ Client_Game_Event_EventSceneModuleUsualImpl* EventSceneModule;
    /* 0x020 */ Client_Game_Event_EventHandlerInfo Info;
    /*       */ byte _gap_0x58[0x70];
    /* 0x0C8 */ Client_System_String_Utf8String UnkString0;
    /*       */ byte _gap_0x130[0x38];
    /* 0x168 */ Client_System_String_Utf8String UnkString1;
    /*       */ byte _gap_0x1D0[0x40];
};

struct Client_Game_Event_LuaEventHandler /* Size=0x330 */
{
    /* 0x000 */ Client_Game_Event_EventHandler EventHandler;
    /* 0x210 */ Common_Lua_LuaState* LuaState;
    /*       */ byte _gap_0x218[0x28];
    /* 0x240 */ Client_System_String_Utf8String LuaClass;
    /* 0x2A8 */ Client_System_String_Utf8String LuaKey;
    /*       */ byte _gap_0x310[0x20];
};

struct Client_Game_Event_Director /* Size=0x4B8 */
{
    /* 0x000 */ Client_Game_Event_LuaEventHandler LuaEventHandler;
    /* 0x330 */ Client_Game_Event_EventHandlerInfo* EventHandlerInfo;
    /* 0x338 */ unsigned __int32 ContentId;
    /* 0x33C */ byte ContentFlags;
    /*       */ byte _gap_0x33D;
    /*       */ byte _gap_0x33E[0x2];
    /* 0x340 */ byte Sequence;
    /*       */ byte _gap_0x341;
    /* 0x342 */ byte UnionData[0xA];
    /*       */ byte _gap_0x34C[0x4];
    /* 0x350 */ Client_System_String_Utf8String String0;
    /* 0x3B8 */ Client_System_String_Utf8String String1;
    /* 0x420 */ Client_System_String_Utf8String String2;
    /*       */ byte _gap_0x488[0x30];
};

struct Client_Game_Fate_FateDirector /* Size=0x4F8 */
{
    /* 0x000 */ Client_Game_Event_Director Director;
    /* 0x4B8 */ byte FateLevel;
    /*       */ byte _gap_0x4B9;
    /*       */ byte _gap_0x4BA[0x2];
    /*       */ byte _gap_0x4BC[0x4];
    /* 0x4C0 */ unsigned __int32 FateNpcObjectId;
    /*       */ byte _gap_0x4C4[0x4];
    /*       */ byte _gap_0x4C8[0x4];
    /* 0x4CC */ unsigned __int16 FateId;
    /*       */ byte _gap_0x4CE[0x2];
    /*       */ byte _gap_0x4D0[0x28];
};

struct Client_Game_UI_UIState /* Size=0x16BAC */
{
    /* 0x00000 */ Client_Game_UI_Hotbar Hotbar;
    /* 0x00008 */ Client_Game_UI_Hate Hate;
    /* 0x00110 */ Client_Game_UI_Hater Hater;
    /* 0x00A18 */ Client_Game_UI_WeaponState WeaponState;
    /* 0x00A38 */ Client_Game_UI_PlayerState PlayerState;
    /* 0x01208 */ Client_Game_UI_Revive Revive;
    /*         */ byte _gap_0x1238[0x268];
    /* 0x014A0 */ Client_Game_UI_Telepo Telepo;
    /* 0x014F8 */ Client_Game_UI_Cabinet Cabinet;
    /*         */ byte _gap_0x1540[0x550];
    /* 0x01A90 */ Client_Game_UI_Buddy Buddy;
    /*         */ byte _gap_0x2968[0x4];
    /* 0x0296C */ Client_Game_UI_PvPProfile PvPProfile;
    /*         */ byte _gap_0x29E8[0x8];
    /* 0x029F0 */ Client_Game_UI_ContentsNote ContentsNote;
    /* 0x02A98 */ Client_Game_UI_RelicNote RelicNote;
    /*         */ byte _gap_0x2AB0[0x48];
    /* 0x02AF8 */ Client_Game_UI_AreaInstance AreaInstance;
    /*         */ byte _gap_0x2B20[0x10];
    /*         */ byte _gap_0x2B30[0x4];
    /* 0x02B34 */ Client_Game_UI_MobHunt MobHunt;
    /*         */ byte _gap_0x2CCC[0x4];
    /*         */ byte _gap_0x2CD0[0x2F0];
    /* 0x02FC0 */ Client_Game_UI_Loot Loot;
    /*         */ byte _gap_0x3660[0x600];
    /* 0x03C60 */ Client_Game_UI_RecipeNote RecipeNote;
    /*         */ byte _gap_0x4270[0x6558];
    /* 0x0A7C8 */ Client_Game_Event_Director* ActiveDirector;
    /*         */ byte _gap_0xA7D0[0x140];
    /* 0x0A910 */ Client_Game_Fate_FateDirector* FateDirector;
    /*         */ byte _gap_0xA918[0x140];
    /* 0x0AA58 */ Client_Game_UI_Map Map;
    /*         */ byte _gap_0xBBC0[0x2E80];
    /* 0x0EA40 */ Client_Game_UI_MarkingController MarkingController;
    /* 0x0ECF0 */ Client_Game_UI_LimitBreakController LimitBreakController;
    /*         */ byte _gap_0xED00[0x2CB8];
    /* 0x119B8 */ Client_Game_UI_RouletteController RouletteController;
    /*         */ byte _gap_0x11A28[0x60];
    /* 0x11A88 */ Client_Game_UI_ContentsFinder ContentsFinder;
    /*         */ byte _gap_0x11B38[0x4EC0];
    /*         */ byte _gap_0x169F8[0x4];
    /* 0x169FC */ byte UnlockLinkBitmask[0x7E];
    /* 0x16A7A */ byte UnlockedCompanionsBitmask[0x3A];
    /*         */ byte _gap_0x16AB4[0x2];
    /* 0x16AB6 */ byte ChocoboTaxiStandsBitmask[0x26];
    /*         */ byte _gap_0x16ADC[0x4];
    /*         */ byte _gap_0x16AE0[0xC8];
    /*         */ byte _gap_0x16BA8[0x4];
};

struct Client_Game_Object_ClientObjectManager /* Size=0x1 */
{
    /*     */ byte _gap_0x0;
};

enum Client_Game_Object_ObjectKind0x1 /* Size=0x1 */
{
    None = 0,
    Pc = 1,
    BattleNpc = 2,
    EventNpc = 3,
    Treasure = 4,
    Aetheryte = 5,
    GatheringPoint = 6,
    EventObj = 7,
    Mount = 8,
    Companion = 9,
    Retainer = 10,
    AreaObject = 11,
    HousingEventObject = 12,
    Cutscene = 13,
    MjiObject = 14,
    Ornament = 15,
    CardStand = 16
};

struct Client_Game_Object_GameObjectManager /* Size=0x3888 */
{
    /*        */ byte _gap_0x0[0x4];
    /* 0x0004 */ byte Active;
    /*        */ byte _gap_0x5;
    /*        */ byte _gap_0x6[0x2];
    /*        */ byte _gap_0x8[0x10];
    /* 0x0018 */ __int64 ObjectList[0x257];
    /* 0x12D0 */ __int64 ObjectListFiltered[0x257];
    /* 0x2588 */ __int64 ObjectList3[0x257];
    /* 0x3840 */ __int32 ObjectListFilteredCount;
    /* 0x3844 */ __int32 ObjectList3Count;
    /*        */ byte _gap_0x3848[0x40];
};

struct Client_Game_MJI_MJIFarmPasture /* Size=0x4 */
{
    /* 0x0 */ byte Level;
    /* 0x1 */ byte HoursToCompletion;
    /*     */ byte _gap_0x2[0x2];
    /* 0x4 */ bool UnderConstruction;
    /*     */ byte _gap_0x5;
    /*     */ byte _gap_0x6[0x2];
    /* 0x8 */ byte UNK_0x4;
};

struct Client_Game_MJI_MJIWorkshops /* Size=0x17 */
{
    /* 0x00 */ void* vtbl;
    /* 0x08 */ byte PlaceId[0x3];
    /* 0x0B */ byte GlamourLevel[0x3];
    /* 0x0E */ byte HoursToCompletion[0x3];
    /* 0x11 */ byte BuildingLevel[0x3];
    /* 0x14 */ byte UnderConstruction[0x3];
};

struct Client_Game_MJI_MJIGranaries /* Size=0x12 */
{
    /* 0x00 */ void* vtbl;
    /* 0x08 */ byte PlaceId[0x2];
    /* 0x0A */ byte GlamourLevel[0x2];
    /* 0x0C */ byte HoursToCompletion[0x2];
    /* 0x0E */ byte BuildingLevel[0x2];
    /* 0x10 */ byte UnderConstruction[0x2];
};

struct Client_Game_MJI_IslandState /* Size=0xB0 */
{
    /* 0x00 */ bool CanEditIsland;
    /* 0x01 */ byte CurrentRank;
    /*      */ byte _gap_0x2[0x2];
    /* 0x04 */ unsigned __int32 CurrentXP;
    /* 0x08 */ byte CurrentProgress;
    /* 0x09 */ byte VillageDevelopmentLevel;
    /* 0x0A */ byte PathsGlamourId;
    /* 0x0B */ byte GroundsGlamourId;
    /* 0x0C */ byte SlopesGlamourId;
    /* 0x0D */ unsigned __int16 UnlockedKeyItems;
    /* 0x0F */ byte UnlockedRecipes[0x3];
    /* 0x12 */ byte LockedPouchItems[0x4B];
    /*      */ byte _gap_0x5D;
    /* 0x5E */ Client_Game_MJI_MJIFarmPasture Farm;
    /* 0x62 */ Client_Game_MJI_MJIFarmPasture Pasture;
    /* 0x66 */ bool PastureUnderCare;
    /*      */ byte _gap_0x67;
    /* 0x68 */ unsigned __int16 PastureDailyCareFee;
    /* 0x6A */ unsigned __int16 FarmDailyCareFee;
    /* 0x6C */ byte LandmarkHoursToCompletion[0x4];
    /* 0x70 */ byte LandmarkIds[0x4];
    /* 0x74 */ byte LandmarkUnderConstruction[0x4];
    /* 0x78 */ Client_Game_MJI_MJIWorkshops Workshops;
    /*      */ byte _gap_0x8F;
    /* 0x90 */ Client_Game_MJI_MJIGranaries Granaries;
    /*      */ byte _gap_0xA2[0x2];
    /*      */ byte _gap_0xA4[0x4];
    /* 0xA8 */ byte CabinLevel;
    /* 0xA9 */ byte CabinGlamour;
    /*      */ byte _gap_0xAA[0x2];
    /*      */ byte _gap_0xAC[0x4];
};

struct Client_Game_MJI_MJIFarmState /* Size=0x148 */
{
    /* 0x000 */ void* vtbl;
    /* 0x008 */ void* vtbl2;
    /*       */ byte _gap_0x10[0x10];
    /* 0x020 */ byte SeedType[0x14];
    /* 0x034 */ byte GrowthLevel[0x14];
    /* 0x048 */ byte WaterLevel[0x14];
    /* 0x05C */ byte GardenerYield[0x14];
    /* 0x070 */ byte FarmSlotFlags[0x14];
    /*       */ byte _gap_0x84[0x4];
    /*       */ byte _gap_0x88[0xC0];
};

enum Client_Game_MJI_FarmSlotFlags0x1 /* Size=0x1 */
{
    UnderCare = 1,
    WasUnderCare = 2,
    CareHalted = 4,
    Flag8 = 8
};

enum Client_Game_MJI_MJIAllowedVisitors0x1 /* Size=0x1 */
{
    Friends = 1,
    FreeCompany = 2,
    Party = 4
};

struct Client_Game_MJI_MJIPastureHandler /* Size=0xAE0 */
{
    /* 0x000 */ void* vtbl;
    /*       */ byte _gap_0x8[0x2E0];
    /* 0x2E8 */ byte MJIAnimals[0x410];
    /* 0x6F8 */ byte RoamingMinions[0x1E0];
    /* 0x8D8 */ byte MinionSlots[0x1E0];
    /*       */ byte _gap_0xAB8[0x28];
};

struct Client_Game_MJI_MJIBuildingPlacement /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x4];
    /* 0x04 */ unsigned __int32 PlaceId;
    /* 0x08 */ unsigned __int16 SgbId;
    /*      */ byte _gap_0xA[0x2];
    /*      */ byte _gap_0xC[0x4];
};

struct Client_Game_MJI_MJIManager /* Size=0x378 */
{
    /*       */ byte _gap_0x0[0x4];
    /*       */ byte _gap_0x4[0x2];
    /* 0x006 */ byte IsPlayerInSanctuary;
    /*       */ byte _gap_0x7;
    /* 0x008 */ Client_Game_MJI_MJIAllowedVisitors0x1 AllowedVisitors;
    /*       */ byte _gap_0x9;
    /*       */ byte _gap_0xA[0x2];
    /*       */ byte _gap_0xC[0x4];
    /* 0x010 */ unsigned __int32 CurrentMode;
    /*       */ byte _gap_0x14[0x4];
    /*       */ byte _gap_0x18[0x4];
    /* 0x01C */ unsigned __int32 CurrentModeItem;
    /*       */ byte _gap_0x20[0x8];
    /* 0x028 */ Client_Game_MJI_IslandState IslandState;
    /*       */ byte _gap_0xD8[0x18];
    /* 0x0F0 */ Client_Game_MJI_MJIPastureHandler* PastureHandler;
    /* 0x0F8 */ Client_Game_MJI_MJIFarmState* FarmState;
    /*       */ byte _gap_0x100[0x80];
    /*       */ byte _gap_0x180[0x4];
    /* 0x184 */ byte LandmarkPlacements[0x30];
    /* 0x1B4 */ byte BuildingPlacements[0x50];
    /* 0x204 */ Client_Game_MJI_MJIBuildingPlacement CabinPlacement;
    /* 0x214 */ byte FarmPlacements[0x24];
    /* 0x238 */ byte PasturePlacements[0x24];
    /*       */ byte _gap_0x25C[0x4];
    /*       */ byte _gap_0x260[0x10];
    /* 0x270 */ byte CurrentPopularity;
    /* 0x271 */ byte NextPopularity;
    /* 0x272 */ byte SupplyAndDemandShifts[0x47];
    /*       */ byte _gap_0x2B9;
    /*       */ byte _gap_0x2BA[0x2];
    /*       */ byte _gap_0x2BC[0x4];
    /*       */ byte _gap_0x2C0[0x40];
    /*       */ byte _gap_0x300[0x4];
    /*       */ byte _gap_0x304[0x2];
    /* 0x306 */ byte CurrentCycleDay;
    /* 0x307 */ byte CraftworksRestDays[0x4];
    /*       */ byte _gap_0x30B;
    /*       */ byte _gap_0x30C[0x4];
    /*       */ byte _gap_0x310[0x40];
    /*       */ byte _gap_0x350[0x4];
    /* 0x354 */ unsigned __int32 CurrentGroove;
    /*       */ byte _gap_0x358[0x20];
};

struct Client_Game_MJI_MJILandmarkPlacement /* Size=0xC */
{
    /*     */ byte _gap_0x0[0x8];
    /* 0x8 */ byte HoursToCompletion;
    /* 0x9 */ byte LandmarkId;
    /* 0xA */ unsigned __int16 UnderConstruction;
};

struct Client_Game_MJI_MJIFarmPasturePlacement /* Size=0xC */
{
    /*     */ byte _gap_0x0[0x8];
    /* 0x8 */ byte SgbId;
    /*     */ byte _gap_0x9;
    /*     */ byte _gap_0xA[0x2];
};

enum Client_Game_MJI_CraftworkSupply0x4 /* Size=0x4 */
{
    Nonexistent = 0,
    Insufficient = 1,
    Sufficient = 2,
    Surplus = 3,
    Overflowing = 4
};

enum Client_Game_MJI_CraftworkDemandShift0x4 /* Size=0x4 */
{
    Skyrocketing = 0,
    Increasing = 1,
    None = 2,
    Decreasing = 3,
    Plummeting = 4
};

enum Client_Game_MJI_MJIMinimapIcons0x1 /* Size=0x1 */
{
    Trees = 1,
    Vegetation = 2,
    Soils = 4,
    Minerals = 8,
    Aquatic = 16
};

struct Client_Game_MJI_MJIAnimal /* Size=0x34 */
{
    /* 0x00 */ byte SlotId;
    /*      */ byte _gap_0x1;
    /*      */ byte _gap_0x2[0x2];
    /*      */ byte _gap_0x4[0x4];
    /*      */ byte _gap_0x8[0x10];
    /*      */ byte _gap_0x18[0x4];
    /* 0x1C */ unsigned __int32 BNPCNameId;
    /* 0x20 */ unsigned __int32 ObjectId;
    /* 0x24 */ byte AnimalType;
    /* 0x25 */ byte FoodLevel;
    /* 0x26 */ byte Mood;
    /* 0x27 */ unsigned __int16 Leavings;
    /*      */ byte _gap_0x29;
    /*      */ byte _gap_0x2A[0x2];
    /*      */ byte _gap_0x2C[0x4];
    /*      */ byte _gap_0x30[0x4];
};

struct Client_Game_MJI_MJIMinionSlot /* Size=0xC */
{
    /* 0x0 */ byte SlotId;
    /*     */ byte _gap_0x1;
    /*     */ byte _gap_0x2[0x2];
    /* 0x4 */ unsigned __int32 ObjectId;
    /* 0x8 */ unsigned __int16 MinionId;
    /* 0xA */ byte PopAreaId;
    /*     */ byte _gap_0xB;
};

struct Client_Game_InstanceContent_ContentDirector /* Size=0xC38 */
{
    /* 0x000 */ Client_Game_Event_Director Director;
    /*       */ byte _gap_0x4B8[0x750];
    /* 0xC08 */ float ContentTimeLeft;
    /*       */ byte _gap_0xC0C[0x4];
    /*       */ byte _gap_0xC10[0x28];
};

struct Client_Game_InstanceContent_InstanceContentDirector /* Size=0x1CA0 */
{
    /* 0x0000 */ Client_Game_InstanceContent_ContentDirector ContentDirector;
    /*        */ byte _gap_0xC38[0x98];
    /*        */ byte _gap_0xCD0[0x4];
    /* 0x0CD4 */ byte InstanceContentType;
    /*        */ byte _gap_0xCD5;
    /*        */ byte _gap_0xCD6[0x2];
    /*        */ byte _gap_0xCD8[0xFC8];
};

struct Client_Game_InstanceContent_InstanceContentDeepDungeon /* Size=0x27D8 */
{
    /* 0x0000 */ Client_Game_InstanceContent_InstanceContentDirector InstanceContentDirector;
    /*        */ byte _gap_0x1CA0[0xA0];
    /* 0x1D40 */ byte Party[0x20];
    /* 0x1D60 */ byte Items[0x30];
    /* 0x1D90 */ byte Chests[0x20];
    /*        */ byte _gap_0x1DB0[0x8];
    /* 0x1DB8 */ unsigned __int32 BonusLootItemId;
    /* 0x1DBC */ byte Floor;
    /* 0x1DBD */ byte ReturnProgress;
    /* 0x1DBE */ byte PassageProgress;
    /*        */ byte _gap_0x1DBF;
    /* 0x1DC0 */ byte WeaponLevel;
    /* 0x1DC1 */ byte ArmorLevel;
    /*        */ byte _gap_0x1DC2;
    /* 0x1DC3 */ byte HoardCount;
    /*        */ byte _gap_0x1DC4[0x4];
    /*        */ byte _gap_0x1DC8[0xA10];
};

struct Client_Game_InstanceContent_PublicContentDirector /* Size=0x1080 */
{
    /* 0x0000 */ Client_Game_InstanceContent_ContentDirector ContentDirector;
    /*        */ byte _gap_0xC38[0x448];
};

struct Client_Game_Housing_HousingTerritory /* Size=0x96A4 */
{
    /*        */ byte _gap_0x0[0x96A0];
    /* 0x96A0 */ unsigned __int32 HouseID;
};

struct Client_Game_Housing_HousingWorkshopAirshipData /* Size=0x28F8 */
{
    /* 0x0000 */ byte DataList[0x700];
    /*        */ byte _gap_0x700[0x70];
    /* 0x0770 */ byte ActiveAirshipId;
    /* 0x0771 */ byte AirshipCount;
    /*        */ byte _gap_0x772[0x2];
    /*        */ byte _gap_0x774[0x4];
    /* 0x0778 */ byte AirshipLogList[0x2150];
    /*        */ byte _gap_0x28C8[0x30];
};

struct Client_Game_Housing_HousingWorkshopSubmersibleData /* Size=0x8F40 */
{
    /* 0x0000 */ byte DataList[0x8C80];
    /* 0x8C80 */ byte DataPointerList[0x28];
    /*        */ byte _gap_0x8CA8[0x298];
};

struct Client_Game_Housing_HousingWorkshopTerritory /* Size=0xB8C0 */
{
    /*        */ byte _gap_0x0[0x68];
    /* 0x0068 */ Client_Game_Housing_HousingWorkshopAirshipData Airship;
    /* 0x2960 */ Client_Game_Housing_HousingWorkshopSubmersibleData Submersible;
    /*        */ byte _gap_0xB8A0[0x20];
};

struct Client_Game_Housing_HousingManager /* Size=0xE0 */
{
    /* 0x00 */ Client_Game_Housing_HousingTerritory* CurrentTerritory;
    /* 0x08 */ Client_Game_Housing_HousingTerritory* OutdoorTerritory;
    /* 0x10 */ Client_Game_Housing_HousingTerritory* IndoorTerritory;
    /* 0x18 */ Client_Game_Housing_HousingWorkshopTerritory* WorkshopTerritory;
    /*      */ byte _gap_0x20[0xC0];
};

struct Client_Game_Housing_HousingWorkshopGatheredData /* Size=0x38 */
{
    /* 0x00 */ unsigned __int32 ExpGained;
    /*      */ byte _gap_0x4[0x4];
    /*      */ byte _gap_0x8[0x4];
    /* 0x0C */ unsigned __int32 ItemIdPrimary;
    /* 0x10 */ unsigned __int32 ItemIdAdditional;
    /* 0x14 */ unsigned __int16 ItemCountPrimary;
    /* 0x16 */ unsigned __int16 ItemCountAdditional;
    /*      */ byte _gap_0x18[0x18];
    /*      */ byte _gap_0x30[0x2];
    /* 0x32 */ bool AirshipItemValidPrimary;
    /* 0x33 */ bool AirshipItemValidAdditional;
    /*      */ byte _gap_0x34[0x4];
};

struct Client_Game_Housing_HousingWorkshopSubmersibleSubData /* Size=0x2320 */
{
    /* 0x0000 */ Client_Game_Housing_HousingWorkshopSubmersibleSubData* Self;
    /*        */ byte _gap_0x8[0x4];
    /*        */ byte _gap_0xC[0x2];
    /* 0x000E */ byte RankId;
    /*        */ byte _gap_0xF;
    /* 0x0010 */ unsigned __int32 RegisterTime;
    /* 0x0014 */ unsigned __int32 ReturnTime;
    /* 0x0018 */ unsigned __int32 CurrentExp;
    /* 0x001C */ unsigned __int32 NextLevelExp;
    /*        */ byte _gap_0x20[0x2];
    /* 0x0022 */ byte Name[0x14];
    /*        */ byte _gap_0x36[0x2];
    /*        */ byte _gap_0x38[0x2];
    /* 0x003A */ unsigned __int16 HullId;
    /* 0x003C */ unsigned __int16 SternId;
    /* 0x003E */ unsigned __int16 BowId;
    /* 0x0040 */ unsigned __int16 BridgeId;
    /* 0x0042 */ byte CurrentExplorationPoints[0x5];
    /*        */ byte _gap_0x47;
    /*        */ byte _gap_0x48[0x2];
    /* 0x004A */ unsigned __int16 SurveillanceBase;
    /* 0x004C */ unsigned __int16 RetrievalBase;
    /* 0x004E */ unsigned __int16 SpeedBase;
    /* 0x0050 */ unsigned __int16 RangeBase;
    /* 0x0052 */ unsigned __int16 FavorBase;
    /* 0x0054 */ unsigned __int16 SurveillanceBonus;
    /* 0x0056 */ unsigned __int16 RetrievalBonus;
    /* 0x0058 */ unsigned __int16 SpeedBonus;
    /* 0x005A */ unsigned __int16 RangeBonus;
    /* 0x005C */ unsigned __int16 FavorBonus;
    /*        */ byte _gap_0x5E[0x2];
    /*        */ byte _gap_0x60[0x10];
    /* 0x0070 */ byte GatheredData[0x118];
    /*        */ byte _gap_0x188[0x28];
    /* 0x01B0 */ byte LogList[0x2150];
    /*        */ byte _gap_0x2300[0x20];
};

struct Client_Game_Group_GroupManager /* Size=0x3D70 */
{
    /* 0x0000 */ byte PartyMembers[0x1180];
    /* 0x1180 */ byte AllianceMembers[0x2BC0];
    /* 0x3D40 */ unsigned __int32 Unk_3D40;
    /* 0x3D44 */ unsigned __int16 Unk_3D44;
    /*        */ byte _gap_0x3D46[0x2];
    /* 0x3D48 */ __int64 PartyId;
    /* 0x3D50 */ __int64 PartyId_2;
    /* 0x3D58 */ unsigned __int32 PartyLeaderIndex;
    /* 0x3D5C */ byte MemberCount;
    /* 0x3D5D */ byte Unk_3D5D;
    /*        */ byte _gap_0x3D5E;
    /* 0x3D5F */ byte Unk_3D5F;
    /* 0x3D60 */ byte Unk_3D60;
    /* 0x3D61 */ byte AllianceFlags;
    /*        */ byte _gap_0x3D62[0x2];
    /*        */ byte _gap_0x3D64[0x4];
    /*        */ byte _gap_0x3D68[0x8];
};

struct Client_Game_Group_PartyMember /* Size=0x230 */
{
    /* 0x000 */ Client_Game_StatusManager StatusManager;
    /*       */ byte _gap_0x188[0x8];
    /* 0x190 */ float X;
    /* 0x194 */ float Y;
    /* 0x198 */ float Z;
    /*       */ byte _gap_0x19C[0x4];
    /* 0x1A0 */ __int64 ContentID;
    /* 0x1A8 */ unsigned __int32 ObjectID;
    /* 0x1AC */ unsigned __int32 Unk_ObjectID_1;
    /* 0x1B0 */ unsigned __int32 Unk_ObjectID_2;
    /* 0x1B4 */ unsigned __int32 CurrentHP;
    /* 0x1B8 */ unsigned __int32 MaxHP;
    /* 0x1BC */ unsigned __int16 CurrentMP;
    /* 0x1BE */ unsigned __int16 MaxMP;
    /* 0x1C0 */ unsigned __int16 TerritoryType;
    /* 0x1C2 */ unsigned __int16 HomeWorld;
    /* 0x1C4 */ byte Name[0x40];
    /* 0x204 */ byte Sex;
    /* 0x205 */ byte ClassJob;
    /* 0x206 */ byte Level;
    /*       */ byte _gap_0x207;
    /* 0x208 */ byte Unk_Struct_208__0;
    /*       */ byte _gap_0x209;
    /*       */ byte _gap_0x20A[0x2];
    /* 0x20C */ unsigned __int32 Unk_Struct_208__4;
    /* 0x210 */ unsigned __int16 Unk_Struct_208__8;
    /*       */ byte _gap_0x212[0x2];
    /* 0x214 */ unsigned __int32 Unk_Struct_208__C;
    /* 0x218 */ unsigned __int16 Unk_Struct_208__10;
    /* 0x21A */ unsigned __int16 Unk_Struct_208__14;
    /*       */ byte _gap_0x21C[0x4];
    /* 0x220 */ byte Flags;
    /*       */ byte _gap_0x221;
    /*       */ byte _gap_0x222[0x2];
    /*       */ byte _gap_0x224[0x4];
    /*       */ byte _gap_0x228[0x8];
};

enum Client_Game_Gauge_AstrologianCard0x4 /* Size=0x4 */
{
    None = 0,
    Balance = 1,
    Bole = 2,
    Arrow = 3,
    Spear = 4,
    Ewer = 5,
    Spire = 6,
    Lord = 112,
    Lady = 128
};

enum Client_Game_Gauge_AstrologianSeal0x4 /* Size=0x4 */
{
    Solar = 1,
    Lunar = 2,
    Celestial = 3
};

enum Client_Game_Gauge_DanceStep0x1 /* Size=0x1 */
{
    Finish = 0,
    Emboite = 1,
    Entrechat = 2,
    Jete = 3,
    Pirouette = 4
};

struct Client_Game_Fate_FateContext /* Size=0x1040 */
{
    /*        */ byte _gap_0x0[0x18];
    /* 0x0018 */ unsigned __int16 FateId;
    /*        */ byte _gap_0x1A[0x2];
    /*        */ byte _gap_0x1C[0x4];
    /* 0x0020 */ __int32 StartTimeEpoch;
    /*        */ byte _gap_0x24[0x4];
    /* 0x0028 */ __int16 Duration;
    /*        */ byte _gap_0x2A[0x2];
    /*        */ byte _gap_0x2C[0x4];
    /*        */ byte _gap_0x30[0x90];
    /* 0x00C0 */ Client_System_String_Utf8String Name;
    /* 0x0128 */ Client_System_String_Utf8String Description;
    /* 0x0190 */ Client_System_String_Utf8String Objective;
    /*        */ byte _gap_0x1F8[0x1B0];
    /*        */ byte _gap_0x3A8[0x4];
    /* 0x03AC */ byte State;
    /*        */ byte _gap_0x3AD;
    /*        */ byte _gap_0x3AE;
    /* 0x03AF */ byte HandInCount;
    /*        */ byte _gap_0x3B0[0x8];
    /* 0x03B8 */ byte Progress;
    /*        */ byte _gap_0x3B9;
    /*        */ byte _gap_0x3BA[0x2];
    /*        */ byte _gap_0x3BC[0x4];
    /*        */ byte _gap_0x3C0[0x18];
    /* 0x03D8 */ unsigned __int32 IconId;
    /*        */ byte _gap_0x3DC[0x4];
    /*        */ byte _gap_0x3E0[0x18];
    /*        */ byte _gap_0x3F8;
    /* 0x03F9 */ byte Level;
    /* 0x03FA */ byte MaxLevel;
    /*        */ byte _gap_0x3FB;
    /*        */ byte _gap_0x3FC[0x4];
    /*        */ byte _gap_0x400[0x50];
    /* 0x0450 */ System_Numerics_Vector3 Location;
    /*        */ byte _gap_0x45C[0x4];
    /*        */ byte _gap_0x460[0x4];
    /* 0x0464 */ float Radius;
    /*        */ byte _gap_0x468[0x2B8];
    /* 0x0720 */ unsigned __int32 MapIconId;
    /*        */ byte _gap_0x724[0x4];
    /*        */ byte _gap_0x728[0x20];
    /*        */ byte _gap_0x748[0x4];
    /*        */ byte _gap_0x74C[0x2];
    /* 0x074E */ unsigned __int16 TerritoryId;
    /*        */ byte _gap_0x750[0x8F0];
};

struct StdVector_Client_Game_Object_GameObjectID /* Size=0x18 */
{
    /* 0x00 */ Client_Game_Object_GameObjectID* First;
    /* 0x08 */ Client_Game_Object_GameObjectID* Last;
    /* 0x10 */ Client_Game_Object_GameObjectID* End;
};

struct Pointer_Client_Game_Fate_FateContext /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct StdVector_Pointer_Client_Game_Fate_FateContext /* Size=0x18 */
{
    /* 0x00 */ Pointer_Client_Game_Fate_FateContext* First;
    /* 0x08 */ Pointer_Client_Game_Fate_FateContext* Last;
    /* 0x10 */ Pointer_Client_Game_Fate_FateContext* End;
};

struct Client_Game_Fate_FateManager /* Size=0xB8 */
{
    /* 0x00 */ StdVector_Client_Game_Object_GameObjectID Unk_Vector;
    /* 0x18 */ Client_System_String_Utf8String Unk_String;
    /* 0x80 */ Client_Game_Fate_FateDirector* FateDirector;
    /* 0x88 */ Client_Game_Fate_FateContext* CurrentFate;
    /* 0x90 */ StdVector_Pointer_Client_Game_Fate_FateContext Fates;
    /* 0xA8 */ unsigned __int16 SyncedFateId;
    /*      */ byte _gap_0xAA[0x2];
    /* 0xAC */ byte FateJoined;
    /*      */ byte _gap_0xAD;
    /*      */ byte _gap_0xAE[0x2];
    /*      */ byte _gap_0xB0[0x8];
};

struct Client_Game_Event_ModuleBase /* Size=0x40 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ Common_Lua_LuaState* LuaState;
    /*      */ byte _gap_0x10[0x30];
};

struct Pointer_Client_Game_Event_Director /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct StdVector_Pointer_Client_Game_Event_Director /* Size=0x18 */
{
    /* 0x00 */ Pointer_Client_Game_Event_Director* First;
    /* 0x08 */ Pointer_Client_Game_Event_Director* Last;
    /* 0x10 */ Pointer_Client_Game_Event_Director* End;
};

struct StdPair_System_IntPtr_System_IntPtr /* Size=0x10 */
{
    /* 0x00 */ __int64 Item1;
    /* 0x08 */ __int64 Item2;
};

struct StdPair_System_UInt16_StdPair_System_IntPtr_System_IntPtr /* Size=0x18 */
{
    /* 0x00 */ unsigned __int16 Item1;
    /*      */ byte _gap_0x2[0x2];
    /*      */ byte _gap_0x4[0x4];
    /* 0x08 */ StdPair_System_IntPtr_System_IntPtr Item2;
};

struct StdMap_Node_System_UInt16_StdPair_System_IntPtr_System_IntPtr /* Size=0x40 */
{
    /* 0x00 */ StdMap_Node_System_UInt16_StdPair_System_IntPtr_System_IntPtr* Left;
    /* 0x08 */ StdMap_Node_System_UInt16_StdPair_System_IntPtr_System_IntPtr* Parent;
    /* 0x10 */ StdMap_Node_System_UInt16_StdPair_System_IntPtr_System_IntPtr* Right;
    /* 0x18 */ byte Color;
    /*      */ byte _gap_0x19;
    /*      */ byte _gap_0x1A[0x2];
    /* 0x1C */ bool IsNil;
    /*      */ byte _gap_0x1D;
    /*      */ byte _gap_0x1E[0x2];
    /* 0x20 */ byte _18;
    /* 0x21 */ byte _19;
    /*      */ byte _gap_0x22[0x2];
    /*      */ byte _gap_0x24[0x4];
    /* 0x28 */ StdPair_System_UInt16_StdPair_System_IntPtr_System_IntPtr KeyValuePair;
};

struct StdMap_System_UInt16_StdPair_System_IntPtr_System_IntPtr /* Size=0x10 */
{
    /* 0x00 */ StdMap_Node_System_UInt16_StdPair_System_IntPtr_System_IntPtr* Head;
    /* 0x08 */ unsigned __int64 Count;
};

struct Client_Game_Event_DirectorModule /* Size=0xA0 */
{
    /* 0x00 */ Client_Game_Event_ModuleBase ModuleBase;
    /* 0x40 */ StdVector_Pointer_Client_Game_Event_Director DirectorList;
    /* 0x58 */ StdMap_System_UInt16_StdPair_System_IntPtr_System_IntPtr DirectorFactories;
    /*      */ byte _gap_0x68[0x30];
    /* 0x98 */ Client_Game_InstanceContent_ContentDirector* ActiveContentDirector;
};

struct Pointer_Client_Game_Event_EventHandler /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct StdPair_System_UInt32_Pointer_Client_Game_Event_EventHandler /* Size=0x10 */
{
    /* 0x00 */ unsigned __int32 Item1;
    /*      */ byte _gap_0x4[0x4];
    /* 0x08 */ Pointer_Client_Game_Event_EventHandler Item2;
};

struct StdMap_Node_System_UInt32_Pointer_Client_Game_Event_EventHandler /* Size=0x38 */
{
    /* 0x00 */ StdMap_Node_System_UInt32_Pointer_Client_Game_Event_EventHandler* Left;
    /* 0x08 */ StdMap_Node_System_UInt32_Pointer_Client_Game_Event_EventHandler* Parent;
    /* 0x10 */ StdMap_Node_System_UInt32_Pointer_Client_Game_Event_EventHandler* Right;
    /* 0x18 */ byte Color;
    /*      */ byte _gap_0x19;
    /*      */ byte _gap_0x1A[0x2];
    /* 0x1C */ bool IsNil;
    /*      */ byte _gap_0x1D;
    /*      */ byte _gap_0x1E[0x2];
    /* 0x20 */ byte _18;
    /* 0x21 */ byte _19;
    /*      */ byte _gap_0x22[0x2];
    /*      */ byte _gap_0x24[0x4];
    /* 0x28 */ StdPair_System_UInt32_Pointer_Client_Game_Event_EventHandler KeyValuePair;
};

struct StdMap_System_UInt32_Pointer_Client_Game_Event_EventHandler /* Size=0x10 */
{
    /* 0x00 */ StdMap_Node_System_UInt32_Pointer_Client_Game_Event_EventHandler* Head;
    /* 0x08 */ unsigned __int64 Count;
};

struct Client_Game_Event_EventHandlerModule /* Size=0xC0 */
{
    /* 0x00 */ Client_Game_Event_ModuleBase ModuleBase;
    /* 0x40 */ StdMap_System_UInt32_Pointer_Client_Game_Event_EventHandler EventHandlerMap;
    /* 0x50 */ StdMap_System_UInt16_StdPair_System_IntPtr_System_IntPtr EventHandlerFactories;
    /*      */ byte _gap_0x60[0x60];
};

struct StdPair_System_Int64_Client_Game_Event_LuaActor /* Size=0x88 */
{
    /* 0x00 */ __int64 Item1;
    /* 0x08 */ Client_Game_Event_LuaActor Item2;
};

struct StdMap_Node_System_Int64_Client_Game_Event_LuaActor /* Size=0xB0 */
{
    /* 0x00 */ StdMap_Node_System_Int64_Client_Game_Event_LuaActor* Left;
    /* 0x08 */ StdMap_Node_System_Int64_Client_Game_Event_LuaActor* Parent;
    /* 0x10 */ StdMap_Node_System_Int64_Client_Game_Event_LuaActor* Right;
    /* 0x18 */ byte Color;
    /*      */ byte _gap_0x19;
    /*      */ byte _gap_0x1A[0x2];
    /* 0x1C */ bool IsNil;
    /*      */ byte _gap_0x1D;
    /*      */ byte _gap_0x1E[0x2];
    /* 0x20 */ byte _18;
    /* 0x21 */ byte _19;
    /*      */ byte _gap_0x22[0x2];
    /*      */ byte _gap_0x24[0x4];
    /* 0x28 */ StdPair_System_Int64_Client_Game_Event_LuaActor KeyValuePair;
};

struct StdMap_System_Int64_Client_Game_Event_LuaActor /* Size=0x10 */
{
    /* 0x00 */ StdMap_Node_System_Int64_Client_Game_Event_LuaActor* Head;
    /* 0x08 */ unsigned __int64 Count;
};

struct Client_Game_Event_LuaActorModule /* Size=0x50 */
{
    /* 0x00 */ Client_Game_Event_ModuleBase ModuleBase;
    /* 0x40 */ StdMap_System_Int64_Client_Game_Event_LuaActor ActorMap;
};

struct Client_Game_Event_EventState /* Size=0x30 */
{
    /*      */ byte _gap_0x0[0x10];
    /* 0x10 */ Client_Game_Object_GameObjectID ObjectId;
    /*      */ byte _gap_0x18[0x18];
};

struct Client_Game_Event_EventFramework /* Size=0x3BC0 */
{
    /* 0x0000 */ Client_Game_Event_EventHandlerModule EventHandlerModule;
    /* 0x00C0 */ Client_Game_Event_DirectorModule DirectorModule;
    /* 0x0160 */ Client_Game_Event_LuaActorModule LuaActorModule;
    /* 0x01B0 */ Client_Game_Event_EventSceneModule EventSceneModule;
    /* 0x3350 */ __int32 LoadState;
    /*        */ byte _gap_0x3354[0x4];
    /* 0x3358 */ Common_Lua_LuaState* LuaState;
    /* 0x3360 */ Common_Lua_LuaThread LuaThread;
    /*        */ byte _gap_0x3388[0x30];
    /* 0x33B8 */ Client_Game_Event_EventState EventState1;
    /*        */ byte _gap_0x33E8[0x30];
    /* 0x3418 */ Client_Game_Event_EventState EventState2;
    /*        */ byte _gap_0x3448[0x778];
};

enum Client_Game_Event_EventHandlerType0x2 /* Size=0x2 */
{
    Quest = 1,
    Warp = 2,
    GatheringPoint = 3,
    Shop = 4,
    Aetheryte = 5,
    GuildLeveAssignment = 6,
    DefaultTalk = 9,
    Craft = 10,
    CustomTalk = 11,
    CompanyLeveOfficer = 12,
    Array = 13,
    CraftLeve = 14,
    GimmickAccessor = 15,
    GimmickBill = 16,
    GimmickRect = 17,
    ChocoboTaxiStand = 18,
    Opening = 19,
    ExitRange = 20,
    Fishing = 21,
    GrandCompanyShop = 22,
    GuildOrderGuide = 23,
    GuildOrderOfficer = 24,
    ContentNpc = 25,
    Story = 26,
    SpecialShop = 27,
    ContentTalk = 28,
    InstanceContentGuide = 29,
    HousingAethernet = 30,
    FcTalk = 31,
    MobHunt = 32,
    Adventure = 33,
    DailyQuestSupply = 34,
    TripleTriad = 35,
    GoldSaucerArcadeMachine = 36,
    LotteryExchangeShop = 52,
    TripleTriadCompetition = 55,
    BattleLeveDirector = 32769,
    GatheringLeveDirector = 32770,
    InstanceContentDirector = 32771,
    PublicContentDirector = 32772,
    QuestBattleDirector = 32774,
    CompanyLeveDirector = 32775,
    TreasureHuntDirector = 32777,
    GoldSaucerDirector = 32778,
    CompanyCraftDirector = 32779,
    DpsChallengeDirector = 32781,
    FateDirector = 32794
};

struct Client_Game_Control_CameraManager /* Size=0x180 */
{
    /* 0x000 */ Client_Game_Camera* Camera;
    /* 0x008 */ Client_Game_LowCutCamera* LowCutCamera;
    /* 0x010 */ Client_Game_LobbyCamera* LobbCamera;
    /* 0x018 */ Client_Game_Camera3* Camera3;
    /* 0x020 */ Client_Game_Camera4* Camera4;
    /*       */ byte _gap_0x28[0x20];
    /* 0x048 */ __int32 ActiveCameraIndex;
    /* 0x04C */ __int32 PreviousCameraIndex;
    /*       */ byte _gap_0x50[0x10];
    /* 0x060 */ Client_Game_CameraBase UnkCamera;
    /*       */ byte _gap_0x170[0x10];
};

struct Client_Game_Control_GameObjectArray /* Size=0x12C0 */
{
    /* 0x0000 */ __int32 Length;
    /*        */ byte _gap_0x4[0x4];
    /* 0x0008 */ __int64 Objects[0x257];
};

struct Client_Game_Control_TargetSystem /* Size=0x52F0 */
{
    /*        */ byte _gap_0x0[0x80];
    /* 0x0080 */ Client_Game_Object_GameObject* Target;
    /* 0x0088 */ Client_Game_Object_GameObject* SoftTarget;
    /*        */ byte _gap_0x90[0x8];
    /* 0x0098 */ Client_Game_Object_GameObject* GPoseTarget;
    /*        */ byte _gap_0xA0[0x30];
    /* 0x00D0 */ Client_Game_Object_GameObject* MouseOverTarget;
    /*        */ byte _gap_0xD8[0x8];
    /* 0x00E0 */ Client_Game_Object_GameObject* MouseOverNameplateTarget;
    /*        */ byte _gap_0xE8[0x10];
    /* 0x00F8 */ Client_Game_Object_GameObject* FocusTarget;
    /*        */ byte _gap_0x100[0x10];
    /* 0x0110 */ Client_Game_Object_GameObject* PreviousTarget;
    /*        */ byte _gap_0x118[0x28];
    /* 0x0140 */ Client_Game_Object_GameObjectID TargetObjectId;
    /* 0x0148 */ Client_Game_Control_GameObjectArray ObjectFilterArray0;
    /*        */ byte _gap_0x1408[0x610];
    /* 0x1A18 */ Client_Game_Control_GameObjectArray ObjectFilterArray1;
    /* 0x2CD8 */ Client_Game_Control_GameObjectArray ObjectFilterArray2;
    /* 0x3F98 */ Client_Game_Control_GameObjectArray ObjectFilterArray3;
    /*        */ byte _gap_0x5258[0x98];
};

struct Client_Game_Control_Control /* Size=0x5A60 */
{
    /* 0x0000 */ Client_Game_Control_CameraManager CameraManager;
    /* 0x0180 */ Client_Game_Control_TargetSystem TargetSystem;
    /*        */ byte _gap_0x5470[0x5D8];
    /* 0x5A48 */ unsigned __int32 LocalPlayerObjectId;
    /*        */ byte _gap_0x5A4C[0x4];
    /* 0x5A50 */ Client_Game_Character_BattleChara* LocalPlayer;
    /*        */ byte _gap_0x5A58[0x8];
};

struct Client_Game_Control_InputManager /* Size=0x8 */
{
    /*     */ byte _gap_0x0[0x8];
};

struct Client_Game_Character_CharacterManager /* Size=0x338 */
{
    /* 0x000 */ __int64 BattleCharaArray[0x64];
    /* 0x320 */ Client_Game_Character_BattleChara* BattleCharaMemory;
    /* 0x328 */ Client_Game_Character_Companion* CompanionMemory;
    /* 0x330 */ __int32 CompanionClassSize;
    /* 0x334 */ __int32 UpdateIndex;
};

struct Application_Network_WorkDefinitions_BeastReputationWork /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ byte Rank;
    /*      */ byte _gap_0x9;
    /* 0x0A */ unsigned __int16 Value;
    /*      */ byte _gap_0xC[0x4];
};

struct Application_Network_WorkDefinitions_DailyQuestWork /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ unsigned __int16 QuestId;
    /* 0x0A */ byte Flags;
    /*      */ byte _gap_0xB;
    /*      */ byte _gap_0xC[0x4];
};

struct Application_Network_WorkDefinitions_LeveWork /* Size=0x18 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ unsigned __int16 LeveId;
    /* 0x0A */ byte Sequence;
    /*      */ byte _gap_0xB;
    /* 0x0C */ unsigned __int16 Flags;
    /* 0x0E */ unsigned __int16 LeveSeed;
    /* 0x10 */ byte ClearClass;
    /*      */ byte _gap_0x11;
    /*      */ byte _gap_0x12[0x2];
    /*      */ byte _gap_0x14[0x4];
};

struct Application_Network_WorkDefinitions_QuestWork /* Size=0x18 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ unsigned __int16 QuestId;
    /* 0x0A */ byte Sequence;
    /* 0x0B */ byte Flags;
    /* 0x0C */ byte Variables[0x6];
    /* 0x12 */ byte AcceptClassJob;
    /*      */ byte _gap_0x13;
    /*      */ byte _gap_0x14[0x4];
};

struct Application_Network_WorkDefinitions_TrackingWork /* Size=0x10 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ byte QuestType;
    /* 0x09 */ byte Index;
    /*      */ byte _gap_0xA[0x2];
    /*      */ byte _gap_0xC[0x4];
};

struct Component_GUI_AtkLinkedList_Node; /* Size=unknown due to generic type with parameters */
enum Component_GUI_AtkTooltipManager_AtkTooltipType0x1 /* Size=0x1 */
{
    Text = 1,
    Item = 2,
    TextItem = 3,
    Action = 4
};

struct Component_GUI_AtkTooltipManager_AtkTooltipArgs /* Size=0x18 */
{
    /* 0x00 */ byte* Text;
    /* 0x08 */ unsigned __int64 TypeSpecificID;
    /* 0x10 */ unsigned __int32 Flags;
    /* 0x14 */ __int16 Unk_14;
    /* 0x16 */ byte Unk_16;
    /*      */ byte _gap_0x17;
};

struct Component_GUI_AtkTooltipManager_AtkTooltipInfo /* Size=0x20 */
{
    /* 0x00 */ Component_GUI_AtkTooltipManager_AtkTooltipArgs AtkTooltipArgs;
    /* 0x18 */ unsigned __int16 ParentID;
    /* 0x1A */ Component_GUI_AtkTooltipManager_AtkTooltipType0x1 Type;
    /*      */ byte _gap_0x1B;
    /*      */ byte _gap_0x1C[0x4];
};

struct Component_GUI_AtkUldManager_DuplicateObjectList /* Size=0x10 */
{
    /* 0x00 */ Component_GUI_AtkComponentNode* NodeList;
    /* 0x08 */ unsigned __int32 NodeCount;
    /*      */ byte _gap_0xC[0x4];
};

struct Client_UI_AddonContentsFinder_AddonContentsFinderVTable /* Size=0x1 */
{
    /*     */ byte _gap_0x0;
};

struct Client_UI_AddonContentsFinderConfirm_AddonContentsFinderConfirmVTable /* Size=0x1 */
{
    /*     */ byte _gap_0x0;
};

struct Client_UI_AddonNeedGreed_LootItemInfo /* Size=0x28 */
{
    /* 0x00 */ unsigned __int32 ItemId;
    /*      */ byte _gap_0x4[0x4];
    /*      */ byte _gap_0x8[0x20];
};

struct Client_UI_AddonRaceChocoboResult_AddonRaceChocoboResultVTable /* Size=0x1 */
{
    /*     */ byte _gap_0x0;
};

struct Client_UI_AddonRetainerGrid0_AddonRetainerGrid0VTable /* Size=0x1 */
{
    /*     */ byte _gap_0x0;
};

struct Client_UI_AddonSalvageItemSelector_SalvageItem /* Size=0x30 */
{
    /* 0x00 */ Client_Game_InventoryType0x4 Inventory;
    /* 0x04 */ __int32 Slot;
    /* 0x08 */ unsigned __int32 IconId;
    /*      */ byte _gap_0xC[0x4];
    /* 0x10 */ byte* NamePtr;
    /* 0x18 */ unsigned __int32 Quantity;
    /* 0x1C */ unsigned __int32 JobIconID;
    /* 0x20 */ byte* JobNamePtr;
    /* 0x28 */ byte Unknown28;
    /*      */ byte _gap_0x29;
    /*      */ byte _gap_0x2A[0x2];
    /*      */ byte _gap_0x2C[0x4];
};

struct Client_UI_UI3DModule_MemberInfo /* Size=0x28 */
{
    /* 0x00 */ Client_UI_UI3DModule_MapInfo MapInfo;
    /* 0x18 */ Client_Game_Character_BattleChara* BattleChara;
    /* 0x20 */ byte Unk_20;
    /*      */ byte _gap_0x21;
    /*      */ byte _gap_0x22[0x2];
    /*      */ byte _gap_0x24[0x4];
};

struct Client_UI_UI3DModule_UnkInfo /* Size=0x40 */
{
    /* 0x00 */ Client_UI_UI3DModule_MapInfo MapInfo;
    /*      */ byte _gap_0x18[0x28];
};

enum Client_UI_UIModule_UiFlags0x4 /* Size=0x4 */
{
    Shortcuts = 1,
    Hud = 2,
    Nameplates = 4,
    Chat = 8,
    ActionBars = 16,
    Unk32 = 32,
    TargetInfo = 64
};

struct Client_UI_Misc_ConfigModule_Option /* Size=0x20 */
{
    /* 0x00 */ void* Unk00;
    /* 0x08 */ unsigned __int64 Unk08;
    /* 0x10 */ Client_UI_Misc_ConfigOption0x2 OptionID;
    /*      */ byte _gap_0x12[0x2];
    /* 0x14 */ unsigned __int32 Unk14;
    /* 0x18 */ unsigned __int32 Unk18;
    /* 0x1C */ unsigned __int16 Unk1C;
    /*      */ byte _gap_0x1E[0x2];
};

enum Client_UI_Misc_RaptureGearsetModule_GearsetFlag0x1 /* Size=0x1 */
{
    None = 0,
    Exists = 1,
    Unknown02 = 2,
    Unknown04 = 4,
    HeadgearVisible = 8,
    WeaponsVisible = 16,
    VisorEnabled = 32,
    Unknown40 = 64,
    Unknown80 = 128
};

struct Client_UI_Misc_RaptureGearsetModule_GearsetItem /* Size=0x1C */
{
    /* 0x00 */ unsigned __int32 ItemID;
    /* 0x04 */ unsigned __int32 GlamourId;
    /* 0x08 */ byte Stain;
    /*      */ byte _gap_0x9;
    /* 0x0A */ unsigned __int16 Materia[0x5];
    /* 0x14 */ byte MateriaGrade[0x5];
    /*      */ byte _gap_0x19;
    /*      */ byte _gap_0x1A[0x2];
};

struct Client_UI_Misc_RaptureGearsetModule_GearsetEntry /* Size=0x1C0 */
{
    /* 0x000 */ byte ID;
    /* 0x001 */ byte Name[0x2F];
    /*       */ byte _gap_0x30;
    /* 0x031 */ byte ClassJob;
    /* 0x032 */ byte GlamourSetLink;
    /*       */ byte _gap_0x33;
    /* 0x034 */ __int16 ItemLevel;
    /*       */ byte _gap_0x36;
    /* 0x037 */ Client_UI_Misc_RaptureGearsetModule_GearsetFlag0x1 Flags;
    union {
    /* 0x038 */ byte ItemsData[0x188];
    /* 0x038 */ Client_UI_Misc_RaptureGearsetModule_GearsetItem MainHand;
    } _union_0x38;
    /*       */ byte _gap_0x40[0x10];
    /*       */ byte _gap_0x50[0x4];
    /* 0x054 */ Client_UI_Misc_RaptureGearsetModule_GearsetItem OffHand;
    /* 0x070 */ Client_UI_Misc_RaptureGearsetModule_GearsetItem Head;
    /* 0x08C */ Client_UI_Misc_RaptureGearsetModule_GearsetItem Body;
    /* 0x0A8 */ Client_UI_Misc_RaptureGearsetModule_GearsetItem Hands;
    /* 0x0C4 */ Client_UI_Misc_RaptureGearsetModule_GearsetItem Belt;
    /* 0x0E0 */ Client_UI_Misc_RaptureGearsetModule_GearsetItem Legs;
    /* 0x0FC */ Client_UI_Misc_RaptureGearsetModule_GearsetItem Feet;
    /* 0x118 */ Client_UI_Misc_RaptureGearsetModule_GearsetItem Ears;
    /* 0x134 */ Client_UI_Misc_RaptureGearsetModule_GearsetItem Neck;
    /* 0x150 */ Client_UI_Misc_RaptureGearsetModule_GearsetItem Wrists;
    /* 0x16C */ Client_UI_Misc_RaptureGearsetModule_GearsetItem RingRight;
    /* 0x188 */ Client_UI_Misc_RaptureGearsetModule_GearsetItem RightLeft;
    /* 0x1A4 */ Client_UI_Misc_RaptureGearsetModule_GearsetItem SoulStone;
};

struct Client_UI_Misc_SavedHotBars_SavedHotBarClassJobBars /* Size=0x5A0 */
{
    /*       */ byte _gap_0x0[0x5A0];
};

struct Client_UI_Misc_SavedHotBars_SavedHotBarClassJob /* Size=0x5A0 */
{
    /* 0x000 */ Client_UI_Misc_SavedHotBars_SavedHotBarClassJobBars Bar;
};

struct Client_UI_Misc_SavedHotBars_SavedHotBarClassJobSlots /* Size=0x50 */
{
    /*      */ byte _gap_0x0[0x50];
};

struct Client_UI_Misc_RaptureMacroModule_Macro_Lines /* Size=0x618 */
{
    /*       */ byte _gap_0x0[0x618];
};

struct Client_UI_Misc_RaptureMacroModule_Macro /* Size=0x688 */
{
    /* 0x000 */ unsigned __int32 IconId;
    /* 0x004 */ unsigned __int32 Unk;
    /* 0x008 */ Client_System_String_Utf8String Name;
    /* 0x070 */ Client_UI_Misc_RaptureMacroModule_Macro_Lines Line;
};

struct Client_UI_Misc_RetainerCommentModule_RetainerComment /* Size=0x68 */
{
    /* 0x00 */ unsigned __int64 ID;
    /*      */ byte _gap_0x8[0x60];
};

struct Client_UI_Info_InfoProxyCircle_Unk1 /* Size=0xF0 */
{
    /* 0x00 */ Client_System_String_Utf8String String0;
    /*      */ byte _gap_0x68[0x18];
    /* 0x80 */ Client_System_String_Utf8String String1;
    /*      */ byte _gap_0xE8[0x8];
};

struct Client_UI_Info_InfoProxyCrossWorldLinkShell_CWLSEntry /* Size=0x88 */
{
    /* 0x00 */ Client_System_String_Utf8String Name;
    /*      */ byte _gap_0x68[0x10];
    /* 0x78 */ unsigned __int32 FoundationTime;
    /*      */ byte _gap_0x7C[0x4];
    /*      */ byte _gap_0x80[0x4];
    /* 0x84 */ unsigned __int16 MembershipType;
    /*      */ byte _gap_0x86[0x2];
};

struct Client_UI_Info_InfoProxyFreeCompany_RankData /* Size=0x58 */
{
    /* 0x00 */ byte Permissions[0xA];
    /*      */ byte _gap_0xA[0x2];
    /*      */ byte _gap_0xC[0x4];
    /*      */ byte _gap_0x10[0x10];
    /* 0x20 */ unsigned __int16 MemberCount;
    /* 0x22 */ byte RankNumber;
    /* 0x23 */ byte Name[0x10];
    /*      */ byte _gap_0x33;
    /*      */ byte _gap_0x34[0x4];
    /*      */ byte _gap_0x38[0x20];
};

struct Client_UI_Info_InfoProxyFriendList_StrBuf /* Size=0x40 */
{
    /* 0x00 */ byte Data[0x40];
};

struct Client_UI_Info_InfoProxyItemSearch_Entry /* Size=0x8 */
{
    /* 0x0 */ unsigned __int32 ItemID;
    /* 0x4 */ unsigned __int32 Count;
};

struct Client_UI_Info_InfoProxyLetter_Letter /* Size=0xA0 */
{
    /* 0x00 */ __int64 SenderContentID;
    /* 0x08 */ unsigned __int32 Timestamp;
    /* 0x0C */ byte Attachments[0x28];
    /*      */ byte _gap_0x34[0x4];
    /* 0x38 */ unsigned __int32 Gil;
    /* 0x3C */ bool Read;
    /*      */ byte _gap_0x3D;
    /*      */ byte _gap_0x3E;
    /* 0x3F */ byte Sender[0x20];
    /* 0x5F */ byte MessagePreview[0x40];
    /*      */ byte _gap_0x9F;
};

struct Client_UI_Info_InfoProxyLinkShell_Entry /* Size=0x18 */
{
    /*      */ byte _gap_0x0[0x18];
};

enum Client_UI_Agent_AgentInspect_ItemData_IconFlagsTopRight0x1 /* Size=0x1 */
{
    None = 0,
    Dyeable = 1,
    Glamoured = 4
};

struct Client_UI_Agent_AgentInspect_ItemData_ColorRGB /* Size=0x3 */
{
    /* 0x0 */ byte B;
    /* 0x1 */ byte G;
    /* 0x2 */ byte R;
};

struct Client_UI_Agent_AgentInspect_ItemData /* Size=0x28 */
{
    /* 0x00 */ unsigned __int32 IconID;
    /* 0x04 */ Client_UI_Agent_AgentInspect_ItemData_IconFlagsTopRight0x1 IconFlags1;
    /* 0x05 */ Client_UI_Agent_AgentInspect_ItemData_ColorRGB Color;
    /* 0x08 */ bool Filled;
    /* 0x09 */ bool IsILevelSynced;
    /*      */ byte _gap_0xA[0x2];
    /*      */ byte _gap_0xC[0x4];
    /* 0x10 */ __int16 ModelMain[0x4];
    /* 0x18 */ __int16 ModelSub[0x4];
    /* 0x20 */ Client_Game_InventoryItem* Item;
};

enum Client_UI_Agent_AgentInspect_ItemDataFlags0x4 /* Size=0x4 */
{
    None = 0,
    Filled = 8
};

enum Client_UI_Agent_AgentReadyCheck_ReadyCheckStatus0x1 /* Size=0x1 */
{
    Unknown = 0,
    AwaitingResponse = 1,
    Ready = 2,
    NotReady = 3,
    MemberNotPresent = 4
};

struct Client_UI_Agent_AgentReadyCheck_ReadyCheckEntry /* Size=0x10 */
{
    /* 0x00 */ __int64 ContentID;
    /* 0x08 */ Client_UI_Agent_AgentReadyCheck_ReadyCheckStatus0x1 Status;
    /*      */ byte _gap_0x9;
    /*      */ byte _gap_0xA[0x2];
    /*      */ byte _gap_0xC[0x4];
};

struct Client_UI_Agent_AgentRetainerItemTransferData_DuplicateItemEntry /* Size=0x78 */
{
    /* 0x00 */ Client_System_String_Utf8String Name;
    /* 0x68 */ bool Exists;
    /*      */ byte _gap_0x69;
    /*      */ byte _gap_0x6A[0x2];
    /* 0x6C */ bool IsEnabled;
    /*      */ byte _gap_0x6D;
    /*      */ byte _gap_0x6E[0x2];
    /* 0x70 */ unsigned __int32 ItemId;
    /* 0x74 */ unsigned __int32 UiCategoryIconId;
};

enum Client_Graphics_Scene_CharacterBase_ModelType0x1 /* Size=0x1 */
{
    Human = 1,
    DemiHuman = 2,
    Monster = 3,
    Weapon = 4
};

enum Client_Graphics_Render_Manager_RenderViews0x4 /* Size=0x4 */
{
    OmniShadow0 = 0,
    OmniShadow1 = 1,
    OmniShadow2 = 2,
    OmniShadow3 = 3,
    OmniShadow4 = 4,
    OmniShadow5 = 5,
    OmniShadow6 = 6,
    OmniShadow7 = 7,
    OmniShadow8 = 8,
    OmniShadow9 = 9,
    OmniShadow10 = 10,
    OmniShadow11 = 11,
    OmniShadow12 = 12,
    OmniShadow13 = 13,
    OmniShadow14 = 14,
    OmniShadow15 = 15,
    OmniShadow16 = 16,
    OmniShadow17 = 17,
    OmniShadow18 = 18,
    OmniShadow19 = 19,
    OmniShadow20 = 20,
    OmniShadow21 = 21,
    OmniShadow22 = 22,
    OmniShadow23 = 23,
    Environment = 24,
    View25 = 25,
    OffscreenRenderer0 = 26,
    OffscreenRenderer1 = 27,
    OffscreenRenderer2 = 28,
    OffscreenRenderer3 = 29,
    Main = 30,
    Unused = 31
};

enum Client_Graphics_Render_Manager_RenderSubViews0x4 /* Size=0x4 */
{
    Shadow0 = 0,
    Shadow1 = 1,
    Shadow2 = 2,
    Shadow3 = 3,
    Roof = 4,
    Cube1 = 5,
    Cube2 = 6,
    Cube3 = 7,
    Cube4 = 8,
    Cube5 = 9,
    OmniShadow0 = 10,
    OmniShadow1 = 11,
    OmniShadow2 = 12,
    OmniShadow3 = 13,
    Shadow = 14,
    Main = 15,
    Query = 16,
    Hud = 17
};

struct Client_Game_UI_Map_MapMarkerInfo /* Size=0x90 */
{
    /*      */ byte _gap_0x0[0x4];
    /* 0x04 */ unsigned __int32 QuestID;
    /* 0x08 */ Client_System_String_Utf8String Name;
    /*      */ byte _gap_0x70[0x18];
    /* 0x88 */ unsigned __int16 RecommendedLevel;
    /*      */ byte _gap_0x8A;
    /* 0x8B */ byte ShouldRender;
    /*      */ byte _gap_0x8C[0x4];
};

struct Client_Game_UI_MobHunt_KillCounts /* Size=0x14 */
{
    /* 0x00 */ __int32 Counts[0x5];
};

enum Client_Game_UI_PlayerState_WeeklyBingoTaskStatus0x4 /* Size=0x4 */
{
    Open = 0,
    Claimable = 1,
    Claimed = 2
};

struct Client_Game_InstanceContent_InstanceContentDeepDungeon_DeepDungeonPartyInfo /* Size=0x8 */
{
    /* 0x0 */ unsigned __int32 ObjectId;
    /* 0x4 */ signed __int8 RoomIndex;
    /*     */ byte _gap_0x5;
    /*     */ byte _gap_0x6[0x2];
};

struct Client_Game_InstanceContent_InstanceContentDeepDungeon_DeepDungeonItemInfo /* Size=0x3 */
{
    /* 0x0 */ byte ItemId;
    /* 0x1 */ byte Count;
    /* 0x2 */ byte Flags;
};

struct Client_Game_InstanceContent_InstanceContentDeepDungeon_DeepDungeonChestInfo /* Size=0x2 */
{
    /* 0x0 */ byte ChestType;
    /* 0x1 */ signed __int8 RoomIndex;
};

enum Client_Game_Character_DrawDataContainer_WeaponSlot0x4 /* Size=0x4 */
{
    MainHand = 0,
    OffHand = 1,
    Unk = 2
};

struct Client_UI_Misc_SavedHotBars_SavedHotBarClassJobBars_SavedHotBarClassJobBar /* Size=0x50 */
{
    /* 0x00 */ Client_UI_Misc_SavedHotBars_SavedHotBarClassJobSlots Slot;
};

struct Client_UI_Misc_SavedHotBars_SavedHotBarClassJobSlots_SavedHotBarClassJobSlot /* Size=0x5 */
{
    /* 0x0 */ Client_UI_Misc_HotbarSlotType0x1 Type;
    /* 0x1 */ unsigned __int32 ID;
};

struct Client_UI_Info_InfoProxyCommonList_CharacterDict_Entry /* Size=0x10 */
{
    /* 0x00 */ unsigned __int64 ContentID;
    /*      */ byte _gap_0x8[0x2];
    /* 0x0A */ unsigned __int16 HomeWorld;
    /*      */ byte _gap_0xC[0x4];
};

struct Client_UI_Info_InfoProxyCommonList_CharacterArray_Entry /* Size=0x60 */
{
    /* 0x00 */ unsigned __int64 ContentId;
    /*      */ byte _gap_0x8;
    /* 0x09 */ unsigned __int16 OnlineStatus;
    /* 0x0B */ byte MentorState;
    /* 0x0C */ byte PartyStatus;
    /* 0x0D */ byte DutyStatus;
    /*      */ byte _gap_0xE[0x2];
    /*      */ byte _gap_0x10[0x4];
    /* 0x14 */ byte DictIndex;
    /*      */ byte _gap_0x15;
    /* 0x16 */ unsigned __int16 CurrentWorld;
    /* 0x18 */ unsigned __int16 HomeWorld;
    /* 0x1A */ unsigned __int16 Location;
    /* 0x1C */ Client_UI_Agent_GrandCompany0x1 GrandCompany;
    /* 0x1D */ byte MainLanguage;
    /* 0x1E */ byte AvailableLanguages;
    /*      */ byte _gap_0x1F;
    /*      */ byte _gap_0x20;
    /* 0x21 */ byte Job;
    /* 0x22 */ byte Name[0x20];
    /* 0x42 */ byte FCTag[0x6];
    /*      */ byte _gap_0x48[0x18];
};

enum Client_UI_Info_InfoProxyFreeCompany_RankData_BasicSettings0x2 /* Size=0x2 */
{
    None = 0,
    CompanyProfile = 1,
    RankSettings = 4,
    CrestDetails = 8,
    Invitations = 32,
    Applications = 64,
    MemberDismissal = 128,
    PromotionDemotion = 256,
    CompanyBoard = 512,
    ShortMessage = 2048,
    CompanyCredists = 4096,
    ExecutingActions = 8192,
    DiscardingActions = 16384
};

enum Client_UI_Info_InfoProxyFreeCompany_RankData_ChestAccess0x1 /* Size=0x1 */
{
    NoAccess = 1,
    ViewOnly = 2,
    FullAccess = 4,
    DepositOnly = 8
};

enum Client_UI_Info_InfoProxyFreeCompany_RankData_HousingAccess0x4 /* Size=0x4 */
{
    EstateHallAccess = 1,
    EstateRenameing = 2,
    GreetingCustomization = 4,
    PurchaseRelinquishLAnd = 8,
    HallConsructionRemoval = 16,
    HallRemodeling = 32,
    NoFurnishingPriv = 64,
    FurnishingPlacement = 128,
    FurnishingPlacementREmoval = 256,
    PaintFixturesFurnishings = 512,
    GuestAccess = 1024,
    MessageBook = 2048,
    Planting = 4096,
    Harvesting = 8192,
    CropDisposal = 16384,
    ChocoboStabling = 32768,
    TrainingChocobo = 65536,
    OrchestrionOperation = 131072
};

enum Client_UI_Info_InfoProxyFreeCompany_RankData_WorkshopAccess0x2 /* Size=0x2 */
{
    CosntructionRemoval = 1,
    ProjCommenceDisc = 2,
    ProjMatDelivery = 4,
    ProjectProgression = 8,
    ProjectItemCollection = 16,
    PrototypeCreation = 32,
    RegistrationDismantling = 64,
    Outfitting = 128,
    ColorCustomization = 256,
    Unk = 512,
    Renaming = 1024,
    VoyageDeploymentRecall = 2048,
    VoyageFinalization = 4096
};

struct Client_UI_Info_InfoProxyLetter_Letter_ItemAttachment /* Size=0x8 */
{
    /* 0x0 */ unsigned __int32 ItemID;
    /* 0x4 */ unsigned __int32 Count;
};

struct Client_UI_Agent_AgentBannerInterface_Storage_CharacterData /* Size=0x760 */
{
    /* 0x000 */ void** VTable;
    /*       */ byte _gap_0x8[0x10];
    /* 0x018 */ Client_System_String_Utf8String Name1;
    /* 0x080 */ Client_System_String_Utf8String Name2;
    /* 0x0E8 */ Client_System_String_Utf8String UnkString1;
    /* 0x150 */ Client_System_String_Utf8String UnkString2;
    /*       */ byte _gap_0x1B8[0x8];
    /* 0x1C0 */ Client_System_String_Utf8String Job;
    /*       */ byte _gap_0x228[0x10];
    /* 0x238 */ unsigned __int32 WorldId;
    /*       */ byte _gap_0x23C[0x4];
    /* 0x240 */ Client_System_String_Utf8String UnkString3;
    /*       */ byte _gap_0x2A8[0x8];
    /* 0x2B0 */ void* CharaView;
    /*       */ byte _gap_0x2B8[0x318];
    /* 0x5D0 */ Component_GUI_AtkTexture AtkTexture;
    /*       */ byte _gap_0x5E8[0xF8];
    /* 0x6E0 */ Client_System_String_Utf8String Title;
    /*       */ byte _gap_0x748[0x8];
    /* 0x750 */ void* SomePointer;
    /*       */ byte _gap_0x758[0x8];
};

enum Client_Game_QuestManager_QuestListArray_Quest_QuestFlags0x1 /* Size=0x1 */
{
    None = 0,
    Priority = 1,
    Hidden = 8
};

struct Client_Game_QuestManager_QuestListArray_Quest /* Size=0x18 */
{
    /*      */ byte _gap_0x0[0x8];
    /* 0x08 */ unsigned __int16 QuestID;
    /*      */ byte _gap_0xA;
    /* 0x0B */ Client_Game_QuestManager_QuestListArray_Quest_QuestFlags0x1 Flags;
    /*      */ byte _gap_0xC[0x4];
    /*      */ byte _gap_0x10[0x8];
};

