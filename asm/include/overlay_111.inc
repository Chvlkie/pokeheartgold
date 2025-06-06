#include <nitro/fs/overlay.h>
#pragma once
.public TextFlags_SetCanABSpeedUpPrint
.public sub_02002B8C
.public LoadFontPal0
.public PlaySE
.public OverlayManager_CreateAndGetData
.public OverlayManager_GetData
.public OverlayManager_FreeData
.public OverlayManager_GetArgs
.public NARC_New
.public NARC_Delete
.public GfGfxLoader_LoadCharDataFromOpenNarc
.public GfGfxLoader_LoadScrnDataFromOpenNarc
.public GfGfxLoader_GXLoadPalFromOpenNarc
.public GfGfxLoader_GetCharDataFromOpenNarc
.public G2dRenderer_SetSubSurfaceCoords
.public NewMsgDataFromNarc
.public DestroyMsgData
.public ReadMsgData_ExpandPlaceholders
.public MessageFormat_New
.public MessageFormat_Delete
.public BufferBoxMonSpeciesName
.public MessagePrinter_New
.public MessagePrinter_Delete
.public PrintUIntOnWindow
.public sub_0200CE7C
.public SpriteRenderer_Create
.public SpriteRenderer_CreateGfxHandler
.public SpriteRenderer_GetG2dRendererPtr
.public sub_0200CF70
.public sub_0200CFF4
.public sub_0200D020
.public thunk_OamManager_ApplyAndResetBuffers
.public SpriteRenderer_Delete
.public SpriteRenderer_Init2DGfxResManagersFromCountsArray
.public SpriteRenderer_LoadCharResObjFromOpenNarc
.public SpriteRenderer_LoadPlttResObjFromOpenNarc
.public SpriteRenderer_LoadCellResObjFromOpenNarc
.public SpriteRenderer_LoadAnimResObjFromOpenNarc
.public SpriteRenderer_LoadResourcesAndCreateSprite_CustomBottomScreenOffset
.public SpriteRenderer_UnloadResourcesAndRemoveGfxHandler
.public sub_0200D9DC
.public UnkImageStruct_SetSpriteAnimSeqNo
.public UnkImageStruct_SetSpriteAnimActiveFlag
.public sub_0200DC8C
.public UnkImageStruct_SetSpriteVisibleFlag
.public UnkImageStruct_SetSpritePalIndex
.public UnkImageStruct_SetSpritePositionXY_CustomScreenYOffset
.public UnkImageStruct_GetSpritePositionXY_CustomScreenYOffset
.public LoadUserFrameGfx2
.public DrawFrameAndWindow2
.public ClearFrameAndWindow2
.public BeginNormalPaletteFade
.public IsPaletteFadeFinished
.public sub_0200FBDC
.public sub_0201660C
.public sub_02016624
.public sub_020166FC
.public sub_020168F4
.public sub_020169CC
.public Main_SetVBlankIntrCB
.public HBlankInterruptDisable
.public CreateHeap
.public DestroyHeap
.public AllocFromHeap
.public FreeToHeap
.public BgConfig_Alloc
.public SetBothScreensModesAndDisable
.public InitBgFromTemplate
.public FreeBgTilemapBuffer
.public BgCommitTilemapBufferToVram
.public BG_FillCharDataRange
.public FillBgTilemapRect
.public BgClearTilemapBufferAndCommit
.public AddWindowParameterized
.public RemoveWindow
.public ScheduleWindowCopyToVram
.public ClearWindowTilemapAndCopyToVram
.public FillWindowPixelBuffer
.public GetWindowBgConfig
.public GetWindowBgId
.public GetWindowX
.public GetWindowY
.public DoScheduledBgGpuUpdates
.public ScheduleBgTilemapBufferTransfer
.public ScheduleSetBgPosText
.public ResetAllTextPrinters
.public TextPrinterCheckActive
.public sub_020200A0
.public AddTextPrinterParameterized2
.public GX_SetBanks
.public GX_DisableEngineALayers
.public GX_EngineAToggleLayers
.public GX_DisableEngineBLayers
.public GX_EngineBToggleLayers
.public sub_02024B1C
.public Sprite_GetVramType
.public System_GetTouchNew
.public GF_AssertFail
.public String_Delete
.public Options_GetTextFrameDelay
.public Options_GetFrame
.public GetMonData
.public GetMonGender
.public Mon_GetBoxMon
.public Pokemon_GetIconNaix
.public Pokemon_GetIconPalette
.public sub_02074490
.public sub_0207449C
.public sub_020744A8
.public RatioToInt
.public sub_020880B0
.public NNS_G2dGetImageLocation
.public GX_LoadOBJ
.public GXS_LoadOBJ
.public DC_FlushRange
.public MI_CpuFill8
.public gSystem
.public ov111_021E5900
.public ov111_021E5960
.public ov111_021E59B8
