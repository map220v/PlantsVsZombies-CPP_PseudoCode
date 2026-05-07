// Class: LevelEditorSingleMazeWave


/* LevelEditorSingleMazeWave::~LevelEditorSingleMazeWave() */

void __thiscall
LevelEditorSingleMazeWave::~LevelEditorSingleMazeWave(LevelEditorSingleMazeWave *this)

{
  *(undefined ***)this = &PTR_GetClass_0695c950;
  if (*(long **)(this + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe8) + 0x18))();
    *(undefined8 *)(this + 0xe8) = 0;
  }
  std::string::~string((string *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorSingleMazeWave::~LevelEditorSingleMazeWave() */

void __thiscall
LevelEditorSingleMazeWave::~LevelEditorSingleMazeWave(LevelEditorSingleMazeWave *this)

{
  ~LevelEditorSingleMazeWave(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorSingleMazeWave::LevelEditorSingleMazeWave() */

void __thiscall
LevelEditorSingleMazeWave::LevelEditorSingleMazeWave(LevelEditorSingleMazeWave *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0695c950;
  Set8BytesTo0(this + 0xe0);
  *(undefined8 *)(this + 0xe8) = 0;
  return;
}


/* LevelEditorSingleMazeWave::SetTypeName(std::string const&) */

void __thiscall
LevelEditorSingleMazeWave::SetTypeName(LevelEditorSingleMazeWave *this,string *param_1)

{
  if (*(long **)(this + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe8) + 0x18))();
    *(undefined8 *)(this + 0xe8) = 0;
  }
  thunk_FUN_05475e00(this + 0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleMazeWave::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorSingleMazeWave::Draw(LevelEditorSingleMazeWave *this,Graphics *param_1)

{
  undefined8 uVar1;
  SeedPacketUtils *this_00;
  PacketRenderData *pPVar2;
  DeviceImage *pDVar3;
  Image *pIVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85798);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  pIVar4 = *(Image **)(this + 0xe8);
  if (pIVar4 == (Image *)0x0) {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    pPVar2 = (PacketRenderData *)
             SeedPacketUtils::GetPlantPacketRenderData(this_00,(string *)(this + 0xe0),-1,-1,-1);
    pDVar3 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar2,0,0);
    *(DeviceImage **)(this + 0xe8) = pDVar3;
    SeedPacketUtils::DrawPacketToDeviceImage(this_00,pDVar3,pPVar2,false,-1,false,false);
    pIVar4 = *(Image **)(this + 0xe8);
    if (pIVar4 == (Image *)0x0) goto LAB_04b3beb4;
  }
  Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
LAB_04b3beb4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleMazeWave::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelEditorSingleMazeWave::TouchEnded(LevelEditorSingleMazeWave *this,Touch *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LevelEditorSeedChooser *this_00;
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xd8) == (int)*(undefined8 *)param_1) {
    bVar1 = std::operator==((string *)(this + 0xe0),"");
    if (bVar1) {
      this_00 = ::operator_new(0x150);
      LevelEditorSeedChooser::LevelEditorSeedChooser(this_00);
      uVar2 = FUN_04b334ec(200);
      uVar3 = FUN_04b334ec(100);
      uVar4 = FUN_04b334ec(400);
      (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar2,uVar3,uVar4,uVar4);
      FUN_04b32d58(afStack_28,this,this_00);
      LevelEditorSeedChooser::Init(this_00,1,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      UIUtil::ShowDialog((Widget *)this_00);
    }
    else {
      std::string::string(asStack_30,"");
      SetTypeName(this,asStack_30);
      std::string::~string(asStack_30);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

