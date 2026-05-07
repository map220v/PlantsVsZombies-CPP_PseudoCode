// Class: ArtifactGashaponSubSystem


/* ArtifactGashaponSubSystem::setPamAndLabel(std::string, std::string) */

void __thiscall
ArtifactGashaponSubSystem::setPamAndLabel
          (ArtifactGashaponSubSystem *this,undefined8 param_2,undefined8 param_3)

{
  thunk_FUN_05475e00(this + 0x48);
  thunk_FUN_05475e00(this + 0x50,param_3);
  return;
}


/* ArtifactGashaponSubSystem::handleTouch(Sexy::Touch const&) */

bool __thiscall
ArtifactGashaponSubSystem::handleTouch(ArtifactGashaponSubSystem *this,Touch *param_1)

{
  if (*(int *)(param_1 + 0x30) != 3) {
    return false;
  }
  return *(int *)(this + 0x24) - 1U < 2;
}


/* ArtifactGashaponSubSystem::cancelTouch() */

void ArtifactGashaponSubSystem::cancelTouch(void)

{
  return;
}


/* ArtifactGashaponSubSystem::onDrawDardBackground(Sexy::Graphics*) */

void __thiscall
ArtifactGashaponSubSystem::onDrawDardBackground(ArtifactGashaponSubSystem *this,Graphics *param_1)

{
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::StaticClassInit() */

void ArtifactGashaponSubSystem::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"ArtifactGashaponSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_037c5840,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGashaponSubSystem::StaticGetClass() */

long * ArtifactGashaponSubSystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactGashaponSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGashaponSubSystem::GetClass() const */

long * ArtifactGashaponSubSystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactGashaponSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGashaponSubSystem::displayResult() */

void __thiscall ArtifactGashaponSubSystem::displayResult(ArtifactGashaponSubSystem *this)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x98);
  puVar1 = (uint *)FUN_037c0eb4(uVar4,0);
  puVar2 = (uint *)FUN_037c0eb4(uVar4,1);
  puVar3 = (uint *)FUN_037c0eb4(uVar4,2);
  Sexy::OutputDebugStrF
            ((wchar_t *)"ArtifactGashaponSubSystem::displayResult first: %d, second: %d, third: %d",
             (ulong)*puVar1,(ulong)*puVar2,(ulong)*puVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::onDrawResultDescription(Sexy::Graphics*) */

void __thiscall
ArtifactGashaponSubSystem::onDrawResultDescription
          (ArtifactGashaponSubSystem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  Image *pIVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  wstring awStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  int local_64;
  int local_58;
  int local_54;
  int local_48;
  int local_44;
  int local_38;
  int local_34;
  int local_30;
  string asStack_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::GetGridBoundingRect();
  BoardConstants::GRIDSQUARE_WIDTH();
  iVar1 = FUN_037c17a4(local_78 & 0xffffffff);
  iVar2 = FUN_037c17a4(local_78._4_4_);
  iVar3 = FUN_037c17a4(local_70 & 0xffffffff);
  iVar4 = FUN_037c17a4(local_70._4_4_);
  Sexy::Insets::Insets((Insets *)&local_18,iVar1,iVar2,iVar3,iVar4);
  local_78 = local_18;
  local_70 = uStack_10;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Point::Point((Point *)&local_a0,iVar1 * 3 + 0xd2,iVar2 * 3 + 0xa0);
  iVar1 = local_a0;
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  Sexy::Point::Point((Point *)&local_98,iVar1 + iVar2 * 2,local_9c);
  iVar1 = local_a0;
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  Sexy::Point::Point((Point *)&local_90,iVar1 + iVar2 * 4,local_9c);
  piVar5 = (int *)FUN_037c0eb4(*(undefined8 *)(this + 0x98),0);
  Sexy::StrFormat("IMAGE_UI_ARTIFACT_GASHAPON_CARD_%d",asStack_28,(ulong)(*piVar5 - 1));
  pcVar6 = (char *)FUN_0547429c(asStack_28);
  std::string::string((string *)&local_18,pcVar6);
  StringHelper::ToImage((string *)&local_18,false);
  std::string::~string((string *)&local_18);
  nop();
  std::string::~string(asStack_28);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar14 = (float)(iVar1 << 1);
  dVar17 = (double)(iVar1 << 1);
  fVar15 = fVar14 * 1.2144331;
  dVar16 = (double)fVar15;
  dVar12 = (double)FUN_037c17c8((double)local_90 - dVar17 * 0.5);
  dVar13 = (double)FUN_037c17c8((double)local_8c - dVar16 * 0.5);
  fVar10 = (float)FUN_037c17b8(fVar14);
  fVar11 = (float)FUN_037c17b8(fVar15);
  Sexy::Insets::Insets((Insets *)&local_68,(int)dVar12,(int)dVar13,(int)fVar10,(int)fVar11);
  dVar12 = (double)FUN_037c17c8((double)local_98 - dVar17 * 0.5);
  dVar13 = (double)FUN_037c17c8((double)local_94 - dVar16 * 0.5);
  fVar10 = (float)FUN_037c17b8(fVar14);
  fVar11 = (float)FUN_037c17b8(fVar15);
  Sexy::Insets::Insets((Insets *)&local_58,(int)dVar12,(int)dVar13,(int)fVar10,(int)fVar11);
  dVar12 = (double)FUN_037c17c8((double)local_a0 - dVar17 * 0.5);
  dVar13 = (double)FUN_037c17c8((double)local_9c - dVar16 * 0.5);
  fVar10 = (float)FUN_037c17b8(fVar14);
  fVar11 = (float)FUN_037c17b8(fVar15);
  Sexy::Insets::Insets((Insets *)&local_48,(int)dVar12,(int)dVar13,(int)fVar10,(int)fVar11);
  if (0 < *(int *)(this + 0x14)) {
    iVar1 = (int)fVar14;
    iVar2 = (int)fVar15;
    piVar5 = (int *)FUN_037c0eb4(*(undefined8 *)(this + 0x98),0);
    Sexy::StrFormat("IMAGE_UI_ARTIFACT_GASHAPON_CARD_%d",asStack_28,(ulong)(*piVar5 - 1));
    pcVar6 = (char *)FUN_0547429c(asStack_28);
    std::string::string((string *)&local_18,pcVar6);
    pIVar7 = (Image *)StringHelper::ToImage((string *)&local_18,false);
    std::string::~string((string *)&local_18);
    nop();
    std::string::~string(asStack_28);
    Sexy::Graphics::DrawImage(param_1,pIVar7,local_68,local_64,iVar1,iVar2);
    if (1 < *(int *)(this + 0x14)) {
      piVar5 = (int *)FUN_037c0eb4(*(undefined8 *)(this + 0x98),1);
      Sexy::StrFormat("IMAGE_UI_ARTIFACT_GASHAPON_CARD_%d",asStack_28,(ulong)(*piVar5 - 1));
      pcVar6 = (char *)FUN_0547429c(asStack_28);
      std::string::string((string *)&local_18,pcVar6);
      pIVar7 = (Image *)StringHelper::ToImage((string *)&local_18,false);
      std::string::~string((string *)&local_18);
      nop();
      std::string::~string(asStack_28);
      Sexy::Graphics::DrawImage(param_1,pIVar7,local_58,local_54,iVar1,iVar2);
      if (2 < *(int *)(this + 0x14)) {
        piVar5 = (int *)FUN_037c0eb4(*(undefined8 *)(this + 0x98),2);
        Sexy::StrFormat("IMAGE_UI_ARTIFACT_GASHAPON_CARD_%d",asStack_28,(ulong)(*piVar5 - 1));
        pcVar6 = (char *)FUN_0547429c(asStack_28);
        std::string::string((string *)&local_18,pcVar6);
        pIVar7 = (Image *)StringHelper::ToImage((string *)&local_18,false);
        std::string::~string((string *)&local_18);
        nop();
        std::string::~string(asStack_28);
        Sexy::Graphics::DrawImage(param_1,pIVar7,local_48,local_44,iVar1,iVar2);
        if (2 < *(int *)(this + 0x14)) {
          iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
          iVar1 = FUN_037c17a4(iVar1 + 200);
          iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
          iVar2 = FUN_037c17a4((int)((double)iVar2 * 0.5) + 0xa0);
          iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          iVar3 = FUN_037c17a4(iVar3 << 3);
          BoardConstants::GRIDSQUARE_HEIGHT();
          iVar4 = FUN_037c17a4();
          Sexy::Insets::Insets((Insets *)&local_38,iVar1,iVar2,iVar3,iVar4);
          if (this[0x1d] == (ArtifactGashaponSubSystem)0x0) {
            lVar8 = FUN_037c0e98(*(undefined8 *)(this + 0x28),(long)(*(int *)(this + 0x20) + -1));
            lVar8 = lVar8 + 0x58;
          }
          else {
            lVar8 = FUN_037c0e98(*(undefined8 *)(this + 0x28),(long)(*(int *)(this + 0x20) + -1));
            lVar8 = lVar8 + 0x60;
          }
          FUN_05477b24(awStack_88,lVar8);
          TodStringTranslate(awStack_88);
          iVar1 = FUN_037c17d8();
          Sexy::Insets::Insets((Insets *)&local_18,local_38,local_34,local_30,iVar1);
          uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZKaTong_32);
          Sexy::Color::Color((Color *)asStack_28,0xff,0xcc,0x33);
          WriteWordInRect(param_1,auStack_80,(Insets *)&local_18,uVar9,asStack_28,5,1);
          FUN_05476c50(auStack_80);
          FUN_05476c50(awStack_88);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGashaponSubSystem::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ArtifactGashaponSubSystem::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"card0");
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  else {
    bVar1 = std::operator==(param_4,"card1");
    if (bVar1) {
      *(undefined4 *)(param_1 + 0x14) = 2;
      return;
    }
    bVar1 = std::operator==(param_4,"card2");
    if (bVar1) {
      *(undefined4 *)(param_1 + 0x14) = 3;
      param_1[0x10] = (string)0x1;
    }
  }
  return;
}


/* ArtifactGashaponSubSystem::IsValidTargete(Zombie*) */

char __thiscall
ArtifactGashaponSubSystem::IsValidTargete(ArtifactGashaponSubSystem *this,Zombie *param_1)

{
  char cVar1;
  char cVar2;
  
  if ((((param_1 == (Zombie *)0x0) || (cVar1 = RealObject::IsOnTeam(param_1,2), cVar1 == '\0')) ||
      (cVar2 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar2 != '\0')) ||
     (((cVar2 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar2 != '\0' ||
       (cVar2 = Zombie::IsIgnoringAllDamage(param_1), cVar2 != '\0')) ||
      (cVar2 = FUN_037c2fb0(*(undefined4 *)(param_1 + 0xcc)), cVar2 != '\0')))) {
    cVar1 = '\0';
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::Update() */

void __thiscall ArtifactGashaponSubSystem::Update(ArtifactGashaponSubSystem *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  PopAnimRig *this_01;
  long lVar2;
  float fVar3;
  float fVar4;
  RtMixedPtr<Sexy::Image> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Effect_PopAnim::GetPopAnimRigPtr();
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Effect_PopAnim::GetPopAnimRigPtr();
      this_01 = (PopAnimRig *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      lVar2 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      fVar3 = (float)FUN_037c0d64(*(undefined4 *)(lVar2 + 0x38));
      lVar2 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      fVar4 = (float)FUN_037c0d68(*(undefined4 *)(lVar2 + 0x3c));
      PopAnimRig::UpdateAnim(this_01,fVar3,fVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::AddToRenderQueue(RenderQueue*) */

void __thiscall
ArtifactGashaponSubSystem::AddToRenderQueue(ArtifactGashaponSubSystem *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x24) == 1) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onDrawDardBackground);
    Sexy::Delegate1<Sexy::Graphics*>::
    Delegate1<ArtifactGashaponSubSystem,void(ArtifactGashaponSubSystem::*)(Sexy::Graphics*)>
              (aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,0xdbbaa,aDStack_38);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onDrawResultDescription);
    Sexy::Delegate1<Sexy::Graphics*>::
    Delegate1<ArtifactGashaponSubSystem,void(ArtifactGashaponSubSystem::*)(Sexy::Graphics*)>
              (aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,0xdbbbe,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::OnSpawnGuacodile(Projectile*, int) */

void ArtifactGashaponSubSystem::OnSpawnGuacodile(Projectile *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ArtifactGashaponGuacodileProjectile *pAVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  float local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)(ulong)(uint)param_2;
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this);
  local_10 = *(undefined4 *)(puVar2 + 1);
  local_18 = (float)*puVar2;
  fStack_14 = (float)((ulong)*puVar2 >> 0x20);
  _local_18 = CONCAT44(fStack_14 - 35.0,local_18 + 15.0);
  (**(code **)(*(long *)this + 0x78))(this,&local_18);
  FUN_037c1340(this + 0x24);
  if (param_1[0x1d] == (Projectile)0x0) {
    iVar1 = *(int *)(param_1 + 0x58) * 10 + 0x50;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x58) * 0x1e + 0xf0;
  }
  pAVar3 = Sexy::RtObject::Cast<ArtifactGashaponGuacodileProjectile>((RtObject *)this);
  FUN_037c0e58((float)iVar1,pAVar3 + 0x1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::OnSpawnParsnip(Projectile*, int) */

void ArtifactGashaponSubSystem::OnSpawnParsnip(Projectile *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ArtifactGashaponParsnipProjectile *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)(ulong)(uint)param_2;
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  local_10 = *(undefined4 *)(puVar2 + 1);
  local_18 = (float)*puVar2;
  fStack_14 = (float)((ulong)*puVar2 >> 0x20);
  _local_18 = CONCAT44(fStack_14 - 35.0,local_18 + 15.0);
  (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_18);
  FUN_037c1340(this_00 + 0x24);
  if (param_1[0x1d] == (Projectile)0x0) {
    iVar1 = (*(int *)(param_1 + 0x58) + -0x1e) * 0xf + 0x260;
  }
  else {
    iVar1 = (*(int *)(param_1 + 0x58) + -0x1e) * 0x2d + 0x720;
  }
  this = Sexy::RtObject::Cast<ArtifactGashaponParsnipProjectile>((RtObject *)this_00);
  ParsnipProjectile::StartAnimation((ParsnipProjectile *)this,false);
  FUN_037c0e60((float)iVar1,this + 0x1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::ArtifactGashaponSubSystem() */

void __thiscall
ArtifactGashaponSubSystem::ArtifactGashaponSubSystem(ArtifactGashaponSubSystem *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  this[0x1c] = (ArtifactGashaponSubSystem)0x1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_GetClass_06699710;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  Set8BytesTo0(this + 0x48);
  Set8BytesTo0(this + 0x50);
  *(undefined4 *)(this + 0x58) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Artifact");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Num");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGashaponSubSystem::StaticNew() */

ArtifactGashaponSubSystem * ArtifactGashaponSubSystem::StaticNew(void)

{
  ArtifactGashaponSubSystem *this;
  
  this = ::operator_new(0xb0);
  ArtifactGashaponSubSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::registerHandTouchEvents() */

void __thiscall ArtifactGashaponSubSystem::registerHandTouchEvents(ArtifactGashaponSubSystem *this)

{
  Board *pBVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<ArtifactGashaponSubSystem,bool(ArtifactGashaponSubSystem::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<ArtifactGashaponSubSystem,void(ArtifactGashaponSubSystem::*)()>
            (aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,0xb,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::AffectShadowShroom(bool) */

void __thiscall
ArtifactGashaponSubSystem::AffectShadowShroom(ArtifactGashaponSubSystem *this,bool param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  Zombie *extraout_x0;
  Zombie *extraout_x0_00;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,2);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  if (param_1) {
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar3)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      nop();
      cVar2 = IsValidTargete(this,extraout_x0);
      if (cVar2 != '\0') {
        iVar1 = *(int *)(this + 0x58);
        Zombie::ApplyCondition((Zombie *)0x41200000,0,extraout_x0,0x30,1);
        Zombie::SetConditionTracker((float)(iVar1 * 0x24 + 0x168),extraout_x0,0x30);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
  }
  else {
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar3)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      nop();
      cVar2 = IsValidTargete(this,extraout_x0_00);
      if (cVar2 != '\0') {
        iVar1 = *(int *)(this + 0x58);
        Zombie::ApplyCondition((Zombie *)0x41200000,0,extraout_x0_00,0x30,1);
        Zombie::SetConditionTracker((float)(iVar1 * 0xc + 0x78),extraout_x0_00,0x30);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::AffectCaulipower(bool) */

void __thiscall
ArtifactGashaponSubSystem::AffectCaulipower(ArtifactGashaponSubSystem *this,bool param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  Zombie *this_00;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  iVar8 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesOnBoard
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2);
  uVar7 = local_20;
  iVar5 = 6;
  if (!param_1) {
    iVar5 = 2;
  }
  lVar3 = FUN_037c0ebc(local_20,local_18);
  if (lVar3 != 0) {
    do {
      FUN_037c0ec8(uVar7,uVar6);
      nop();
      cVar1 = IsValidTargete(this,this_00);
      if ((cVar1 != '\0') &&
         ((iVar2 = Zombie::GetSizeType(this_00), iVar2 == 0 ||
          (iVar2 = Zombie::GetSizeType(this_00), iVar2 == 1)))) {
        if (iVar5 <= iVar8) break;
        iVar8 = iVar8 + 1;
        Zombie::SetFacing(this_00);
        auVar9 = PVZ_EOT();
        Zombie::ApplyCondition((Zombie *)auVar9,0,this_00,0x19,1);
        (**(code **)(*(long *)this_00 + 0x2f0))(this_00);
        Zombie::EndCondition(this_00,0x55);
        MessageRouter::Broadcast<Zombie*,Zombie*>
                  ((MessageRouter *)gMessageRouter,Message::ZombieHypnotized,this_00);
        RealObject::JoinTeam((RealObject *)this_00,1);
      }
      uVar7 = local_20;
      uVar6 = uVar6 + 1;
      uVar4 = FUN_037c0ebc(local_20,local_18);
    } while (uVar6 < uVar4);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::AffectIceburg(bool) */

void __thiscall
ArtifactGashaponSubSystem::AffectIceburg(ArtifactGashaponSubSystem *this,bool param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  Zombie *extraout_x0;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesOnBoard
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2);
  uVar7 = local_20;
  iVar2 = 0xf;
  if (!param_1) {
    iVar2 = 7;
  }
  lVar4 = FUN_037c0ebc(local_20,local_18);
  if (lVar4 != 0) {
    do {
      FUN_037c0ec8(uVar7,uVar6);
      nop();
      uVar3 = operator|(1,4);
      cVar1 = IsValidTargete(this,extraout_x0);
      if ((cVar1 != '\0') &&
         (cVar1 = (**(code **)(*(long *)extraout_x0 + 0xb8))(extraout_x0,uVar3), cVar1 != '\0')) {
        Zombie::ApplyCondition((Zombie *)(float)iVar2,0,extraout_x0,1,1);
      }
      uVar7 = local_20;
      uVar6 = uVar6 + 1;
      uVar5 = FUN_037c0ebc(local_20,local_18);
    } while (uVar6 < uVar5);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::AffectConvallariaChemist(bool) */

void __thiscall
ArtifactGashaponSubSystem::AffectConvallariaChemist(ArtifactGashaponSubSystem *this,bool param_1)

{
  bool bVar1;
  char cVar2;
  Zombie *extraout_x0;
  float fVar3;
  float fVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,2);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    nop();
    cVar2 = IsValidTargete(this,extraout_x0);
    if (cVar2 != '\0') {
      if (param_1) {
        fVar4 = (float)FUN_037c0e3c(*(undefined4 *)(extraout_x0 + 0x284));
        fVar4 = (float)(*(int *)(this + 0x58) * 0x24 + 0x168) + fVar4 * 0.08;
      }
      else {
        fVar4 = (float)FUN_037c0e3c(*(undefined4 *)(extraout_x0 + 0x284));
        fVar4 = (float)(*(int *)(this + 0x58) * 0xc + 0x78) + fVar4 * 0.04;
      }
      Zombie::ApplyCondition((Zombie *)0x41200000,0,extraout_x0,0x4c,1);
      fVar3 = (float)FUN_037c0e3c(*(undefined4 *)(extraout_x0 + 0x284));
      Zombie::SetConditionTracker((fVar4 * 100.0) / fVar3,extraout_x0,0x4c);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::AffectHypnoShroom(bool) */

void __thiscall
ArtifactGashaponSubSystem::AffectHypnoShroom(ArtifactGashaponSubSystem *this,bool param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  Zombie *this_00;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  Zombie *pZVar11;
  float fVar12;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesOnBoard
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2);
  uVar7 = local_20;
  if (param_1) {
    fVar12 = 0.4;
    iVar9 = 9;
  }
  else {
    fVar12 = 0.1;
    iVar9 = 3;
  }
  uVar6 = 0;
  fVar12 = fVar12 + 1.0;
  iVar8 = 0;
  lVar4 = FUN_037c0ebc(local_20,local_18);
  if (lVar4 != 0) {
    do {
      FUN_037c0ec8(uVar7,uVar6);
      nop();
      cVar1 = IsValidTargete(this,this_00);
      if ((cVar1 != '\0') &&
         (((iVar2 = Zombie::GetSizeType(this_00), iVar2 == 0 ||
           (iVar2 = Zombie::GetSizeType(this_00), iVar2 == 0)) && (iVar8 < iVar9)))) {
        iVar8 = iVar8 + 1;
        Zombie::SetFacing(this_00);
        pZVar11 = (Zombie *)PVZ_EOT();
        Zombie::ApplyCondition(pZVar11,0,this_00,0x19,1);
        (**(code **)(*(long *)this_00 + 0x2f0))(this_00);
        Zombie::EndCondition(this_00,0x55);
        MessageRouter::Broadcast<Zombie*,Zombie*>
                  ((MessageRouter *)gMessageRouter,Message::ZombieHypnotized,this_00);
        RealObject::JoinTeam((RealObject *)this_00,1);
        fVar10 = (float)Zombie::GetExtraHitPointsmodifier(this_00);
        lVar4 = FUN_037c0e30(*(undefined8 *)(this_00 + 0x550));
        FUN_037c0e34(fVar12 * *(float *)(lVar4 + 0x18) * fVar10,this_00 + 0x284);
        fVar10 = (float)Zombie::GetExtraHitPointsmodifier(this_00);
        lVar4 = FUN_037c0e30(*(undefined8 *)(this_00 + 0x550));
        Zombie::SetHitpoints(this_00,fVar12 * *(float *)(lVar4 + 0x18) * fVar10);
        uVar3 = FUN_037c0e40(*(undefined4 *)(this_00 + 0xb0));
        fVar10 = (float)Zombie::GetExtraHitPointsmodifier(this_00);
        lVar4 = FUN_037c0e30(*(undefined8 *)(this_00 + 0x550));
        Zombie::setHelm((Zombie *)(fVar12 * *(float *)(lVar4 + 0x60) * fVar10),this_00,uVar3);
      }
      uVar7 = local_20;
      uVar6 = uVar6 + 1;
      uVar5 = FUN_037c0ebc(local_20,local_18);
    } while (uVar6 < uVar5);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::AffectMonotropa(bool) */

void __thiscall
ArtifactGashaponSubSystem::AffectMonotropa(ArtifactGashaponSubSystem *this,bool param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  Zombie *this_00;
  BoardTransforms *this_01;
  GridItemMonotropa *this_02;
  Board *this_03;
  float fVar5;
  float fVar6;
  string asStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  string asStack_40 [8];
  string asStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  fVar6 = 5.0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,2);
  if (!param_1) {
    fVar6 = 2.5;
  }
  iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) / 2 + 1);
  fVar5 = (float)iVar3 + DAT_06ab1320;
  iVar3 = BoardTransforms::GridToBoardSpaceY(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) / 2 + 1);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_30,(float)(int)fVar5,(float)(int)((float)iVar3 + DAT_06ab1324),0.0);
  FUN_05475d88(asStack_60,&DAT_06ab1290);
  FUN_05475d88(asStack_40,&DAT_06ab1168);
  FUN_05475d88(asStack_38,asStack_60);
  plVar4 = (long *)PlantMonotropa::CreateProjectileEffectByBoardSpace
                             (local_30,local_2c,local_28,this,asStack_40,asStack_38,0x64961);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x80))(0x40000000,plVar4);
  }
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    nop();
    cVar2 = IsValidTargete(this,this_00);
    if (cVar2 != '\0') {
      cVar2 = Zombie::IsBoss(this_00);
      if ((((cVar2 != '\0') ||
           (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 != '\0')) ||
          (cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 != '\0')) ||
         (((bVar1 = Sexy::RtObject::IsA<ZombieMech>((RtObject *)this_00), bVar1 ||
           (cVar2 = Zombie::HasCondition(this_00,0x18), cVar2 != '\0')) ||
          (cVar2 = Zombie::IsControlled(this_00), cVar2 != '\0')))) break;
      this_01 = (BoardTransforms *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this_00);
      BoardTransforms::BoardSpaceToGrid(this_01,*(float *)this_01,*(float *)(this_01 + 4));
      this_03 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_38,"monotropa_snowman");
      Board::AddGridItem(this_03,asStack_38,local_48,local_44,1);
      nop();
      std::string::~string(asStack_38);
      nop();
      if (this_02 != (GridItemMonotropa *)0x0) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_38,(RtWeakPtrBase *)asStack_40);
        GridItemSunSeed::setBindZombie((GridItemSunSeed *)this_02,asStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40)
        ;
        GridItemMonotropa::SetThresholdRatio(this_02,fVar6);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  std::string::~string(asStack_60);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::~ArtifactGashaponSubSystem() */

void __thiscall
ArtifactGashaponSubSystem::~ArtifactGashaponSubSystem(ArtifactGashaponSubSystem *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06699710;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Artifact");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Num");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>>::~vector
            ((vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>> *)
             (this + 0x98));
  std::vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>>::~vector
            ((vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>> *)
             (this + 0x80));
  std::vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>>::~vector
            ((vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>> *)
             (this + 0x68));
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<ArtifactGashaponAffectInfo,std::allocator<ArtifactGashaponAffectInfo>>::~vector
            ((vector<ArtifactGashaponAffectInfo,std::allocator<ArtifactGashaponAffectInfo>> *)
             (this + 0x28));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGashaponSubSystem::~ArtifactGashaponSubSystem() */

void __thiscall
ArtifactGashaponSubSystem::~ArtifactGashaponSubSystem(ArtifactGashaponSubSystem *this)

{
  ~ArtifactGashaponSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactGashaponSubSystem::AffectSun(bool) */

void __thiscall ArtifactGashaponSubSystem::AffectSun(ArtifactGashaponSubSystem *this,bool param_1)

{
  SunRainSubSystem *this_00;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1) {
    iVar2 = 0x18;
  }
  iVar1 = 0x3c;
  if (param_1) {
    iVar1 = 0x78;
  }
  this_00 = Board::GetGameSubSystem<SunRainSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  *(SunRainSubSystem **)(this + 0x60) = this_00;
  SunRainSubSystem::SetSunCurrency(this_00,0,iVar2,iVar1);
  SunRainSubSystem::Start(*(SunRainSubSystem **)(this + 0x60));
  return;
}


/* ArtifactGashaponSubSystem::AffectSunPlus(bool) */

void __thiscall
ArtifactGashaponSubSystem::AffectSunPlus(ArtifactGashaponSubSystem *this,bool param_1)

{
  int iVar1;
  int iVar2;
  SunRainSubSystem *this_00;
  int iVar3;
  
  iVar1 = 0xc;
  iVar2 = 0x1e;
  if (!param_1) {
    iVar1 = 0;
    iVar2 = 0xc;
  }
  iVar3 = 0x96;
  if (!param_1) {
    iVar3 = 0x3c;
  }
  this_00 = Board::GetGameSubSystem<SunRainSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  *(SunRainSubSystem **)(this + 0x60) = this_00;
  SunRainSubSystem::SetSunCurrency(this_00,iVar1,iVar2,iVar3);
  SunRainSubSystem::Start(*(SunRainSubSystem **)(this + 0x60));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::initAffectInfos() */

void __thiscall ArtifactGashaponSubSystem::initAffectInfos(ArtifactGashaponSubSystem *this)

{
  ulong uVar1;
  RtReflectionDelegate *pRVar2;
  ulong uVar3;
  RtMixedPtr aRStack_a0 [8];
  RtId aRStack_98 [8];
  string asStack_90 [8];
  undefined8 local_88 [3];
  int local_70 [4];
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>> aRStack_60 [72];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_88);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a0);
  std::string::string(asStack_90,"AffectShadowShroom");
  RtReflectionDelegate<Sexy::Delegate1<bool>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<bool>> *)local_70,aRStack_98,asStack_90);
  std::
  vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
  ::push_back((vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
               *)local_88,(RtReflectionDelegate *)local_70);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)local_70);
  std::string::~string(asStack_90);
  nop();
  Sexy::RtId::~RtId(aRStack_98);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a0);
  std::string::string(asStack_90,"AffectGuacodile");
  RtReflectionDelegate<Sexy::Delegate1<bool>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<bool>> *)local_70,aRStack_98,asStack_90);
  std::
  vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
  ::push_back((vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
               *)local_88,(RtReflectionDelegate *)local_70);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)local_70);
  std::string::~string(asStack_90);
  nop();
  Sexy::RtId::~RtId(aRStack_98);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a0);
  std::string::string(asStack_90,"AffectCaulipower");
  RtReflectionDelegate<Sexy::Delegate1<bool>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<bool>> *)local_70,aRStack_98,asStack_90);
  std::
  vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
  ::push_back((vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
               *)local_88,(RtReflectionDelegate *)local_70);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)local_70);
  std::string::~string(asStack_90);
  nop();
  Sexy::RtId::~RtId(aRStack_98);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a0);
  std::string::string(asStack_90,"AffectIceburg");
  RtReflectionDelegate<Sexy::Delegate1<bool>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<bool>> *)local_70,aRStack_98,asStack_90);
  std::
  vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
  ::push_back((vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
               *)local_88,(RtReflectionDelegate *)local_70);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)local_70);
  std::string::~string(asStack_90);
  nop();
  Sexy::RtId::~RtId(aRStack_98);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a0);
  std::string::string(asStack_90,"AffectSun");
  RtReflectionDelegate<Sexy::Delegate1<bool>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<bool>> *)local_70,aRStack_98,asStack_90);
  std::
  vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
  ::push_back((vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
               *)local_88,(RtReflectionDelegate *)local_70);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)local_70);
  std::string::~string(asStack_90);
  nop();
  Sexy::RtId::~RtId(aRStack_98);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a0);
  std::string::string(asStack_90,"AffectConvallariaChemist");
  RtReflectionDelegate<Sexy::Delegate1<bool>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<bool>> *)local_70,aRStack_98,asStack_90);
  std::
  vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
  ::push_back((vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
               *)local_88,(RtReflectionDelegate *)local_70);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)local_70);
  std::string::~string(asStack_90);
  nop();
  Sexy::RtId::~RtId(aRStack_98);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a0);
  std::string::string(asStack_90,"AffectParsnip");
  RtReflectionDelegate<Sexy::Delegate1<bool>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<bool>> *)local_70,aRStack_98,asStack_90);
  std::
  vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
  ::push_back((vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
               *)local_88,(RtReflectionDelegate *)local_70);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)local_70);
  std::string::~string(asStack_90);
  nop();
  Sexy::RtId::~RtId(aRStack_98);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a0);
  std::string::string(asStack_90,"AffectHypnoShroom");
  RtReflectionDelegate<Sexy::Delegate1<bool>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<bool>> *)local_70,aRStack_98,asStack_90);
  std::
  vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
  ::push_back((vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
               *)local_88,(RtReflectionDelegate *)local_70);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)local_70);
  std::string::~string(asStack_90);
  nop();
  Sexy::RtId::~RtId(aRStack_98);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a0);
  std::string::string(asStack_90,"AffectMonotropa");
  RtReflectionDelegate<Sexy::Delegate1<bool>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<bool>> *)local_70,aRStack_98,asStack_90);
  std::
  vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
  ::push_back((vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
               *)local_88,(RtReflectionDelegate *)local_70);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)local_70);
  std::string::~string(asStack_90);
  nop();
  Sexy::RtId::~RtId(aRStack_98);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a0);
  std::string::string(asStack_90,"AffectSunPlus");
  RtReflectionDelegate<Sexy::Delegate1<bool>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<bool>> *)local_70,aRStack_98,asStack_90);
  std::
  vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
  ::push_back((vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
               *)local_88,(RtReflectionDelegate *)local_70);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)local_70);
  std::string::~string(asStack_90);
  nop();
  Sexy::RtId::~RtId(aRStack_98);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  std::vector<ArtifactGashaponAffectInfo,std::allocator<ArtifactGashaponAffectInfo>>::clear
            ((vector<ArtifactGashaponAffectInfo,std::allocator<ArtifactGashaponAffectInfo>> *)
             (this + 0x28));
  uVar3 = 0;
  do {
    ArtifactGashaponAffectInfo::ArtifactGashaponAffectInfo((ArtifactGashaponAffectInfo *)local_70);
    local_70[0] = (int)uVar3 + 1;
    Sexy::StrFormat("[ARTIFACT_GASHAPON_AFFECT_%d]",aRStack_98,uVar3 & 0xffffffff);
    Sexy::ToWString((string *)aRStack_98);
    FUN_054766c8(auStack_18,asStack_90);
    FUN_05476c50(asStack_90);
    std::string::~string((string *)aRStack_98);
    Sexy::StrFormat("[ARTIFACT_GASHAPON_AFFECT_%d3]",aRStack_98,uVar3 & 0xffffffff);
    Sexy::ToWString((string *)aRStack_98);
    FUN_054766c8(auStack_10,asStack_90);
    FUN_05476c50(asStack_90);
    std::string::~string((string *)aRStack_98);
    uVar1 = uVar3 + 1;
    pRVar2 = (RtReflectionDelegate *)FUN_037c0e8c(local_88[0],uVar3);
    RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=(aRStack_60,pRVar2);
    std::vector<ArtifactGashaponAffectInfo,std::allocator<ArtifactGashaponAffectInfo>>::push_back
              ((vector<ArtifactGashaponAffectInfo,std::allocator<ArtifactGashaponAffectInfo>> *)
               (this + 0x28),(ArtifactGashaponAffectInfo *)local_70);
    ArtifactGashaponAffectInfo::~ArtifactGashaponAffectInfo((ArtifactGashaponAffectInfo *)local_70);
    uVar3 = uVar1;
  } while (uVar1 != 10);
  std::
  vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
  ::~vector((vector<RtReflectionDelegate<Sexy::Delegate1<bool>>,std::allocator<RtReflectionDelegate<Sexy::Delegate1<bool>>>>
             *)local_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::initResultPool() */

void __thiscall ArtifactGashaponSubSystem::initResultPool(ArtifactGashaponSubSystem *this)

{
  vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>> *this_00;
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 local_18;
  undefined1 local_14;
  float local_10;
  long local_8;
  
  fVar5 = 0.0;
  this_00 = (vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>> *)
            (this + 0x68);
  local_8 = ___stack_chk_guard;
  std::vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>>::clear(this_00)
  ;
  lVar3 = 0;
  do {
    puVar2 = (undefined4 *)FUN_037c0e98(*(undefined8 *)(this + 0x28),lVar3);
    fVar4 = (float)puVar2[1];
    local_18 = *puVar2;
    local_14 = 0;
    local_10 = fVar5 + fVar4;
    std::vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>>::push_back
              (this_00,(ArtifactGashaponResultInfo *)&local_18);
    local_14 = 1;
    lVar1 = lVar3 + 1;
    lVar3 = FUN_037c0e98(*(undefined8 *)(this + 0x28),lVar3);
    fVar5 = fVar5 + fVar4 + *(float *)(lVar3 + 8);
    local_10 = fVar5;
    std::vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>>::push_back
              (this_00,(ArtifactGashaponResultInfo *)&local_18);
    lVar3 = lVar1;
  } while (lVar1 != 5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::initResultPoolPlus() */

void __thiscall ArtifactGashaponSubSystem::initResultPoolPlus(ArtifactGashaponSubSystem *this)

{
  vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>> *this_00;
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 local_18;
  undefined1 local_14;
  float local_10;
  long local_8;
  
  fVar5 = 0.0;
  this_00 = (vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>> *)
            (this + 0x80);
  local_8 = ___stack_chk_guard;
  std::vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>>::clear(this_00)
  ;
  lVar3 = 5;
  do {
    puVar2 = (undefined4 *)FUN_037c0e98(*(undefined8 *)(this + 0x28),lVar3);
    fVar4 = (float)puVar2[1];
    local_18 = *puVar2;
    local_14 = 0;
    local_10 = fVar5 + fVar4;
    std::vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>>::push_back
              (this_00,(ArtifactGashaponResultInfo *)&local_18);
    local_14 = 1;
    lVar1 = lVar3 + 1;
    lVar3 = FUN_037c0e98(*(undefined8 *)(this + 0x28),lVar3);
    fVar5 = fVar5 + fVar4 + *(float *)(lVar3 + 8);
    local_10 = fVar5;
    std::vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>>::push_back
              (this_00,(ArtifactGashaponResultInfo *)&local_18);
    lVar3 = lVar1;
  } while (lVar1 != 10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::setPossibility(std::vector<float, std::allocator<float> >,
   std::vector<float, std::allocator<float> >) */

void __thiscall
ArtifactGashaponSubSystem::setPossibility
          (ArtifactGashaponSubSystem *this,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  initAffectInfos(this);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x28));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x28));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    iVar1 = *piVar3;
    piVar4 = (int *)FUN_037c0e84(*param_2,(long)(iVar1 + -1));
    uVar5 = *param_3;
    piVar3[1] = *piVar4;
    piVar4 = (int *)FUN_037c0e84(uVar5,(long)(iVar1 + -1));
    piVar3[2] = *piVar4;
    std::move_iterator<PennyGiftBoxGrowData*>::operator++
              ((move_iterator<PennyGiftBoxGrowData*> *)&local_18);
  }
  if (*(int *)(this + 0x5c) < 4) {
    initResultPool(this);
  }
  else {
    initResultPoolPlus(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::getResult() */

void __thiscall ArtifactGashaponSubSystem::getResult(ArtifactGashaponSubSystem *this)

{
  ArtifactGashaponAffectType *pAVar1;
  vector *pvVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined4 *puVar8;
  int *piVar9;
  long lVar10;
  ArtifactGashaponSubSystem *pAVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  float local_58;
  undefined8 local_50 [3];
  undefined8 local_38 [3];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = time((time_t *)0x0);
  Sexy::SRand(uVar7);
  fVar13 = (float)Sexy::Rand(100.0);
  pvVar2 = (vector *)(this + 0x68);
  if (3 < *(int *)(this + 0x5c)) {
    pvVar2 = (vector *)(this + 0x80);
  }
  std::vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>>::vector
            ((vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>> *)
             local_50,pvVar2);
  uVar4 = local_50[0];
  fVar13 = fVar13 * 0.01;
  puVar8 = (undefined4 *)FUN_037c0ea8(local_50[0],0);
  if ((((((fVar13 < (float)puVar8[2]) ||
         (puVar8 = (undefined4 *)FUN_037c0ea8(uVar4,1), fVar13 < (float)puVar8[2])) ||
        (puVar8 = (undefined4 *)FUN_037c0ea8(uVar4,2), fVar13 < (float)puVar8[2])) ||
       ((puVar8 = (undefined4 *)FUN_037c0ea8(uVar4,3), fVar13 < (float)puVar8[2] ||
        (puVar8 = (undefined4 *)FUN_037c0ea8(uVar4,4), fVar13 < (float)puVar8[2])))) ||
      ((puVar8 = (undefined4 *)FUN_037c0ea8(uVar4,5), fVar13 < (float)puVar8[2] ||
       ((puVar8 = (undefined4 *)FUN_037c0ea8(uVar4,6), fVar13 < (float)puVar8[2] ||
        (puVar8 = (undefined4 *)FUN_037c0ea8(uVar4,7), fVar13 < (float)puVar8[2])))))) ||
     ((puVar8 = (undefined4 *)FUN_037c0ea8(uVar4,8), fVar13 < (float)puVar8[2] ||
      (puVar8 = (undefined4 *)FUN_037c0ea8(uVar4,9), fVar13 < (float)puVar8[2])))) {
    uVar3 = *puVar8;
    this[0x1d] = *(ArtifactGashaponSubSystem *)(puVar8 + 1);
    *(undefined4 *)(this + 0x20) = uVar3;
  }
  iVar6 = Sexy::Rand(10);
  piVar9 = (int *)FUN_037c0ea8(local_50[0],(long)iVar6);
  iVar6 = *piVar9;
  if (*piVar9 == *(int *)(this + 0x20)) {
    local_38[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)local_50);
    local_20[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)local_50);
    while (bVar5 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_38,(__normal_iterator *)local_20),
          iVar6 = local_68, bVar5) {
      piVar9 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_38);
      if (*(int *)(this + 0x20) != *piVar9) {
        local_68 = *piVar9;
      }
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)local_38);
    }
  }
  local_68 = iVar6;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
  if (this[0x1d] == (ArtifactGashaponSubSystem)0x0) {
    fVar13 = (float)Sexy::Rand(3.0);
    if (1.0 <= fVar13) {
      pAVar1 = (ArtifactGashaponAffectType *)(this + 0x20);
      std::vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>>::push_back
                ((vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>> *)
                 local_38,pAVar1);
      fVar13 = (float)Sexy::Rand(2.0);
      if (fVar13 < 1.0) {
        std::vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>>::
        push_back((vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>> *)
                  local_38,pAVar1);
        std::vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>>::
        push_back((vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>> *)
                  local_38,(ArtifactGashaponAffectType *)&local_68);
      }
      else {
        std::vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>>::
        push_back((vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>> *)
                  local_38,(ArtifactGashaponAffectType *)&local_68);
        std::vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>>::
        push_back((vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>> *)
                  local_38,pAVar1);
      }
      goto LAB_037cad60;
    }
    pAVar11 = (ArtifactGashaponSubSystem *)&local_68;
  }
  else {
    pAVar11 = this + 0x20;
  }
  std::vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>>::push_back
            ((vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>> *)
             local_38,(ArtifactGashaponAffectType *)pAVar11);
  std::vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>>::push_back
            ((vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>> *)
             local_38,(ArtifactGashaponAffectType *)(this + 0x20));
  std::vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>>::push_back
            ((vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>> *)
             local_38,(ArtifactGashaponAffectType *)(this + 0x20));
LAB_037cad60:
  if ((2 < *(int *)(this + 0x5c)) && (this[0x1c] == (ArtifactGashaponSubSystem)0x0)) {
    iVar6 = 5;
    if (*(int *)(this + 0x5c) == 3) {
      iVar6 = 0;
    }
    fVar13 = 0.0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    lVar12 = (long)iVar6;
    do {
      lVar10 = lVar12 + 1;
      puVar8 = (undefined4 *)FUN_037c0e98(*(undefined8 *)(this + 0x28),lVar12);
      fVar13 = fVar13 + (float)puVar8[2];
      local_60 = CONCAT44(local_60._4_4_,*puVar8);
      local_58 = fVar13;
      std::vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>>::push_back
                ((vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>> *)
                 local_20,(ArtifactGashaponResultInfo *)&local_60);
      lVar12 = lVar10;
    } while (lVar10 != (long)iVar6 + 5);
    lVar12 = 0;
    do {
      fVar14 = (float)Sexy::Rand(fVar13);
      lVar10 = FUN_037c0ea8(local_20[0],lVar12);
      if (fVar14 < *(float *)(lVar10 + 8)) {
        puVar8 = (undefined4 *)FUN_037c0ea8(local_50[0],lVar12);
        *(undefined4 *)(this + 0x20) = *puVar8;
        this[0x1d] = (ArtifactGashaponSubSystem)0x1;
        break;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != 5);
    std::vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>>::assign
              ((vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>> *)
               local_38,3,(ArtifactGashaponAffectType *)(this + 0x20));
    std::vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>>::~vector
              ((vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>> *)
               local_20);
  }
  std::vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>>::clear
            ((vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>> *)
             (this + 0x98));
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_38);
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)local_38);
  while (bVar5 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)local_20)
        , bVar5) {
    puVar8 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    local_64 = *puVar8;
    std::vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>>::push_back
              ((vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>> *)
               (this + 0x98),(ArtifactGashaponAffectType *)&local_64);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_60);
  }
  this[0x1c] = this[0x1d];
  std::vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>>::~vector
            ((vector<ArtifactGashaponAffectType,std::allocator<ArtifactGashaponAffectType>> *)
             local_38);
  std::vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>>::~vector
            ((vector<ArtifactGashaponResultInfo,std::allocator<ArtifactGashaponResultInfo>> *)
             local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::playAnimation() */

void __thiscall ArtifactGashaponSubSystem::playAnimation(ArtifactGashaponSubSystem *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  int iVar1;
  Effect_PopAnim *pEVar2;
  ResourceInfo *pRVar3;
  StandaloneEffect *pSVar4;
  long lVar5;
  UIWidget *this_01;
  TimeChallengeEndLevelUI *this_02;
  RtMixedPtr aRStack_80 [8];
  float local_78;
  float local_74;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  GetPAMByName((string *)(this + 0x48));
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
  Effect_PopAnim::CreatePopAnimRig(pEVar2,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  pSVar4 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
  std::string::string((string *)aRStack_68,"onStandaloneEffectFinishedCallback");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,
             (RtId *)&local_78,aRStack_68);
  StandaloneEffect::SetCompletionCallback(pSVar4,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_68);
  nop();
  Sexy::RtId::~RtId((RtId *)&local_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::SetCentered(pEVar2,true);
  DVec3::DVec3((DVec3 *)&local_78);
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(4);
  local_78 = (float)iVar1;
  iVar1 = BoardTransforms::GridToBoardSpaceYUnbounded(2);
  local_74 = (float)iVar1;
  pSVar4 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar4,(SexyVector3 *)&local_78,-1);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  FUN_037c134c(lVar5 + 0x1c);
  this_01 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  this_02 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage(this_01);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x88);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<ArtifactGashaponSubSystem,void(ArtifactGashaponSubSystem::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            ((Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *)aRStack_50
             ,aRStack_68);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_02,aRStack_50);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::PlaySingleAnimation(pEVar2,this + 0x50,0);
  getResult(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGashaponSubSystem::setState(ArtifactGashaponSubSystemState) */

void __thiscall ArtifactGashaponSubSystem::setState(ArtifactGashaponSubSystem *this,int param_2)

{
  WorldMapCamera *pWVar1;
  
  *(int *)(this + 0x24) = param_2;
  if (param_2 == 2) {
    doAffect(this);
    return;
  }
  if (param_2 != 3) {
    if (param_2 != 1) {
      return;
    }
    this[0x10] = (ArtifactGashaponSubSystem)0x0;
    *(undefined4 *)(this + 0x14) = 0;
    pWVar1 = (WorldMapCamera *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    WorldMapCamera::SetUseClipViewport(pWVar1,true);
    playAnimation(this);
    return;
  }
  pWVar1 = (WorldMapCamera *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  WorldMapCamera::SetUseClipViewport(pWVar1,false);
  return;
}


/* ArtifactGashaponSubSystem::onStandaloneEffectFinishedCallback(StandaloneEffect*) */

void ArtifactGashaponSubSystem::onStandaloneEffectFinishedCallback(StandaloneEffect *param_1)

{
  setState((ArtifactGashaponSubSystem *)param_1,2);
  return;
}


/* ArtifactGashaponSubSystem::Start() */

void __thiscall ArtifactGashaponSubSystem::Start(ArtifactGashaponSubSystem *this)

{
  setState(this,1);
  return;
}


/* ArtifactGashaponSubSystem::doAffect() */

void __thiscall ArtifactGashaponSubSystem::doAffect(ArtifactGashaponSubSystem *this)

{
  long lVar1;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  
  lVar1 = FUN_037c0e98(*(undefined8 *)(this + 0x28),(long)(*(int *)(this + 0x20) + -1));
  this_00 = (Delegate1wRet<bool,SexyURL_const&> *)
            RtReflectionDelegate<Sexy::Delegate1<bool>>::TryGetDelegate
                      ((RtReflectionDelegate<Sexy::Delegate1<bool>> *)(lVar1 + 0x10));
  if (this_00 != (Delegate1wRet<bool,SexyURL_const&> *)0x0) {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,(SexyURL *)(ulong)(byte)this[0x1d])
    ;
  }
  setState(this,3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::AffectGuacodile(bool) */

void ArtifactGashaponSubSystem::AffectGuacodile(bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  SpawnProjectilesSubSystem *pSVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [8];
  string asStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_70,"ArtifactGashaponGuacodileDefault");
  Sexy::ToWString(asStack_70);
  Sexy::RtName::RtName((RtName *)&local_60,(wstring *)aRStack_68);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_88,uVar5,0xc,(RtName *)&local_60);
  Sexy::RtName::~RtName((RtName *)&local_60);
  FUN_05476c50(aRStack_68);
  std::string::~string(asStack_70);
  nop();
  iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(0);
      iVar1 = iVar4 + 1;
      iVar4 = BoardTransforms::GridToBoardSpaceYUnbounded(iVar4);
      pSVar6 = Board::GetGameSubSystem<SpawnProjectilesSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_88);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_60,(float)iVar3,(float)iVar4,0.0);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
      std::string::string(asStack_70,"OnSpawnGuacodile");
      RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>> *)aRStack_50,aRStack_78,
                 asStack_70);
      SpawnProjectilesSubSystem::addProjectilesGroup
                (local_60,local_5c,local_58,0x3e99999a,pSVar6,aRStack_68,10,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_70);
      nop();
      Sexy::RtId::~RtId(aRStack_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      iVar4 = iVar1;
    } while (iVar1 != iVar2);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashaponSubSystem::AffectParsnip(bool) */

void ArtifactGashaponSubSystem::AffectParsnip(bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  SpawnProjectilesSubSystem *pSVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [8];
  string asStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_70,"ArtifactGashaponParsnipDefault");
  Sexy::ToWString(asStack_70);
  Sexy::RtName::RtName((RtName *)&local_60,(wstring *)aRStack_68);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_88,uVar5,0xc,(RtName *)&local_60);
  Sexy::RtName::~RtName((RtName *)&local_60);
  FUN_05476c50(aRStack_68);
  std::string::~string(asStack_70);
  nop();
  iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(0);
      iVar1 = iVar4 + 1;
      iVar4 = BoardTransforms::GridToBoardSpaceYUnbounded(iVar4);
      pSVar6 = Board::GetGameSubSystem<SpawnProjectilesSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_88);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_60,(float)iVar3,(float)iVar4,0.0);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
      std::string::string(asStack_70,"OnSpawnParsnip");
      RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate2<Projectile*,int>> *)aRStack_50,aRStack_78,
                 asStack_70);
      SpawnProjectilesSubSystem::addProjectilesGroup
                (local_60,local_5c,local_58,0x3e99999a,pSVar6,aRStack_68,10,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_70);
      nop();
      Sexy::RtId::~RtId(aRStack_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      iVar4 = iVar1;
    } while (iVar1 != iVar2);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

