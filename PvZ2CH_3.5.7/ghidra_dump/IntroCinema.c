// Class: IntroCinema


/* IntroCinema::startStandardIntro() */

void __thiscall IntroCinema::startStandardIntro(IntroCinema *this)

{
  (**(code **)(*(long *)this + 0xe8))(this,0,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroCinema::StaticClassInit() */

void IntroCinema::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieSpawnLoc");
    (*pcVar3)(plVar2,asStack_10,FUN_03e427b4,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PFTrigger");
    (*pcVar3)(plVar2,asStack_10,FUN_03e41318,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"IntroCinema");
    (*pcVar3)(plVar2,asStack_10,FUN_03e42d40,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroCinema::StaticGetClass() */

long * IntroCinema::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"IntroCinema",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroCinema::onAddToRenderQueue(RenderQueue*) */

void __thiscall IntroCinema::onAddToRenderQueue(IntroCinema *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDraw);
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1<IntroCinema,void(IntroCinema::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,1000000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroCinema::setupCinematicPan() */

void IntroCinema::setupCinematicPan(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  ResourceInfo *this;
  AnimationController *pAVar5;
  Board *this_00;
  float fVar6;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  local_8 = ___stack_chk_guard;
  this_00[0x960] = (Board)0x1;
  piVar3 = (int *)Board::GetBoardPanLocations(this_00);
  iVar1 = piVar3[1];
  local_14 = FUN_03e41854(iVar1);
  local_14 = local_14 + 0x32;
  local_10 = FUN_03e41854(iVar1);
  local_10 = local_10 + -0x78;
  local_c = FUN_03e41854(-*piVar3);
  piVar4 = eastl::min_alt<int>(&local_14,&local_c);
  iVar1 = *piVar4;
  local_c = FUN_03e41854(-piVar3[2]);
  piVar3 = eastl::max_alt<int>(&local_10,&local_c);
  iVar2 = *piVar3;
  (**(code **)(*(long *)this_00 + 0x1a8))(this_00,iVar1,0);
  this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this_00 + 0x898));
  FUN_03e412fc(this + 0x10);
  FUN_03e412f4(this + 0x14,1);
  fVar6 = (float)FUN_03e41308(*(undefined4 *)(this + 0x10));
  pAVar5 = (AnimationController *)MoveBoard::Create(0x4149999a,iVar1,iVar2,0,0,1);
  if (local_8 == ___stack_chk_guard) {
    AnimationMgr::Add((AnimationMgr *)this,pAVar5,fVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroCinema::IntroCinema() */

void __thiscall IntroCinema::IntroCinema(IntroCinema *this)

{
  undefined4 uVar1;
  
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0678b020;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x88) = uVar1;
  return;
}


/* IntroCinema::StaticNew() */

IntroCinema * IntroCinema::StaticNew(void)

{
  IntroCinema *this;
  
  this = ::operator_new(0xb0);
  IntroCinema(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03e424e0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* IntroCinema::onDraw(Sexy::Graphics*) */

void __thiscall IntroCinema::onDraw(IntroCinema *this,Graphics *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Graphics3D *pGVar7;
  PrimeTypeface *pPVar8;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Image *pIVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  GraphicsAutoState aGStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  Insets aIStack_70 [16];
  Insets aIStack_60 [16];
  int local_50 [4];
  undefined4 local_40 [4];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_88,param_1);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
  pGVar7 = (Graphics3D *)Sexy::Graphics::Get3D(param_1);
  Sexy::Graphics3D::PushTransform(pGVar7,(SexyMatrix3 *)aSStack_30,false);
  uVar11 = *(uint *)(this + 0x80);
  if (uVar11 < 4) {
    if (uVar11 == 3) {
      uVar16 = *(undefined4 *)(this + 0x84);
      uVar14 = *(undefined4 *)(this + 0x88);
      uVar12 = PVZ_T();
      local_50[0] = 0xff;
      local_40[0] = 0;
      iVar6 = CurveLerp<int>(uVar16,uVar14,uVar12,local_50,(Insets *)local_40,1);
      Sexy::Insets::Insets((Insets *)local_40,0,0,0,iVar6);
      Sexy::Graphics::SetColor(param_1,(Color *)local_40);
    }
    else {
      Sexy::Insets::Insets((Insets *)local_40,0,0,0,0xff);
      Sexy::Graphics::SetColor(param_1,(Color *)local_40);
    }
    Sexy::Graphics::FillRect(param_1,0,0,*(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
    uVar11 = *(uint *)(this + 0x80);
  }
  if (uVar11 - 5 < 2) {
    fVar15 = *(float *)(this + 0x84);
    auVar13 = PVZ_T();
    fVar15 = CurveLerp<float>(auVar13,fVar15 + 1.0,auVar13._0_4_,&DAT_05752948,&DAT_05752944,2);
    if (*(int *)(this + 0x80) == 6) {
      fVar15 = 1.25;
    }
    this_00 = (LotteryResultProgressBar *)
              CachedResourcePtr<Sexy::Image>::operator->
                        ((CachedResourcePtr<Sexy::Image> *)&DAT_06addeb0);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)
              CachedResourcePtr<Sexy::Image>::operator->
                        ((CachedResourcePtr<Sexy::Image> *)&DAT_06addeb0);
    iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
    pIVar9 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                ((CachedResourcePtr<Sexy::Image> *)&DAT_06addeb0);
    iVar4 = FUN_03e41868(0);
    iVar6 = *(int *)(gLawnApp + 0x724);
    iVar5 = FUN_03e41868(0x14);
    Sexy::Graphics::DrawImage
              (param_1,pIVar9,iVar4 + (iVar6 - (int)((float)iVar2 * fVar15)) / 2,iVar5,
               (int)((float)iVar2 * fVar15),(int)((float)iVar3 * fVar15));
    uVar11 = *(uint *)(this + 0x80);
  }
  if (uVar11 - 6 < 2) {
    Sexy::Graphics::SetLinearBlend(param_1,true);
    Sexy::Graphics::SetDrawMode(param_1,0);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    uVar16 = *(undefined4 *)(this + 0x84);
    uVar14 = *(undefined4 *)(this + 0x88);
    uVar12 = PVZ_T();
    local_50[0] = 0;
    local_40[0] = 0xff;
    iVar6 = CurveLerp<int>(uVar16,uVar14,uVar12,local_50,(Insets *)local_40,1);
    if (*(int *)(this + 0x80) == 7) {
      iVar6 = 0xff;
    }
    Sexy::Insets::Insets((Insets *)local_40,0xff,0xff,0xff,iVar6);
    Sexy::Graphics::SetColor(param_1,(Color *)local_40);
    Sexy::Insets::Insets
              ((Insets *)local_40,0,0,*(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
    uVar10 = CachedResourcePtr<Sexy::Image>::operator->
                       ((CachedResourcePtr<Sexy::Image> *)&DAT_06ade0d8);
    DrawImageTiled(0x3f800000,param_1,(Insets *)local_40,uVar10);
    uVar11 = *(uint *)(this + 0x80);
  }
  lVar1 = gLawnApp;
  if (uVar11 - 1 < 3) {
    iVar2 = FUN_03e41868(100);
    iVar6 = *(int *)(lVar1 + 0x728);
    iVar3 = FUN_03e41868(200);
    Sexy::Insets::Insets(aIStack_70,0,iVar6 / 2 - iVar2,*(int *)(lVar1 + 0x724),iVar3);
    iVar6 = *(int *)(this + 0x80);
    if (iVar6 == 1) {
      uVar16 = *(undefined4 *)(this + 0x84);
      uVar14 = *(undefined4 *)(this + 0x88);
      uVar12 = PVZ_T();
      local_40[0] = 0xff;
      local_50[0] = iVar6;
      iVar6 = CurveLerp<int>(uVar16,uVar14,uVar12,local_50,local_40,1);
    }
    else if (iVar6 == 3) {
      uVar16 = *(undefined4 *)(this + 0x84);
      uVar14 = *(undefined4 *)(this + 0x88);
      uVar12 = PVZ_T();
      local_40[0] = 1;
      local_50[0] = 0xff;
      iVar6 = CurveLerp<int>(uVar16,uVar14,uVar12,local_50,local_40,1);
    }
    else {
      iVar6 = 0xff;
    }
    Sexy::Insets::Insets(aIStack_60,0xff,0xff,0xff,iVar6);
    TodStringTranslate(L"[POPCAP_GAMES_PRESENTS]");
    pPVar8 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZKaTong_42_HardShadow);
    Sexy::Insets::Insets((Insets *)local_50,aIStack_70);
    FUN_05477b24(auStack_78,auStack_80);
    Sexy::Insets::Insets((Insets *)local_40,aIStack_60);
    Sexy::PrimeTypeface::DrawString_Paragraph
              (pPVar8,param_1,(Insets *)local_50,auStack_78,1,1,(Insets *)local_40,0);
    FUN_05476c50(auStack_78);
    FUN_05476c50(auStack_80);
  }
  pGVar7 = (Graphics3D *)Sexy::Graphics::Get3D(param_1);
  Sexy::Graphics3D::PopTransform(pGVar7);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroCinema::~IntroCinema() */

void __thiscall IntroCinema::~IntroCinema(IntroCinema *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0678b020;
  std::vector<PFTrigger,std::allocator<PFTrigger>>::~vector
            ((vector<PFTrigger,std::allocator<PFTrigger>> *)(this + 0x90));
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
           *)(this + 0x68));
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* IntroCinema::~IntroCinema() */

void __thiscall IntroCinema::~IntroCinema(IntroCinema *this)

{
  ~IntroCinema(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroCinema::initializeModule() */

void __thiscall IntroCinema::initializeModule(IntroCinema *this)

{
  vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>> *this_00
  ;
  vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
  *this_01;
  uint uVar1;
  string *psVar2;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
             *)(this + 0x68);
  this_01 = (vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
             *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  StandardLevelIntro::initializeModule((StandardLevelIntro *)this);
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  clear(this_00);
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  clear(this_01);
  uVar1 = FUN_03e411a8();
  if ((uVar1 & 0xff) == 0) {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"peashooter");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06adde94 = uVar1 & 0xff;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"sunflower");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade04c = 1;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"wallnut");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade060 = 2;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"bloomerang");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06addff8 = 3;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"bonkchoy");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade114 = 4;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"iceburg");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade048 = 5;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"potatomine");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06addfec = 6;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"torchwood");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade044 = 7;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"mummy");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::push_back(this_01,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06addf90 = uVar1 & 0xff;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"ra");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::push_back(this_01,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06addf94 = 1;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"explorer");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::push_back(this_01,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06adde90 = 2;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"mummy");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::push_back(this_01,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade118 = 3;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"mummy_armor1");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::push_back(this_01,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06addfe8 = 4;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"mummy_armor2");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::push_back(this_01,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade050 = 5;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"pharaoh");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::push_back(this_01,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade110 = 6;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"iceburg");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade040 = 8;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"iceburg");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade064 = 9;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"iceburg");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06adde70 = 10;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"iceburg");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade068 = 0xb;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"tutorial_armor2");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::push_back(this_01,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade11c = 7;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"tutorial_armor2");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::push_back(this_01,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06addffc = 8;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"tutorial_armor2");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::push_back(this_01,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade130 = 9;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"tutorial_armor2");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::push_back(this_01,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade020 = 10;
  }
  else {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"peashooter");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06adde94 = 0;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"sunflower");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade04c = 1;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"wallnut");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade060 = 2;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"bloomerang");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06addff8 = 3;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"bonkchoy");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade114 = 4;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"iceburg");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade048 = 5;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"potatomine");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06addfec = 6;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"torchwood");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade044 = 7;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"mummy");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::push_back(this_01,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06addf90 = 0;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"ra");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::push_back(this_01,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06addf94 = 1;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"explorer");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::push_back(this_01,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06adde90 = 2;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"mummy");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::push_back(this_01,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade118 = 3;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"mummy_armor1");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::push_back(this_01,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06addfe8 = 4;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"mummy_armor2");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::push_back(this_01,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade050 = 5;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"pharaoh");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::push_back(this_01,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    DAT_06ade110 = 6;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroCinema::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall IntroCinema::AddResourceRequirements(IntroCinema *this,set *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  string *psVar6;
  ZombieType *pZVar7;
  ulong uVar8;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  uVar8 = DAT_06ade000 & 1;
  if (((DAT_06ade000 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ade000), iVar3 != 0)) {
    std::string::string((string *)&DAT_06added8,"peashooter");
    nop();
    std::string::string((string *)&DAT_06addee0,"sunflower");
    nop();
    std::string::string((string *)&DAT_06addee8,"wallnut");
    nop();
    std::string::string((string *)&DAT_06addef0,"bloomerang");
    nop();
    std::string::string((string *)&DAT_06addef8,"bonkchoy");
    nop();
    std::string::string((string *)&DAT_06addf00,"iceburg");
    nop();
    std::string::string((string *)&DAT_06addf08,"potatomine");
    nop();
    std::string::string((string *)&DAT_06addf10,"torchwood");
    nop();
    __cxa_guard_release(&DAT_06ade000);
    __cxa_atexit(FUN_03e41224,uVar8,&DAT_06a88000);
  }
  if (((DAT_06ade158 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ade158), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ade028,(string *)&DAT_06added8,(allocator *)&DAT_06addf18);
    __cxa_guard_release(&DAT_06ade158);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ade028,
                 &DAT_06a88000);
  }
  uVar8 = DAT_06addfa8 & 1;
  if (((DAT_06addfa8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06addfa8), iVar3 != 0)) {
    std::string::string((string *)&DAT_06addfb0,"mummy");
    nop();
    std::string::string((string *)&DAT_06addfb8,"ra");
    nop();
    std::string::string((string *)&DAT_06addfc0,"explorer");
    nop();
    std::string::string((string *)&DAT_06addfc8,"mummy");
    nop();
    std::string::string((string *)&DAT_06addfd0,"mummy_armor1");
    nop();
    std::string::string((string *)&DAT_06addfd8,"mummy_armor2");
    nop();
    std::string::string((string *)&DAT_06addfe0,"pharaoh");
    nop();
    __cxa_guard_release(&DAT_06addfa8);
    __cxa_atexit(FUN_03e411ec,uVar8,&DAT_06a88000);
  }
  if (((DAT_06ade138 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ade138), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ade140,(string *)&DAT_06addfb0,(allocator *)&DAT_06addfe8);
    __cxa_guard_release(&DAT_06ade138);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ade140,
                 &DAT_06a88000);
  }
  uVar8 = DAT_06ade010 & 1;
  if (((DAT_06ade010 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ade010), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ade008,"iceburg");
    nop();
    __cxa_guard_release(&DAT_06ade010);
    __cxa_atexit(FUN_03e411e0,uVar8,&DAT_06a88000);
  }
  if (((DAT_06addf98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06addf98), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06addf78,(string *)&DAT_06ade008,(allocator *)&DAT_06ade010);
    __cxa_guard_release(&DAT_06addf98);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06addf78,
                 &DAT_06a88000);
  }
  uVar8 = DAT_06addff0 & 1;
  if (((DAT_06addff0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06addff0), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ade0a0,"tutorial_armor2");
    nop();
    __cxa_guard_release(&DAT_06addff0);
    __cxa_atexit(FUN_03e411d4,uVar8,&DAT_06a88000);
  }
  if (((DAT_06addea8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06addea8), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06adde78,(string *)&DAT_06ade0a0,(allocator *)&DAT_06ade0a8);
    __cxa_guard_release(&DAT_06addea8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06adde78,
                 &DAT_06a88000);
  }
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06ade028);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&DAT_06ade028);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    FUN_05475d88(asStack_28,uVar5);
    psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    (**(code **)(*plVar4 + 0x48))(plVar4,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06ade140);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&DAT_06ade140);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    FUN_05475d88(asStack_28,uVar5);
    psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar6);
    pZVar7 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    ZombieType::AddInGameResourceRequirements(pZVar7,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  cVar2 = FUN_03e411a8();
  if (cVar2 == '\0') {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&DAT_06addf78);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06addf78);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1)
    {
      uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      FUN_05475d88(asStack_28,uVar5);
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      (**(code **)(*plVar4 + 0x48))(plVar4,param_1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      std::string::~string(asStack_28);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&DAT_06adde78);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06adde78);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1)
    {
      uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      FUN_05475d88(asStack_28,uVar5);
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar6);
      pZVar7 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      ZombieType::AddInGameResourceRequirements(pZVar7,param_1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      std::string::~string(asStack_28);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
  }
  std::string::string((string *)aRStack_10,"Credits");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  std::string::string((string *)aRStack_10,"Grass_Transition");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroCinema::spawnIntroZombies() */

void __thiscall IntroCinema::spawnIntroZombies(IntroCinema *this)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  RtWeakPtrBase *pRVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  Board *pBVar9;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  pBVar9 = *(Board **)(gLawnApp + 0x9f0);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06ade110);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(6);
  uVar3 = BoardTransforms::GridToBoardSpaceY(0);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + 0x21,
             uVar3);
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06addf94);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(6);
  uVar3 = BoardTransforms::GridToBoardSpaceY(1);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + -0xe,
             uVar3);
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06addfe8);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(6);
  uVar3 = BoardTransforms::GridToBoardSpaceY(2);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + 0xb,
             uVar3);
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06addf94);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(6);
  uVar3 = BoardTransforms::GridToBoardSpaceY(4);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + 4,uVar3
            );
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06addf90);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(6);
  uVar3 = BoardTransforms::GridToBoardSpaceY(0);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + 0x14,
             uVar3);
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06ade118);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(7);
  uVar3 = BoardTransforms::GridToBoardSpaceY(1);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + 10,
             uVar3);
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06addfe8);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(6);
  uVar3 = BoardTransforms::GridToBoardSpaceY(2);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + -0x15,
             uVar3);
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06ade110);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(6);
  uVar3 = BoardTransforms::GridToBoardSpaceY(3);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + -0x2c,
             uVar3);
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06addf94);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(7);
  uVar3 = BoardTransforms::GridToBoardSpaceY(4);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + 0x40,
             uVar3);
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06ade050);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(7);
  uVar3 = BoardTransforms::GridToBoardSpaceY(0);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + -0x11,
             uVar3);
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06addf90);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(7);
  uVar3 = BoardTransforms::GridToBoardSpaceY(1);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + 0x37,
             uVar3);
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06ade050);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(7);
  uVar3 = BoardTransforms::GridToBoardSpaceY(2);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + 5,uVar3
            );
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06addfe8);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(7);
  uVar3 = BoardTransforms::GridToBoardSpaceY(3);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + 9,uVar3
            );
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06addf90);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(7);
  uVar3 = BoardTransforms::GridToBoardSpaceY(4);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + -0x50,
             uVar3);
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06addfe8);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(8);
  uVar3 = BoardTransforms::GridToBoardSpaceY(2);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + 0x18,
             uVar3);
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06adde90);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(8);
  uVar3 = BoardTransforms::GridToBoardSpaceY(4);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + -0xb,
             uVar3);
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06adde90);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(8);
  uVar3 = BoardTransforms::GridToBoardSpaceY(3);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + -0x1f,
             uVar3);
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06ade118);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(8);
  uVar3 = BoardTransforms::GridToBoardSpaceY(1);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + 0x50,
             uVar3);
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06addfe8);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(8);
  uVar3 = BoardTransforms::GridToBoardSpaceY(2);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + 0x47,
             uVar3);
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06ade050);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(8);
  uVar3 = BoardTransforms::GridToBoardSpaceY(3);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + 0x4a,
             uVar3);
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06addf94);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(8);
  uVar3 = BoardTransforms::GridToBoardSpaceY(4);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + 0x5e,
             uVar3);
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06ade050);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(8);
  uVar3 = BoardTransforms::GridToBoardSpaceY(0);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + 0x57,
             uVar3);
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  pRVar4 = (RtWeakPtrBase *)FUN_03e4157c(*(undefined8 *)(this + 0x50),(long)DAT_06addf90);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar4);
  iVar2 = BoardTransforms::GridToBoardSpaceX(8);
  uVar3 = BoardTransforms::GridToBoardSpaceY(1);
  ZombieSpawnLoc::ZombieSpawnLoc
            ((ZombieSpawnLoc *)&local_30,(RtWeakPtr<Sexy::SoundResource> *)&local_38,iVar2 + 0x5f,
             uVar3);
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::push_back
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20,
             (ZombieSpawnLoc *)&local_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  uVar8 = 0;
  while( true ) {
    uVar1 = local_20;
    uVar7 = FUN_03e41584(local_20,local_18);
    if (uVar7 <= uVar8) break;
    pRVar4 = (RtWeakPtrBase *)FUN_03e41590(uVar1,uVar8);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_30,pRVar4);
    plVar5 = (long *)Board::AddZombie(pBVar9,(RtWeakPtr *)&local_30,0xfffffffe,1,1,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    DVec3::DVec3((DVec3 *)&local_30);
    lVar6 = FUN_03e41590(local_20,uVar8);
    Sexy::Point::Point((Point *)&local_38,*(int *)(lVar6 + 8),*(int *)(lVar6 + 0xc));
    local_2c = (float)local_34;
    local_30 = (float)local_38;
    (**(code **)(*plVar5 + 0x78))(plVar5,(RtWeakPtr *)&local_30);
    uVar8 = uVar8 + 1;
  }
  std::vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>>::~vector
            ((vector<ZombieSpawnLoc,std::allocator<ZombieSpawnLoc>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroCinema::onUpdate() */

void __thiscall IntroCinema::onUpdate(IntroCinema *this)

{
  float fVar1;
  float fVar2;
  GameStateMgr *pGVar3;
  char cVar4;
  char *pcVar5;
  ProfileMgr *pPVar6;
  PlayerInfo *pPVar7;
  string *psVar8;
  long lVar9;
  ulong uVar10;
  float *pfVar11;
  Plant *this_00;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 uVar15;
  Board *this_01;
  undefined4 uVar16;
  float fVar17;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar12 = *(uint *)(this + 0x80);
  do {
    uVar13 = uVar12;
    uVar12 = uVar13;
    switch(uVar13) {
    case 0:
      fVar17 = (float)PVZ_T();
      if (*(float *)(this + 0x88) <= fVar17) {
        *(undefined4 *)(this + 0x80) = 1;
        fVar17 = (float)PVZ_T();
        *(float *)(this + 0x84) = fVar17;
        *(float *)(this + 0x88) = fVar17 + 1.0;
        Board::PutIntoCinemaMode(*(Board **)(gLawnApp + 0x9f0));
      }
LAB_03e4559c:
      uVar12 = *(uint *)(this + 0x80);
      break;
    case 1:
      fVar17 = (float)PVZ_T();
      if (fVar17 < *(float *)(this + 0x88)) goto LAB_03e4559c;
      *(undefined4 *)(this + 0x80) = 2;
      fVar17 = (float)PVZ_T();
      uVar12 = *(uint *)(this + 0x80);
      *(float *)(this + 0x84) = fVar17;
      *(float *)(this + 0x88) = fVar17 + 0.25;
      break;
    case 2:
      fVar17 = (float)PVZ_T();
      if (fVar17 < *(float *)(this + 0x88)) goto LAB_03e4559c;
      *(undefined4 *)(this + 0x80) = 3;
      fVar17 = (float)PVZ_T();
      *(float *)(this + 0x84) = fVar17;
      *(float *)(this + 0x88) = fVar17 + 1.0;
      spawnIntroZombies(this);
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
      FUN_03e412fc(lVar9 + 0x10);
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
      FUN_03e412f4(lVar9 + 0x14,0);
      uVar12 = *(uint *)(this + 0x80);
      break;
    case 3:
      fVar17 = (float)PVZ_T();
      if (fVar17 < *(float *)(this + 0x88)) goto LAB_03e4559c;
      *(undefined4 *)(this + 0x80) = 4;
      fVar17 = (float)PVZ_T();
      uVar12 = *(uint *)(this + 0x80);
      *(float *)(this + 0x84) = fVar17;
      *(float *)(this + 0x88) = fVar17 + 1.5;
      break;
    case 4:
      fVar17 = (float)PVZ_T();
      if (fVar17 < *(float *)(this + 0x88)) goto LAB_03e4559c;
      *(undefined4 *)(this + 0x80) = 5;
      fVar17 = (float)PVZ_T();
      *(float *)(this + 0x84) = fVar17;
      *(float *)(this + 0x88) = fVar17 + 8.5;
      pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar5,"Play_UI_MagicShow_Logo");
      uVar12 = *(uint *)(this + 0x80);
      goto joined_r0x03e455f4;
    case 5:
      fVar17 = (float)PVZ_T();
      if (fVar17 < *(float *)(this + 0x88)) goto LAB_03e4559c;
      *(undefined4 *)(this + 0x80) = 6;
      fVar17 = (float)PVZ_T();
      *(float *)(this + 0x84) = fVar17;
      *(float *)(this + 0x88) = fVar17 + 1.5;
      LawnApp::StopMusic(gLawnApp,"Play_UI_MagicShow_End");
      uVar12 = *(uint *)(this + 0x80);
      break;
    case 6:
      fVar17 = (float)PVZ_T();
      if (fVar17 < *(float *)(this + 0x88) + 0.25) goto LAB_03e4559c;
      *(undefined4 *)(this + 0x80) = 7;
      uVar16 = PVZ_T();
      *(undefined4 *)(this + 0x84) = uVar16;
      uVar16 = PVZ_EOT();
      uVar12 = *(uint *)(this + 0x80);
      *(undefined4 *)(this + 0x88) = uVar16;
    }
joined_r0x03e455f4:
    if (uVar13 == uVar12) {
      if (3 < uVar13) {
        if (uVar13 < 6) {
          fVar17 = (float)PVZ_T();
          fVar17 = fVar17 - *(float *)(this + 0x84);
          if (*(int *)(this + 0x80) == 5) {
            fVar17 = fVar17 + 1.5;
          }
          uVar15 = *(undefined8 *)(this + 0x90);
          uVar14 = 0;
          uVar10 = FUN_03e4154c(uVar15,*(undefined8 *)(this + 0x98));
          while (uVar14 < uVar10) {
            pfVar11 = (float *)FUN_03e41574(uVar15,uVar14);
            if ((*(char *)(pfVar11 + 3) != '\0') || (fVar17 < *pfVar11)) {
              uVar14 = uVar14 + 1;
            }
            else {
              *(undefined1 *)(pfVar11 + 3) = 1;
              fVar1 = pfVar11[2];
              fVar2 = pfVar11[1];
              this_01 = *(Board **)(gLawnApp + 0x9f0);
              std::string::string(asStack_10,"");
              this_00 = (Plant *)Board::GetPlantAt(this_01,(int)fVar2,(int)fVar1,asStack_10);
              std::string::~string(asStack_10);
              nop();
              if ((this_00 != (Plant *)0x0) &&
                 (cVar4 = Plant::CanApplyPlantfood(this_00), cVar4 != '\0')) {
                (**(code **)(**(long **)(this_00 + 0xa8) + 0x220))(*(long **)(this_00 + 0xa8));
              }
              uVar15 = *(undefined8 *)(this + 0x90);
              uVar14 = uVar14 + 1;
              uVar10 = FUN_03e4154c(uVar15,*(undefined8 *)(this + 0x98));
            }
          }
        }
        else if (uVar13 == 7) {
          pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar6);
          std::string::string(asStack_10,"intro1");
          PlayerInfo::SetLevelCompleted(pPVar7,asStack_10,true);
          std::string::~string(asStack_10);
          nop();
          std::string::string(asStack_10,"egypt_level_1");
          pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar6);
          ProfileUtils::CompleteToEvent(asStack_10,false,false,pPVar7);
          std::string::~string(asStack_10);
          nop();
          psVar8 = (string *)ProfileUtils::Profile();
          std::string::string(asStack_10,"egypt1");
          PlayerInfo::SetCurrentLevel(psVar8);
          std::string::~string(asStack_10);
          nop();
          pPVar7 = (PlayerInfo *)ProfileUtils::Profile();
          std::string::string(asStack_10,"tutorial");
          PlayerInfo::SetKilledZombie(pPVar7,asStack_10);
          std::string::~string(asStack_10);
          nop();
          pPVar7 = (PlayerInfo *)ProfileUtils::Profile();
          std::string::string(asStack_10,"tutorial_armor1");
          PlayerInfo::SetKilledZombie(pPVar7,asStack_10);
          std::string::~string(asStack_10);
          nop();
          pPVar7 = (PlayerInfo *)ProfileUtils::Profile();
          std::string::string(asStack_10,"tutorial_armor2");
          PlayerInfo::SetKilledZombie(pPVar7,asStack_10);
          std::string::~string(asStack_10);
          nop();
          pPVar7 = (PlayerInfo *)ProfileUtils::Profile();
          std::string::string(asStack_10,"tutorial_flag");
          PlayerInfo::SetKilledZombie(pPVar7,asStack_10);
          std::string::~string(asStack_10);
          nop();
          Board::Quit(*(Board **)(gLawnApp + 0x9f0));
          pGVar3 = gGameStateMgr;
          std::string::string(asStack_10,"egypt1");
          GameStateMgr::StartLevel(pGVar3,&DAT_06ade058,asStack_10,0,6,6,0);
          std::string::~string(asStack_10);
          nop();
        }
      }
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroCinema::spawnIntroPlants() */

void __thiscall IntroCinema::spawnIntroPlants(IntroCinema *this)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  int *piVar4;
  RtWeakPtrBase *pRVar5;
  UIEasyButtonWidget *this_00;
  PopAnimRig *this_01;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  undefined4 uVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_e0 [8];
  undefined8 local_d8 [3];
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int iStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_d8);
  cVar2 = FUN_03e411a8();
  if (cVar2 == '\0') {
    piVar4 = &local_c0;
    local_c0 = DAT_06addff8;
    local_bc = DAT_06ade04c;
    local_b8 = DAT_06ade04c;
    local_b4 = DAT_06ade048;
    local_b0 = DAT_06ade114;
    local_ac = DAT_06ade060;
    local_a8 = DAT_06ade048;
    local_a4 = 0xffffffff;
    local_a0 = 0xffffffff;
    local_9c = DAT_06adde94;
    local_98 = DAT_06addff8;
    local_94 = DAT_06ade04c;
    local_90 = DAT_06adde94;
    local_8c = DAT_06addfec;
    local_88 = DAT_06adde94;
    local_84 = DAT_06ade044;
    local_80 = 0xffffffff;
    local_7c = 0xffffffff;
    local_78 = DAT_06adde94;
    local_74 = DAT_06adde94;
    local_70 = DAT_06ade04c;
    local_6c = DAT_06addff8;
    local_68 = DAT_06ade044;
    local_64 = DAT_06ade060;
    local_60 = DAT_06adde94;
    local_5c = DAT_06ade048;
    local_58 = 0xffffffff;
    local_54 = DAT_06ade04c;
    local_50 = DAT_06addff8;
    local_4c = DAT_06addfec;
    local_48 = DAT_06adde94;
    local_44 = DAT_06addfec;
    local_40 = DAT_06ade060;
    local_3c = DAT_06addff8;
    local_38 = 0xffffffff;
    local_34 = 0xffffffff;
    local_30 = DAT_06ade04c;
    local_2c = DAT_06adde94;
    local_28 = DAT_06ade048;
    local_24 = DAT_06addff8;
    local_20 = DAT_06ade114;
    local_1c = DAT_06ade060;
    local_18 = DAT_06ade048;
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
    do {
      piVar1 = piVar4 + 9;
      piVar7 = piVar4;
      do {
        piVar4 = piVar7 + 1;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)local_d8,piVar7);
        piVar7 = piVar4;
      } while (piVar4 != piVar1);
    } while (&iStack_c != piVar4);
  }
  else {
    piVar4 = &local_c0;
    local_c0 = DAT_06addff8;
    local_bc = DAT_06ade04c;
    local_b8 = DAT_06ade04c;
    local_b4 = DAT_06ade048;
    local_b0 = DAT_06ade114;
    local_ac = DAT_06ade060;
    local_a8 = DAT_06ade048;
    local_a4 = 0xffffffff;
    local_a0 = 0xffffffff;
    local_9c = DAT_06adde94;
    local_98 = DAT_06addff8;
    local_94 = DAT_06ade04c;
    local_90 = DAT_06adde94;
    local_8c = DAT_06addfec;
    local_88 = DAT_06adde94;
    local_84 = DAT_06ade044;
    local_80 = 0xffffffff;
    local_7c = 0xffffffff;
    local_78 = DAT_06adde94;
    local_74 = DAT_06adde94;
    local_70 = DAT_06ade04c;
    local_6c = DAT_06addff8;
    local_68 = DAT_06ade044;
    local_64 = DAT_06ade060;
    local_60 = DAT_06adde94;
    local_5c = DAT_06ade048;
    local_58 = 0xffffffff;
    local_54 = DAT_06ade04c;
    local_50 = DAT_06addff8;
    local_4c = DAT_06addfec;
    local_48 = DAT_06adde94;
    local_44 = DAT_06addfec;
    local_40 = DAT_06ade060;
    local_3c = DAT_06addff8;
    local_38 = 0xffffffff;
    local_34 = 0xffffffff;
    local_30 = DAT_06ade04c;
    local_2c = DAT_06adde94;
    local_28 = DAT_06ade048;
    local_24 = DAT_06addff8;
    local_20 = DAT_06ade114;
    local_1c = DAT_06ade060;
    local_18 = DAT_06ade048;
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
    do {
      piVar1 = piVar4 + 9;
      piVar7 = piVar4;
      do {
        piVar4 = piVar7 + 1;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)local_d8,piVar7);
        piVar7 = piVar4;
      } while (piVar4 != piVar1);
    } while (&iStack_c != piVar4);
  }
  uVar8 = 0;
  uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
  do {
    uVar6 = 0;
    do {
      while( true ) {
        piVar4 = (int *)FUN_03e41598(local_d8[0],uVar6 + uVar8 * 9);
        if (*piVar4 != -1) break;
LAB_03e45cf4:
        uVar6 = uVar6 + 1;
        if (uVar6 == 9) goto LAB_03e45dd0;
      }
      pRVar5 = (RtWeakPtrBase *)FUN_03e415a0(*(undefined8 *)(this + 0x68),(long)*piVar4);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_e0,pRVar5);
      this_00 = (UIEasyButtonWidget *)
                Board::AddPlant((Board *)0x0,uVar3,uVar6 & 0xffffffff,uVar8 & 0xffffffff,aRStack_e0,
                                1,1,0xffffffff,0,1,1,0,0,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_e0);
      this_01 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
      PopAnimRig::RandomizeCurrentAnimFrame(this_01);
      Plant::GetType();
      pRVar5 = (RtWeakPtrBase *)FUN_03e415a0(*(undefined8 *)(this + 0x68),(long)DAT_06addfec);
      cVar2 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)aRStack_e0,pRVar5);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_e0);
      if (cVar2 == '\0') goto LAB_03e45cf4;
      uVar9 = PVZ_T();
      uVar6 = uVar6 + 1;
      *(undefined4 *)(this_00 + 0x128) = uVar9;
    } while (uVar6 != 9);
LAB_03e45dd0:
    uVar8 = uVar8 + 1;
    if (uVar8 == 5) {
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_d8);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroCinema::setupPlantfoodSequence() */

void __thiscall IntroCinema::setupPlantfoodSequence(IntroCinema *this)

{
  vector<PFTrigger,std::allocator<PFTrigger>> *this_00;
  char cVar1;
  PFTrigger aPStack_18 [16];
  long local_8;
  
  this_00 = (vector<PFTrigger,std::allocator<PFTrigger>> *)(this + 0x90);
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03e411a8();
  if (cVar1 == '\0') {
    PFTrigger::PFTrigger(aPStack_18,2.5,0,3);
    std::vector<PFTrigger,std::allocator<PFTrigger>>::push_back(this_00,aPStack_18);
    PFTrigger::PFTrigger(aPStack_18,5.0,5,0);
    std::vector<PFTrigger,std::allocator<PFTrigger>>::push_back(this_00,aPStack_18);
    PFTrigger::PFTrigger(aPStack_18,5.2,5,2);
    std::vector<PFTrigger,std::allocator<PFTrigger>>::push_back(this_00,aPStack_18);
    PFTrigger::PFTrigger(aPStack_18,5.3,5,3);
    std::vector<PFTrigger,std::allocator<PFTrigger>>::push_back(this_00,aPStack_18);
    PFTrigger::PFTrigger(aPStack_18,5.4,5,4);
    std::vector<PFTrigger,std::allocator<PFTrigger>>::push_back(this_00,aPStack_18);
    PFTrigger::PFTrigger(aPStack_18,5.1,5,1);
    std::vector<PFTrigger,std::allocator<PFTrigger>>::push_back(this_00,aPStack_18);
    PFTrigger::PFTrigger(aPStack_18,6.5,1,4);
    std::vector<PFTrigger,std::allocator<PFTrigger>>::push_back(this_00,aPStack_18);
    PFTrigger::PFTrigger(aPStack_18,6.9,1,2);
    std::vector<PFTrigger,std::allocator<PFTrigger>>::push_back(this_00,aPStack_18);
    PFTrigger::PFTrigger(aPStack_18,7.4,2,3);
    std::vector<PFTrigger,std::allocator<PFTrigger>>::push_back(this_00,aPStack_18);
  }
  else {
    PFTrigger::PFTrigger(aPStack_18,2.5,0,3);
    std::vector<PFTrigger,std::allocator<PFTrigger>>::push_back(this_00,aPStack_18);
    PFTrigger::PFTrigger(aPStack_18,5.0,5,0);
    std::vector<PFTrigger,std::allocator<PFTrigger>>::push_back(this_00,aPStack_18);
    PFTrigger::PFTrigger(aPStack_18,5.2,5,2);
    std::vector<PFTrigger,std::allocator<PFTrigger>>::push_back(this_00,aPStack_18);
    PFTrigger::PFTrigger(aPStack_18,5.3,5,3);
    std::vector<PFTrigger,std::allocator<PFTrigger>>::push_back(this_00,aPStack_18);
    PFTrigger::PFTrigger(aPStack_18,5.4,5,4);
    std::vector<PFTrigger,std::allocator<PFTrigger>>::push_back(this_00,aPStack_18);
    PFTrigger::PFTrigger(aPStack_18,5.1,5,1);
    std::vector<PFTrigger,std::allocator<PFTrigger>>::push_back(this_00,aPStack_18);
    PFTrigger::PFTrigger(aPStack_18,6.5,1,4);
    std::vector<PFTrigger,std::allocator<PFTrigger>>::push_back(this_00,aPStack_18);
    PFTrigger::PFTrigger(aPStack_18,6.9,1,2);
    std::vector<PFTrigger,std::allocator<PFTrigger>>::push_back(this_00,aPStack_18);
    PFTrigger::PFTrigger(aPStack_18,7.4,2,3);
    std::vector<PFTrigger,std::allocator<PFTrigger>>::push_back(this_00,aPStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroCinema::onLoadComplete() */

void __thiscall IntroCinema::onLoadComplete(IntroCinema *this)

{
  long lVar1;
  UIWidget *this_00;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  FUN_03e41704(lVar1 + 0xb9);
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x84) = fVar2;
  *(float *)(this + 0x88) = fVar2 + 2.0;
  std::string::string(asStack_10,"UIScreen");
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  UIWidget::SetVisible(this_00,false);
  spawnIntroPlants(this);
  setupPlantfoodSequence(this);
  setupCinematicPan();
  LawnApp::PlayMusic(gLawnApp,"Play_UI_MagicShow_Start");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroCinema::registerForEvents() */

void __thiscall IntroCinema::registerForEvents(IntroCinema *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandardLevelIntro::registerForEvents((StandardLevelIntro *)this);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<IntroCinema,void(IntroCinema::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAddToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<IntroCinema,void(IntroCinema::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,aCStack_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

