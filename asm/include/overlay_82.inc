#include <nitro/fs/overlay.h>
#pragma once
.public sub_02002B8C
.public LoadFontPal0
.public LoadFontPal1
.public PaletteData_Init
.public PaletteData_Free
.public PaletteData_AllocBuffers
.public PaletteData_FreeBuffers
.public sub_0200398C
.public PlaySE
.public StopSE
.public UnloadOverlayByID
.public HandleLoadOverlay
.public OverlayManager_New
.public OverlayManager_CreateAndGetData
.public OverlayManager_GetData
.public OverlayManager_FreeData
.public OverlayManager_GetArgs
.public OverlayManager_Run
.public NARC_New
.public NARC_Delete
.public GfGfxLoader_GetPlttData
.public GfGfxLoader_LoadCharDataFromOpenNarc
.public GfGfxLoader_LoadScrnDataFromOpenNarc
.public GfGfxLoader_GXLoadPalFromOpenNarc
.public CreateSpriteResourcesHeader
.public G2dRenderer_Init
.public sub_02009FE8
.public sub_0200A080
.public Create2DGfxResObjMan
.public Destroy2DGfxResObjMan
.public AddCharResObjFromNarc
.public AddPlttResObjFromNarc
.public AddCellOrAnimResObjFromNarc
.public AddCharResObjFromOpenNarc
.public AddCellOrAnimResObjFromOpenNarc
.public sub_0200ACF0
.public sub_0200AEB0
.public sub_0200AF94
.public sub_0200B0A8
.public OamManager_Create
.public OamManager_ApplyAndResetBuffers
.public OamManager_Free
.public NewMsgDataFromNarc
.public DestroyMsgData
.public ReadMsgDataIntoString
.public NewString_ReadMsgData
.public MessageFormat_New
.public MessageFormat_Delete
.public BufferIntegerAsString
.public BufferTypeName
.public StringExpandPlaceholders
.public MessagePrinter_New
.public MessagePrinter_Delete
.public PrintUIntOnWindow
.public LoadUserFrameGfx2
.public DrawFrameAndWindow2
.public ClearFrameAndWindow2
.public BeginNormalPaletteFade
.public IsPaletteFadeFinished
.public sub_0201660C
.public sub_02016624
.public sub_020166FC
.public sub_020168F4
.public sub_020169CC
.public Main_SetVBlankIntrCB
.public Main_SetHBlankIntrCB
.public CreateHeap
.public DestroyHeap
.public AllocFromHeap
.public FreeToHeap
.public BgConfig_Alloc
.public SetBothScreensModesAndDisable
.public InitBgFromTemplate
.public FreeBgTilemapBuffer
.public BG_ClearCharDataRange
.public FillBgTilemapRect
.public BgTilemapRectChangePalette
.public BgClearTilemapBufferAndCommit
.public AddWindow
.public RemoveWindow
.public CopyWindowToVram
.public ScheduleWindowCopyToVram
.public FillWindowPixelBuffer
.public GetWindowBgId
.public GetWindowWidth
.public GetWindowHeight
.public GetWindowX
.public GetWindowY
.public DoScheduledBgGpuUpdates
.public ScheduleBgTilemapBufferTransfer
.public TextPrinterCheckActive
.public AddTextPrinterParameterized2
.public GF_RunVramTransferTasks
.public sub_020215C0
.public sub_0202168C
.public sub_020216C8
.public sub_02022588
.public sub_02022608
.public sub_02022638
.public GX_SetBanks
.public GX_DisableEngineALayers
.public GX_EngineAToggleLayers
.public GX_DisableEngineBLayers
.public GX_EngineBToggleLayers
.public GX_BothDispOn
.public SpriteList_Delete
.public sub_0202457C
.public CreateSprite
.public Sprite_Delete
.public Sprite_SetMatrix
.public Set2dSpriteVisibleFlag
.public Set2dSpriteAnimActiveFlag
.public sub_02024868
.public Sprite_GetMatrixPtr
.public Set2dSpriteAnimSeqNo
.public TryChange2dSpriteAnimSeqNo
.public sub_02024AA8
.public GF_AssertFail
.public String_New
.public String_Delete
.public String_SetEmpty
.public CopyU16ArrayToString
.public Save_PlayerData_GetProfileAddr
.public Save_PlayerData_GetOptionsAddr
.public Options_GetTextFrameDelay
.public Options_GetFrame
.public Save_SpecialRibbons_Get
.public sub_02030BD0
.public sub_02037030
.public sub_02037474
.public sub_0203769C
.public sub_020379A0
.public sub_02037AC0
.public sub_02037B38
.public sub_02037BEC
.public sub_0203A880
.public sub_0203A914
.public GetMonData
.public Pokemon_GetIconNaix
.public Pokemon_GetIconPalette
.public sub_02074490
.public sub_02074498
.public sub_020744A4
.public Party_GetCount
.public Party_GetMonByIndex
.public SaveArray_IsNatDexEnabled
.public sub_02088288
.public sub_02089D40
.public sub_0208AD34
.public sub_02096910
.public NNS_G2dInitOamManagerModule
.public G2x_SetBlendBrightness_
.public GX_LoadBGPltt
.public DC_FlushRange
.public MI_CpuFill8
.public memset
.public _02103A1C
.public gSystem
.public ov80_0222A7CC
.public ov80_02237920
.public ov80_0223792C
.public ov82_0223DD60
.public ov82_0223DE20
.public ov82_0223DF74
.public ov82_0223F764
.public ov82_0223F7B4
.public ov82_0223F814
