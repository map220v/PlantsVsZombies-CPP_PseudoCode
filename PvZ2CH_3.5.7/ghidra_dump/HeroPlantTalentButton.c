// Class: HeroPlantTalentButton


/* HeroPlantTalentButton::clearTouch() */

void __thiscall HeroPlantTalentButton::clearTouch(HeroPlantTalentButton *this)

{
  *(undefined8 *)(this + 0x40) = 0;
  return;
}


/* HeroPlantTalentButton::OnSelect(bool) */

void __thiscall HeroPlantTalentButton::OnSelect(HeroPlantTalentButton *this,bool param_1)

{
  this[0x34] = (HeroPlantTalentButton)param_1;
  return;
}


/* HeroPlantTalentButton::DrawCenter(Sexy::Graphics*, float, float, Sexy::Image*) */

void __thiscall
HeroPlantTalentButton::DrawCenter
          (HeroPlantTalentButton *this,Graphics *param_1,float param_2,float param_3,Image *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)*(int *)(param_4 + 0x38) * *(float *)(this + 0x30);
  fVar1 = (float)*(int *)(param_4 + 0x3c) * *(float *)(this + 0x30);
  Sexy::Graphics::DrawImage
            (param_1,param_4,(int)(param_2 - fVar2 * 0.5),(int)(param_3 - fVar1 * 0.5),(int)fVar2,
             (int)fVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantTalentButton::Draw(Sexy::Graphics*) */

void __thiscall HeroPlantTalentButton::Draw(HeroPlantTalentButton *this,Graphics *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  Image *pIVar4;
  long lVar5;
  float *pfVar6;
  CachedUIResourcePtr<Sexy::Image> *pCVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x34] != (HeroPlantTalentButton)0x0) && (this[0x58] != (HeroPlantTalentButton)0x0)) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
    fVar10 = (float)PVZ_T();
    fVar10 = cosf(fVar10 * 3.0);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    uVar1 = (int)(fVar10 * 255.0) >> 0x1f;
    Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xff,((int)(fVar10 * 255.0) ^ uVar1) - uVar1);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    uVar8 = 0;
    while( true ) {
      uVar9 = *(undefined8 *)(this + 0x18);
      uVar3 = FUN_042b2354(uVar9,*(undefined8 *)(this + 0x20));
      if (uVar3 <= uVar8) break;
      pfVar6 = (float *)FUN_042b2360(uVar9,uVar8);
      fVar10 = *pfVar6;
      fVar11 = pfVar6[1];
      pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5eb0);
      DrawCenter(this,param_1,fVar10,fVar11,pIVar4);
      uVar8 = uVar8 + 1;
    }
    fVar10 = *(float *)(this + 0x10);
    fVar11 = *(float *)(this + 0x14);
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5e10);
    DrawCenter(this,param_1,fVar10,fVar11,pIVar4);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  }
  uVar8 = 0;
  while( true ) {
    uVar9 = *(undefined8 *)(this + 0x18);
    uVar3 = FUN_042b2354(uVar9,*(undefined8 *)(this + 0x20));
    if (uVar3 <= uVar8) break;
    pfVar6 = (float *)FUN_042b2360(uVar9,uVar8);
    fVar10 = *pfVar6;
    fVar11 = pfVar6[1];
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af60d0);
    DrawCenter(this,param_1,fVar10,fVar11,pIVar4);
    uVar8 = uVar8 + 1;
  }
  fVar10 = *(float *)(this + 0x10);
  fVar11 = *(float *)(this + 0x14);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5c70);
  DrawCenter(this,param_1,fVar10,fVar11,pIVar4);
  fVar10 = *(float *)(this + 0x10);
  fVar11 = *(float *)(this + 0x14);
  if (*(int *)(this + 0x5c) == *(int *)(this + 0x60)) {
    pCVar7 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5f98;
  }
  else {
    pCVar7 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06af60a8;
  }
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar7);
  DrawCenter(this,param_1,fVar10,fVar11,pIVar4);
  if (*(Image **)(this + 0x38) != (Image *)0x0) {
    DrawCenter(this,param_1,*(float *)(this + 0x10),*(float *)(this + 0x14),*(Image **)(this + 0x38)
              );
  }
  uVar9 = *(undefined8 *)(this + 0x18);
  uVar8 = 0;
  lVar5 = FUN_042b2354(uVar9,*(undefined8 *)(this + 0x20));
  if (lVar5 != 0) {
    do {
      pfVar6 = (float *)FUN_042b2360(uVar9,uVar8);
      fVar10 = *pfVar6;
      fVar11 = pfVar6[1];
      pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5d10);
      DrawCenter(this,param_1,fVar10,fVar11,pIVar4);
      if ((int)uVar8 < *(int *)(this + 0x5c)) {
        pfVar6 = (float *)FUN_042b2360(*(undefined8 *)(this + 0x18),uVar8);
        fVar10 = *pfVar6;
        fVar11 = pfVar6[1];
        pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5f70);
        DrawCenter(this,param_1,fVar10,fVar11,pIVar4);
      }
      uVar8 = uVar8 + 1;
      uVar9 = *(undefined8 *)(this + 0x18);
      uVar3 = FUN_042b2354(uVar9,*(undefined8 *)(this + 0x20));
    } while (uVar8 < uVar3);
  }
  if (this[0x34] == (HeroPlantTalentButton)0x0) {
    if (this[0x58] == (HeroPlantTalentButton)0x0) goto LAB_042b3c2c;
  }
  else {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5c98);
    Sexy::Graphics::DrawImage
              (param_1,pIVar4,(int)((float)*(int *)this + (float)*(int *)(this + 8) * 0.15),
               (int)((float)*(int *)(this + 4) + (float)*(int *)(this + 0xc) * 0.15),
               (int)((float)*(int *)(this + 8) * 0.7),(int)((float)*(int *)(this + 0xc) * 0.7));
    if (this[0x58] == (HeroPlantTalentButton)0x0) {
      pCVar7 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06af60f8;
    }
    else {
      pCVar7 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5ff8;
    }
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar7);
    fVar11 = (float)*(int *)(this + 8) * 0.5;
    fVar10 = (float)*(int *)(this + 0xc) * 0.5;
    Sexy::Graphics::DrawImage
              (param_1,pIVar4,
               (int)((fVar11 + (float)*(int *)this) - (float)*(int *)(this + 8) * 0.25),
               (int)((fVar10 + (float)*(int *)(this + 4)) - (float)*(int *)(this + 0xc) * 0.25),
               (int)fVar11,(int)fVar10);
    if ((this[0x58] == (HeroPlantTalentButton)0x0) || (this[0x34] != (HeroPlantTalentButton)0x0))
    goto LAB_042b3c2c;
  }
  fVar10 = (float)PVZ_T();
  fVar10 = sinf(fVar10 * 3.0);
  fVar12 = *(float *)(this + 0x10);
  iVar2 = FUN_042b2760(0x10);
  fVar11 = *(float *)(this + 0x14);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5f18);
  DrawCenter(this,param_1,fVar12,(float)iVar2 + fVar10 * 3.0 + fVar11,pIVar4);
LAB_042b3c2c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* HeroPlantTalentButton::HeroPlantTalentButton() */

void __thiscall HeroPlantTalentButton::HeroPlantTalentButton(HeroPlantTalentButton *this)

{
  Sexy::Insets::Insets((Insets *)this);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  *(undefined8 *)(this + 0x38) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  *(undefined8 *)(this + 0x40) = 0;
  this[0x34] = (HeroPlantTalentButton)0x0;
  return;
}


/* HeroPlantTalentButton::~HeroPlantTalentButton() */

void __thiscall HeroPlantTalentButton::~HeroPlantTalentButton(HeroPlantTalentButton *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  std::vector<std::pair<float,float>,std::allocator<std::pair<float,float>>>::~vector
            ((vector<std::pair<float,float>,std::allocator<std::pair<float,float>>> *)(this + 0x18))
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantTalentButton::RefreshInfo() */

void __thiscall HeroPlantTalentButton::RefreshInfo(HeroPlantTalentButton *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  HeroPlantTalentButton HVar2;
  undefined4 uVar3;
  long lVar4;
  HeroPlantFramework *this_01;
  undefined8 uVar5;
  HeroPlantTalent aHStack_40 [8];
  string asStack_38 [16];
  undefined4 local_28;
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if ((bVar1) &&
     (lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00),
     *(long *)(lVar4 + 0xa8) != 0)) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    this_01 = Sexy::RtObject::Cast<HeroPlantFramework>(*(RtObject **)(lVar4 + 0xa8));
    if (this_01 != (HeroPlantFramework *)0x0) {
      HeroPlantFramework::GetTalentConfig((int)this_01);
      uVar5 = StringHelper::ToImage(asStack_38,false);
      *(undefined8 *)(this + 0x38) = uVar5;
      uVar3 = HeroPlantFramework::GetTalentLevel(this_01,*(int *)(this + 0x48));
      *(undefined4 *)(this + 0x5c) = uVar3;
      *(undefined4 *)(this + 0x60) = local_28;
      HVar2 = (HeroPlantTalentButton)
              HeroPlantFramework::CanTalentLevelUp(this_01,*(int *)(this + 0x48));
      this[0x58] = HVar2;
      HeroPlantTalent::~HeroPlantTalent(aHStack_40);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantTalentButton::OnClick() */

void __thiscall HeroPlantTalentButton::OnClick(HeroPlantTalentButton *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  HeroPlantFramework *this_01;
  HeroPlantTalentSubsystem *pHVar4;
  Effect_PopAnim *this_02;
  ResourceInfo *pRVar5;
  float fVar6;
  float fVar7;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x5c) == *(int *)(this + 0x60)) {
    pHVar4 = Board::GetGameSubSystem<HeroPlantTalentSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    HeroPlantTalentSubsystem::CloseHeroPlantTalentPannel(pHVar4);
  }
  if (this[0x34] == (HeroPlantTalentButton)0x0) {
    pHVar4 = Board::GetGameSubSystem<HeroPlantTalentSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    HeroPlantTalentSubsystem::SelectTalentButton(pHVar4,*(int *)(this + 0x48));
  }
  else {
    this_00 = (RtWeakPtr *)(this + 0x50);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if ((bVar1) &&
       (lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00),
       *(long *)(lVar3 + 0xa8) != 0)) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      this_01 = Sexy::RtObject::Cast<HeroPlantFramework>(*(RtObject **)(lVar3 + 0xa8));
      if ((this_01 != (HeroPlantFramework *)0x0) &&
         (cVar2 = HeroPlantFramework::CanTalentLevelUp(this_01,*(int *)(this + 0x48)), cVar2 != '\0'
         )) {
        HeroPlantFramework::TalentLevelUp(this_01,*(int *)(this + 0x48));
        pHVar4 = Board::GetGameSubSystem<HeroPlantTalentSubsystem>(*(Board **)(gLawnApp + 0x9f0));
        HeroPlantTalentSubsystem::SelectTalentButton(pHVar4,999);
        this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        std::string::string(asStack_20,"POPANIM_UI_HEROPLANT_EFFECTS_TALENTUP");
        GetPAMByName(asStack_20);
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
        Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar5,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        std::string::~string(asStack_20);
        nop();
        fVar6 = (float)FUN_042b2750(*(undefined4 *)(this + 0x10));
        fVar7 = (float)FUN_042b2750(*(undefined4 *)(this + 0x14));
        EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar6,fVar7,0.0);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)this_02,(SexyVector3 *)aRStack_18,-1);
        Effect_PopAnim::SetCentered(this_02,true);
        FUN_042b2290(this_02 + 0x1c,0xaae65);
        std::string::string((string *)aRStack_18,"animation");
        Effect_PopAnim::PlaySingleAnimation(this_02,aRStack_18,0);
        std::string::~string((string *)aRStack_18);
        nop();
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantTalentButton::onTouchEvent(Sexy::Touch const&) */

char __thiscall HeroPlantTalentButton::onTouchEvent(HeroPlantTalentButton *this,Touch *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x40);
  iVar1 = *(int *)(param_1 + 0x30);
  if ((lVar3 == 0) && (iVar1 == 0)) {
    cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)this,(TPoint *)(param_1 + 0x10));
    if (cVar2 != '\0') {
      *(long *)(this + 0x40) = (long)*(int *)param_1;
      return cVar2;
    }
LAB_042b6420:
    clearTouch(this);
    return '\0';
  }
  if (iVar1 == 3) {
    cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)this,(TPoint *)(param_1 + 0x10));
    if (cVar2 == '\0') goto LAB_042b6420;
    if (lVar3 != *(int *)param_1) {
      clearTouch(this);
      return cVar2;
    }
    OnClick(this);
    clearTouch(this);
  }
  else {
    if (iVar1 == 4) goto LAB_042b6420;
    cVar2 = '\0';
  }
  return cVar2;
}


/* HeroPlantTalentButton::InitButton(int, Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
HeroPlantTalentButton::InitButton
          (HeroPlantTalentButton *this,undefined4 param_1,RtWeakPtrBase *param_3)

{
  *(undefined4 *)(this + 0x48) = param_1;
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x50),param_3);
  RefreshInfo(this);
  return;
}


/* HeroPlantTalentButton::HeroPlantTalentButton(HeroPlantTalentButton const&) */

void __thiscall
HeroPlantTalentButton::HeroPlantTalentButton
          (HeroPlantTalentButton *this,HeroPlantTalentButton *param_1)

{
  undefined4 uVar1;
  HeroPlantTalentButton HVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  Sexy::Insets::Insets((Insets *)this,(Insets *)param_1);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  std::vector<std::pair<float,float>,std::allocator<std::pair<float,float>>>::vector
            ((vector<std::pair<float,float>,std::allocator<std::pair<float,float>>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  HVar2 = param_1[0x34];
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  this[0x34] = HVar2;
  *(undefined8 *)(this + 0x38) = uVar4;
  *(undefined8 *)(this + 0x40) = uVar3;
  *(undefined4 *)(this + 0x30) = uVar1;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x50),(RtWeakPtrBase *)(param_1 + 0x50));
  HVar2 = param_1[0x58];
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  this[0x58] = HVar2;
  *(undefined4 *)(this + 0x5c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantTalentButton::Resize(int, int, int, int) */

void __thiscall
HeroPlantTalentButton::Resize
          (HeroPlantTalentButton *this,int param_1,int param_2,int param_3,int param_4)

{
  vector<std::pair<float,float>,std::allocator<std::pair<float,float>>> *this_00;
  long lVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float local_14;
  pair<float,float> apStack_10 [8];
  long local_8;
  
  *(int *)(this + 0xc) = param_4;
  this_00 = (vector<std::pair<float,float>,std::allocator<std::pair<float,float>>> *)(this + 0x18);
  *(int *)(this + 8) = param_3;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 4) = param_2;
  *(int *)this = param_1;
  *(float *)(this + 0x14) = (float)(param_2 + param_4 / 2);
  *(float *)(this + 0x10) = (float)(param_1 + param_3 / 2);
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  lVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af60a8);
  fVar3 = *(float *)(this + 0x30) * 0.5 * (float)*(int *)(lVar1 + 0x38);
  std::vector<std::pair<float,float>,std::allocator<std::pair<float,float>>>::clear(this_00);
  local_14 = *(float *)(this + 0x14) - fVar3;
  std::pair<float,float>::pair<float,float&,void>(apStack_10,(float *)(this + 0x10),&local_14);
  std::vector<std::pair<float,float>,std::allocator<std::pair<float,float>>>::push_back
            (this_00,(pair *)apStack_10);
  fVar2 = (float)Sexy::SexyMath::DegToRad(45.0);
  fVar2 = cosf(fVar2);
  local_18 = *(float *)(this + 0x10) + fVar3 * fVar2;
  local_14 = *(float *)(this + 0x14) - fVar3 * fVar2;
  std::pair<float,float>::pair<float,float&,void>(apStack_10,&local_18,&local_14);
  std::vector<std::pair<float,float>,std::allocator<std::pair<float,float>>>::push_back
            (this_00,(pair *)apStack_10);
  local_14 = fVar3 + *(float *)(this + 0x10);
  std::pair<float,float>::pair<float,float&,void>(apStack_10,&local_14,(float *)(this + 0x14));
  std::vector<std::pair<float,float>,std::allocator<std::pair<float,float>>>::push_back
            (this_00,(pair *)apStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

