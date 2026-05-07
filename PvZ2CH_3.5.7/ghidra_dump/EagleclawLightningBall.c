// Class: EagleclawLightningBall


/* EagleclawLightningBall::CalcRenderOrder() const */

undefined8 EagleclawLightningBall::CalcRenderOrder(void)

{
  return 0x64960;
}


/* non-virtual thunk to EagleclawLightningBall::CalcRenderOrder() const */

void __thiscall EagleclawLightningBall::CalcRenderOrder(EagleclawLightningBall *this)

{
  CalcRenderOrder();
  return;
}


/* EagleclawLightningBall::GetLaserRig() */

RtWeakPtr<Sexy::SoundResource> * EagleclawLightningBall::GetLaserRig(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x128));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::StaticClassInit() */

void EagleclawLightningBall::StaticClassInit(void)

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
    std::string::string(asStack_10,"EagleclawLightningBall");
    (*pcVar2)(plVar1,asStack_10,FUN_042ad2b4,0x148,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EagleclawLightningBall::StaticGetClass() */

long * EagleclawLightningBall::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"EagleclawLightningBall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EagleclawLightningBall::GetClass() const */

long * EagleclawLightningBall::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"EagleclawLightningBall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EagleclawLightningBall::SetLevel5Info(bool, bool) */

void __thiscall
EagleclawLightningBall::SetLevel5Info(EagleclawLightningBall *this,bool param_1,bool param_2)

{
  this[0xe8] = (EagleclawLightningBall)param_1;
  this[0xe9] = (EagleclawLightningBall)param_2;
  return;
}


/* EagleclawLightningBall::SetIsPlantfood(bool, bool) */

void __thiscall
EagleclawLightningBall::SetIsPlantfood(EagleclawLightningBall *this,bool param_1,bool param_2)

{
  this[0xea] = (EagleclawLightningBall)param_1;
  this[0xeb] = (EagleclawLightningBall)param_2;
  return;
}


/* EagleclawLightningBall::GetLaserShooterPos() */

undefined4 __thiscall EagleclawLightningBall::GetLaserShooterPos(EagleclawLightningBall *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_042ab900(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                       *(undefined4 *)(this + 0x20));
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::FlyToZombie(Sexy::RtWeakPtr<Zombie>) */

void EagleclawLightningBall::FlyToZombie
               (undefined1 param_1 [16],undefined4 param_2,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_3,RtWeakPtr *param_4)

{
  RtWeakPtr<PowerPropertySheet> *this;
  bool bVar1;
  PopAnimRig *pPVar2;
  Zombie *this_00;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  DVec3 aDStack_58 [16];
  string asStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtWeakPtr<PowerPropertySheet> *)(param_3 + 0xd0);
  *(undefined4 *)(param_3 + 0xa4) = 1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this,param_4);
  if (param_3[0xe9] ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       )0x0) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0xb0));
    std::string::string(asStack_48,"projectile");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  }
  else {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0xb0));
    std::string::string(asStack_48,"projectile5");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  }
  PopAnimRig::PlayAndContinue(pPVar2,asStack_48,0,aDStack_38);
  std::string::~string(asStack_48);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this);
  if (bVar1) {
    this_00 = (Zombie *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    std::string::string(asStack_48,"EagleclawMark");
    Zombie::AddTag(this_00,asStack_48);
    std::string::~string(asStack_48);
    nop();
  }
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_3);
  local_78 = *puVar3;
  local_70 = *(undefined4 *)(puVar3 + 1);
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  local_68 = (**(code **)(*plVar4 + 0x3b0))(0x3f800000);
  local_60 = 0x42fa0000;
  local_64 = param_2;
  DVec3::DVec3(aDStack_58);
  DVec3::DVec3((DVec3 *)asStack_48);
  CalculateTossVelocity
            ((SexyVector3 *)&local_78,(SexyVector3 *)&local_68,500.0,1.0,(SexyVector3 *)aDStack_58,
             (SexyVector3 *)asStack_48);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_3 + 0xec),(SexyVector3 *)aDStack_58);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_3 + 0xf8),(SexyVector3 *)asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::onAnimationDone(std::string const&) */

void __thiscall
EagleclawLightningBall::onAnimationDone(EagleclawLightningBall *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"projectile5t1");
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    std::string::string(asStack_40,"projectile");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::disappear() */

void __thiscall EagleclawLightningBall::disappear(EagleclawLightningBall *this)

{
  bool bVar1;
  RtObject *this_00;
  Zombie *pZVar2;
  string *psVar3;
  string asStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0xa4) = 5;
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd0));
  if (bVar1) {
    psVar3 = (string *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
    std::string::string(asStack_10,"EagleclawMark");
    Zombie::DelTag(psVar3);
    std::string::~string(asStack_10);
    nop();
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x140));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
    pZVar2 = Sexy::RtObject::Cast<Zombie>(this_00);
    if (pZVar2 != (Zombie *)0x0) {
      std::string::string(asStack_10,"EagleclawMark");
      Zombie::DelTag((string *)pZVar2);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EagleclawLightningBall::CanBeTarget(BoardEntity*) */

char __thiscall
EagleclawLightningBall::CanBeTarget(EagleclawLightningBall *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  long *extraout_x0;
  
  if ((((param_1 == (BoardEntity *)0x0) ||
       (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), !bVar1)) ||
      (nop(), extraout_x0 == (long *)0x0)) ||
     (((cVar2 = RealObject::IsOnTeam(), cVar2 == '\0' ||
       (cVar3 = (**(code **)(*extraout_x0 + 0x328))(extraout_x0), cVar3 != '\0')) ||
      ((cVar3 = (**(code **)(*extraout_x0 + 0x330))(extraout_x0), cVar3 != '\0' ||
       (cVar3 = FUN_042ac59c(*(undefined4 *)((long)extraout_x0 + 0xcc)), cVar3 != '\0')))))) {
    cVar2 = '\0';
  }
  return cVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::CollsionCenter(BoardEntity*) */

void __thiscall
EagleclawLightningBall::CollsionCenter(EagleclawLightningBall *this,BoardEntity *param_1)

{
  int iVar1;
  Insets *pIVar2;
  Zombie *this_00;
  PopAnimRig *this_01;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar4;
  float fVar5;
  float fVar6;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  int iStack_14;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar2 = (Insets *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
  Sexy::Insets::Insets((Insets *)&local_28,pIVar2);
  this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  if (this_00 != (Zombie *)0x0) {
    Sexy::Insets::Insets((Insets *)&local_18);
    this_01 = (PopAnimRig *)Zombie::GetAnimRig(this_00);
    std::string::string((string *)&local_30,"butter");
    lVar3 = PopAnimRig::CalcSymbolRect(this_01,(string *)&local_30,(TRect *)&local_18);
    std::string::~string((string *)&local_30);
    nop();
    if (lVar3 != 0) {
      fVar6 = *(float *)(this_00 + 0x1c);
      fVar5 = (float)FUN_042ab900(*(undefined4 *)(this_00 + 0x18),fVar6,
                                  *(undefined4 *)(this_00 + 0x20));
      Sexy::TRect<int>::GetCenter();
      iVar1 = FUN_042aba4c(local_30);
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(this_00);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      local_18 = (int)((fVar5 - *(float *)(lVar3 + 0xc4)) + (float)iVar1);
      Sexy::TRect<int>::GetCenter();
      iVar1 = FUN_042aba4c(local_2c);
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(this_00);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      iStack_14 = (int)((fVar6 - *(float *)(lVar3 + 200)) + (float)iVar1);
      local_28 = CONCAT44(iStack_14,local_18);
      local_20 = uStack_10;
    }
  }
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_18,(float)((int)local_28 + (int)local_20 / 2),
             (float)(local_20._4_4_ / 3 + local_28._4_4_));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,iStack_14);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::FlyToGrid(Sexy::Point const&) */

void __thiscall EagleclawLightningBall::FlyToGrid(EagleclawLightningBall *this,Point *param_1)

{
  PopAnimRig *pPVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int local_80;
  int local_7c;
  undefined8 local_78;
  undefined4 local_70;
  Vec3 aVStack_68 [16];
  DVec3 aDStack_58 [16];
  string asStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xd8) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0xa4) = 2;
  if (this[0xea] != (EagleclawLightningBall)0x0) {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    std::string::string(asStack_48,"pf");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_48,0,aDStack_38);
    std::string::~string(asStack_48);
    nop();
  }
  if (this[0xeb] != (EagleclawLightningBall)0x0) {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    std::string::string(asStack_48,"pf2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_48,0,aDStack_38);
    std::string::~string(asStack_48);
    nop();
  }
  BoardTransforms::GridToBoardSpace(param_1);
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_78 = *puVar2;
  local_70 = *(undefined4 *)(puVar2 + 1);
  EATextSquish::Vec3::Vec3(aVStack_68,(float)local_80,(float)local_7c,180.0);
  DVec3::DVec3(aDStack_58);
  DVec3::DVec3((DVec3 *)asStack_48);
  CalculateTossVelocity
            ((SexyVector3 *)&local_78,(SexyVector3 *)aVStack_68,500.0,1.0,(SexyVector3 *)aDStack_58,
             (SexyVector3 *)asStack_48);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xec),(SexyVector3 *)aDStack_58);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xf8),(SexyVector3 *)asStack_48);
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x104) = uVar3;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::DrawLaser(Sexy::Graphics*) */

void EagleclawLightningBall::DrawLaser(Graphics *param_1)

{
  UIWidget *this;
  PopAnimRig *this_00;
  StandaloneEffect *this_01;
  Graphics *in_x1;
  undefined1 in_w4;
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 local_70;
  undefined4 local_6c;
  FastCurve aFStack_68 [8];
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_40 = GetLaserShooterPos((EagleclawLightningBall *)param_1);
  uVar3 = 0;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,0.0,0.0);
  local_70 = Sexy::SexyVector2::operator+((SexyVector2 *)&local_40,(SexyVector2 *)&local_38);
  fVar4 = *(float *)(param_1 + 0x134);
  local_6c = uVar3;
  Sexy::FastCurve::SetOutRange(aFStack_68,*(float *)(param_1 + 0x130),fVar4);
  fVar1 = (float)FUN_042aba3c(0x3f800000);
  local_60 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_70,fVar1);
  local_5c = fVar4;
  fVar1 = (float)FUN_042aba3c(0x3f800000);
  local_58 = Sexy::SexyVector2::operator*((SexyVector2 *)aFStack_68,fVar1);
  uVar3 = 0;
  local_54 = fVar4;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,0.0,0.0);
  fVar1 = (float)FUN_042aba3c(0x3f800000);
  local_50 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_38,fVar1);
  uVar5 = 0;
  local_4c = uVar3;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,100.0,0.0);
  fVar1 = (float)FUN_042aba3c(0x3f800000);
  local_48 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_38,fVar1);
  local_44 = uVar5;
  local_40 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_58,(SexyVector2 *)&local_60);
  local_3c = uVar5;
  fVar1 = (float)DVec2::getLength((DVec2 *)&local_40);
  local_38 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_48,(SexyVector2 *)&local_50);
  local_34 = uVar5;
  fVar4 = (float)DVec2::getLength((DVec2 *)&local_38);
  fVar2 = (float)WatergunBeamEntity::getAngleForVector
                           ((WatergunBeamEntity *)param_1,(SexyVector2 *)&local_40);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,fVar1 / fVar4,1.0);
  Sexy::SexyTransform2D::CreateTransformWithPivot
            ((SexyTransform2D *)&local_60,(SexyVector2 *)&local_38,fVar2,(SexyVector2 *)&local_50,
             (SexyVector2 *)0x1,(bool)in_w4);
  GetLaserRig();
  this = (UIWidget *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  this_00 = (PopAnimRig *)UIWidget::GetAtlasImage(this);
  PopAnimRig::SetRenderTransform(this_00,aSStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  GetLaserRig();
  this_01 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  StandaloneEffect::Draw(this_01,in_x1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::SetPlant(Sexy::RtWeakPtr<Plant>) */

void __thiscall EagleclawLightningBall::SetPlant(EagleclawLightningBall *this,RtWeakPtr *param_2)

{
  RtObject *this_00;
  PlantEagleclawProps *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xa8),param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  Plant::GetProps();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pPVar1 = Sexy::RtObject::Cast<PlantEagleclawProps>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (pPVar1 != (PlantEagleclawProps *)0x0) {
    *(undefined4 *)(this + 0xe0) = *(undefined4 *)(pPVar1 + 0x2b8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::InitBallAnim() */

void __thiscall EagleclawLightningBall::InitBallAnim(EagleclawLightningBall *this)

{
  RtClass *pRVar1;
  ResourceInfo *pRVar2;
  RtWeakPtr *__n;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = aRStack_10;
  std::string::string(asStack_18,"POPANIM_EFFECTS_EAGLECLAW_EFFECT01");
  nop();
  if ((this[0xea] != (EagleclawLightningBall)0x0) &&
     (std::string::append(asStack_18,"POPANIM_EFFECTS_EAGLECLAW_EFFECT03",(size_t)__n),
     this[0xeb] != (EagleclawLightningBall)0x0)) {
    std::string::append(asStack_18,"POPANIM_EFFECTS_EAGLECLAW_EFFECT02",(size_t)__n);
  }
  pRVar1 = (RtClass *)Sexy::RtClass::StaticGetClassNamed("PopAnimRig");
  GetPAMByName(asStack_18);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  PopAnimRig::CreateRig((PopAnim *)pRVar2,pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb0),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::LoadLaserEffect(std::string const&, std::string const&) */

void EagleclawLightningBall::LoadLaserEffect(string *param_1,string *param_2)

{
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  long *plVar2;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(param_2);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,0.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
  FUN_042ab8f0(this + 0x1c);
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this);
  StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this,false);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this,false);
  Effect_PopAnim::GetPopAnimRigPtr();
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  (**(code **)(*plVar2 + 0x80))(0x3f000000);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  ToolPacketData::GetProps();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::InitLaser() */

void __thiscall EagleclawLightningBall::InitLaser(EagleclawLightningBall *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *__n;
  string asStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = aRStack_10;
  std::string::string(asStack_20,"laser1");
  nop();
  if (this[0xe8] != (EagleclawLightningBall)0x0) {
    std::string::append(asStack_20,"laser2",(size_t)__n);
  }
  std::string::string(asStack_18,"POPANIM_EFFECTS_EAGLECLAW_EFFECT01");
  LoadLaserEffect((string *)this,asStack_18);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x128),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EagleclawLightningBall::EagleclawLightningBall() */

void __thiscall EagleclawLightningBall::EagleclawLightningBall(EagleclawLightningBall *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0682b5b0;
  *(undefined ***)(this + 0x10) = &PTR__EagleclawLightningBall_0682b798;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd0));
  Sexy::Point::Point((Point *)(this + 0xd8));
  DVec3::DVec3((DVec3 *)(this + 0xec));
  DVec3::DVec3((DVec3 *)(this + 0xf8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x128));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x130));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x138));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x140));
  return;
}


/* EagleclawLightningBall::StaticNew() */

EagleclawLightningBall * EagleclawLightningBall::StaticNew(void)

{
  EagleclawLightningBall *this;
  
  this = ::operator_new(0x148);
  EagleclawLightningBall(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::onDrawShadow(Sexy::Graphics*) */

void __thiscall EagleclawLightningBall::onDrawShadow(EagleclawLightningBall *this,Graphics *param_1)

{
  float *pfVar1;
  Image *pIVar2;
  float fVar3;
  undefined4 local_40;
  float local_3c;
  FastCurve aFStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar3 = pfVar1[2];
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,*pfVar1,pfVar1[1]);
  if ((*(long *)(gLawnApp + 0x9f0) != 0) && (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')
     ) {
    local_3c = local_3c - fVar3;
  }
  Sexy::FastCurve::SetOutRange(aFStack_38,5.0,0.0);
  Sexy::TPoint<float>::operator+=((TPoint<float> *)&local_40,(TPoint *)aFStack_38);
  fVar3 = (float)FUN_042aba3c(0x3f800000);
  Sexy::SexyVector2::operator*=((SexyVector2 *)&local_40,fVar3);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyTransform2D::Scale(aSStack_30,0.8,0.8);
  FUN_042ab664(local_40,local_3c,auStack_28,auStack_1c);
  pIVar2 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06af5b70);
  Sexy::Graphics::DrawImageMatrix(param_1,pIVar2,(SexyMatrix3 *)aSStack_30,0.0,0.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::FindLaserTarget() */

void __thiscall EagleclawLightningBall::FindLaserTarget(EagleclawLightningBall *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ResourceInfo *pRVar11;
  ulong uVar12;
  undefined8 uVar13;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var14;
  ResourceInfo *this_01;
  float fVar15;
  float fVar16;
  float fVar17;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar12 = 0;
  pfVar7 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  p_Var14 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0;
  fVar17 = *pfVar7;
  fVar16 = pfVar7[1];
  uVar2 = SharkMinion::getRow((SharkMinion *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets
            (aIStack_30,(int)(fVar17 - (float)iVar3 * 1.5),(int)(fVar16 - (float)(iVar4 / 2)),
             iVar5 * 3,iVar6);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,aIStack_30
             ,uVar2,uVar2);
  uVar13 = local_20;
  lVar8 = FUN_042ab760(local_20,local_18);
  this_01 = (ResourceInfo *)p_Var14;
  if (lVar8 != 0) {
    do {
      puVar9 = (undefined8 *)FUN_042ab76c(uVar13,uVar12);
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)*puVar9;
      cVar1 = CanBeTarget(this,(BoardEntity *)this_00);
      p_Var14 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)this_01;
      if (cVar1 != '\0') {
        pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x140));
        if (this_00 ==
            (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)pRVar11) {
          p_Var14 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x140));
          break;
        }
        p_Var14 = this_00;
        if (this_01 != (ResourceInfo *)0x0) {
          pfVar7 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(this_00);
          fVar16 = (float)Sexy::SexyMath::Fabs(*pfVar7 - fVar17);
          pfVar7 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this_01);
          fVar15 = (float)Sexy::SexyMath::Fabs(*pfVar7 - fVar17);
          p_Var14 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)this_01;
          if ((int)fVar16 < (int)fVar15) {
            p_Var14 = this_00;
          }
        }
      }
      uVar13 = local_20;
      uVar12 = uVar12 + 1;
      uVar10 = FUN_042ab760(local_20,local_18);
      this_01 = (ResourceInfo *)p_Var14;
    } while (uVar12 < uVar10);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(p_Var14);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::ApplyLaserDamage(BoardEntity*) */

void __thiscall
EagleclawLightningBall::ApplyLaserDamage(EagleclawLightningBall *this,BoardEntity *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  Zombie *this_01;
  PlantAction *pPVar2;
  long lVar3;
  code *pcVar4;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  Vec3 aVStack_68 [16];
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  if (this_01 != (Zombie *)0x0) {
    EATextSquish::Vec3::Vec3(aVStack_68,-3.0,-35.0,0.0);
    Zombie::AddAttachedEffect
              (this_01,"EagleclawElectric","POPANIM_EFFECTS_EAGLECLAW_EFFECT02","sj_ls",
               (SexyVector3 *)aVStack_68,1,true);
  }
  this_00 = (RtWeakPtr *)(this + 0xa8);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pPVar2 = (PlantAction *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    FUN_042ab8ec(*(undefined8 *)(lVar3 + 0x70));
    Plant::calcDamageInfoFromPlantAction(pPVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    local_58 = 0x80;
    (**(code **)(*(long *)param_1 + 0x110))(param_1,(DamageInfo *)aVStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)aVStack_68);
  }
  else {
    pcVar4 = *(code **)(*(long *)param_1 + 0x110);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)0x42480000,local_70,local_6c,(DamageInfo *)aVStack_68,0x80,aPStack_78,0
              );
    (*pcVar4)(param_1,(DamageInfo *)aVStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)aVStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::UpdateLaser() */

void EagleclawLightningBall::UpdateLaser(void)

{
  RtWeakPtr *this;
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  EagleclawLightningBall *in_x0;
  RtObject *this_00;
  Zombie *pZVar5;
  StandaloneEffect *pSVar6;
  RtObject *this_01;
  Zombie *pZVar7;
  ZombieZombossMech *pZVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 in_s1;
  float fVar13;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar11 = GetLaserShooterPos(in_x0);
  uVar1 = CONCAT44(in_s1,uVar11);
  this_00 = (RtObject *)FindLaserTarget(in_x0);
  if (this_00 == (RtObject *)0x0) {
    *(undefined8 *)(in_x0 + 0x138) = uVar1;
    *(undefined8 *)(in_x0 + 0x130) = uVar1;
    GetLaserRig();
    pSVar6 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    StandaloneEffect::SetVisibility(pSVar6,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  }
  else {
    this = (RtWeakPtr *)(in_x0 + 0x140);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (bVar2) {
      this_01 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      pZVar7 = Sexy::RtObject::Cast<Zombie>(this_01);
      pZVar5 = Sexy::RtObject::Cast<Zombie>(this_00);
      if (pZVar7 != (Zombie *)0x0) {
        std::string::string(asStack_10,"EagleclawMark");
        Zombie::DelTag((string *)pZVar7);
        std::string::~string(asStack_10);
        nop();
      }
    }
    else {
      pZVar5 = Sexy::RtObject::Cast<Zombie>(this_00);
    }
    if (pZVar5 != (Zombie *)0x0) {
      std::string::string(asStack_10,"EagleclawMark");
      Zombie::AddTag(pZVar5,asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    uVar11 = CollsionCenter(in_x0,(BoardEntity *)this_00);
    *(undefined4 *)(in_x0 + 0x138) = uVar11;
    *(undefined4 *)(in_x0 + 0x13c) = in_s1;
    pZVar5 = Sexy::RtObject::Cast<Zombie>(this_00);
    if ((((pZVar5 != (Zombie *)0x0) && (in_x0[0xe8] != (EagleclawLightningBall)0x0)) &&
        (cVar3 = Zombie::IsBoss(pZVar5), cVar3 == '\0')) &&
       (((pZVar8 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)pZVar5),
         pZVar8 == (ZombieZombossMech *)0x0 &&
         (cVar3 = (**(code **)(*(long *)pZVar5 + 0x4d8))(pZVar5), cVar3 == '\0')) &&
        (cVar3 = (**(code **)(*(long *)pZVar5 + 0x508))(pZVar5), cVar3 == '\0')))) {
      pfVar9 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)in_x0);
      pfVar10 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        *)pZVar5);
      fVar12 = *pfVar9;
      fVar13 = *pfVar10;
      iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
      if ((float)(iVar4 / 2) < fVar12 - fVar13) {
        Zombie::ApplyCondition((Zombie *)0x3f800000,0,pZVar5,0x96,1);
      }
    }
    *(undefined8 *)(in_x0 + 0x130) = *(undefined8 *)(in_x0 + 0x138);
    GetLaserRig();
    pSVar6 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    StandaloneEffect::SetVisibility(pSVar6,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    fVar12 = (float)PVZ_T();
    if (*(float *)(in_x0 + 0x120) < fVar12) {
      fVar12 = (float)PVZ_T();
      *(float *)(in_x0 + 0x120) = fVar12 + 0.5;
      ApplyLaserDamage(in_x0,(BoardEntity *)this_00);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::doSkill() */

void __thiscall EagleclawLightningBall::doSkill(EagleclawLightningBall *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  PopAnimRig *pPVar6;
  float *pfVar7;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar8;
  long lVar9;
  undefined8 *puVar10;
  Zombie *this_02;
  GridItem *pGVar11;
  ulong uVar12;
  PlantAction *pPVar13;
  ulong uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  RtMixedPtr aRStack_128 [8];
  RtId aRStack_120 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_110 [72];
  string asStack_c8 [8];
  float local_c0;
  undefined8 local_b8;
  undefined4 local_74;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xa4) = 3;
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x140),(RtWeakPtrBase *)(this + 0xd0));
  fVar16 = (float)PVZ_T();
  *(float *)(this + 0xe4) = fVar16 + *(float *)(this + 0xe0);
  InitLaser(this);
  UpdateLaser();
  if (this[0xe9] != (EagleclawLightningBall)0x0) {
    std::string::string((string *)&local_68,"Play_Plant_Eagleclaw_Attack_LV5_Lighting");
    this_00 = (RtWeakPtr *)(this + 0xa8);
    RealObject::PlayPositionalSound((RealObject *)this,(string *)&local_68,0.0);
    std::string::~string((string *)&local_68);
    nop();
    pPVar6 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    std::string::string((string *)&local_68,"projectile5t1");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_128);
    std::string::string(asStack_c8,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_110,aRStack_120,
               asStack_c8);
    PopAnimRig::PlayAndStop(pPVar6,(string *)&local_68,0,aRStack_110);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_110);
    std::string::~string(asStack_c8);
    nop();
    Sexy::RtId::~RtId(aRStack_120);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_128);
    std::string::~string((string *)&local_68);
    nop();
    pfVar7 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar16 = *pfVar7;
    fVar17 = pfVar7[1];
    this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_c8,"POPANIM_EFFECTS_EAGLECLAW_EFFECT01");
    GetPAMByName(asStack_c8);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar8,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    std::string::~string(asStack_c8);
    nop();
    EATextSquish::Vec3::Vec3((Vec3 *)&local_68,fVar16,fVar17,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)&local_68,-1);
    FUN_042ab8f0(this_01 + 0x1c);
    std::string::string((string *)&local_68,"lightingLv5");
    Effect_PopAnim::PlaySingleAnimation(this_01,(string *)&local_68,0);
    std::string::~string((string *)&local_68);
    nop();
    StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this_01,false);
    Effect_PopAnim::SetCentered(this_01,true);
    Sexy::Point::Point((Point *)aRStack_120,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)0x437a0000,local_68,uStack_64,asStack_c8,0x80,aRStack_120,0);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      pPVar13 = (PlantAction *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Plant::GetProps();
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_120)
      ;
      FUN_042ab8ec(*(undefined8 *)(lVar9 + 0x70));
      Plant::calcDamageInfoFromPlantAction(pPVar13);
      DamageInfo::operator=((DamageInfo *)asStack_c8,(DamageInfo *)&local_68);
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_120);
      local_b8 = 0x80;
      local_c0 = local_c0 * 5.0;
      local_74 = 0x41200000;
    }
    uVar14 = 0;
    iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    iVar4 = SharkMinion::getRow((SharkMinion *)this);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
    uVar5 = operator|(2,4);
    Sexy::Insets::Insets((Insets *)aRStack_120,iVar3,iVar4 + -1,1,1);
    EntityFinder::GetEntitiesInGridSquares((string *)&local_68,uVar5,aRStack_120);
    Sexy::Insets::Insets((Insets *)aRStack_120,iVar3 + -1,iVar4,1,1);
    EntityFinder::GetEntitiesInGridSquares((string *)&local_68,uVar5,aRStack_120);
    Sexy::Insets::Insets((Insets *)aRStack_120,iVar3,iVar4,1,1);
    EntityFinder::GetEntitiesInGridSquares((string *)&local_68,uVar5,aRStack_120);
    Sexy::Insets::Insets((Insets *)aRStack_120,iVar3 + 1,iVar4,1,1);
    EntityFinder::GetEntitiesInGridSquares((string *)&local_68,uVar5,aRStack_120);
    Sexy::Insets::Insets((Insets *)aRStack_120,iVar3,iVar4 + 1,1,1);
    EntityFinder::GetEntitiesInGridSquares((string *)&local_68,uVar5,aRStack_120);
    uVar15 = CONCAT44(uStack_64,local_68);
    lVar9 = FUN_042ab760(uVar15,local_60);
    if (lVar9 != 0) {
      do {
        puVar10 = (undefined8 *)FUN_042ab76c(uVar15,uVar14);
        this_02 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar10);
        if ((((this_02 != (Zombie *)0x0) && (cVar2 = RealObject::IsOnTeam(this_02,2), cVar2 != '\0')
             ) && (cVar2 = (**(code **)(*(long *)this_02 + 0x328))(this_02), cVar2 == '\0')) &&
           ((cVar2 = (**(code **)(*(long *)this_02 + 0x330))(this_02), cVar2 == '\0' &&
            (cVar2 = FUN_042ac59c(*(undefined4 *)(this_02 + 0xcc)), cVar2 == '\0')))) {
          iVar3 = Zombie::GetSizeType(this_02);
          if ((iVar3 == 0) || (iVar3 = Zombie::GetSizeType(this_02), iVar3 == 1)) {
            Zombie::ApplyCondition((Zombie *)0x3f800000,0,this_02,6,1);
            Zombie::ApplyCondition((Zombie *)0x3f800000,0,this_02,0x18,1);
          }
          (**(code **)(*(long *)this_02 + 0x110))(this_02,asStack_c8);
        }
        puVar10 = (undefined8 *)FUN_042ab76c(CONCAT44(uStack_64,local_68),uVar14);
        pGVar11 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar10);
        if (((pGVar11 != (GridItem *)0x0) &&
            (cVar2 = RealObject::IsOnTeam(pGVar11,2), cVar2 != '\0')) &&
           (cVar2 = (**(code **)(*(long *)pGVar11 + 0x1f8))(pGVar11), cVar2 != '\0')) {
          (**(code **)(*(long *)pGVar11 + 0x110))(pGVar11,asStack_c8);
        }
        uVar14 = uVar14 + 1;
        uVar15 = CONCAT44(uStack_64,local_68);
        uVar12 = FUN_042ab760(uVar15,local_60);
      } while (uVar14 < uVar12);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
    DamageInfo::~DamageInfo((DamageInfo *)asStack_c8);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* EagleclawLightningBall::~EagleclawLightningBall() */

void __thiscall EagleclawLightningBall::~EagleclawLightningBall(EagleclawLightningBall *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  this_00 = (RtMixedPtrBase *)(this + 0xb0);
  *(undefined ***)this = &PTR_GetClass_0682b5b0;
  *(undefined ***)(this + 0x10) = &PTR__EagleclawLightningBall_0682b798;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x128));
  }
  else {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar4 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x128));
  }
  if (cVar1 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128));
    (**(code **)(*plVar4 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x128));
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0x108);
    uVar2 = FUN_042ab794(uVar6,*(undefined8 *)(this + 0x110));
    if (uVar2 <= uVar5) break;
    lVar3 = FUN_042ab7a0(uVar6,uVar5);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(lVar3 + 8));
    if (cVar1 != '\0') {
      lVar3 = FUN_042ab7a0(*(undefined8 *)(this + 0x108),uVar5);
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 8));
      (**(code **)(*plVar4 + 0x48))();
    }
    lVar3 = FUN_042ab7a0(*(undefined8 *)(this + 0x108),uVar5);
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(lVar3 + 8));
    uVar5 = uVar5 + 1;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128));
  std::
  vector<std::pair<Sexy::Point,Sexy::RtWeakPtr<Effect_PopAnim>>,std::allocator<std::pair<Sexy::Point,Sexy::RtWeakPtr<Effect_PopAnim>>>>
  ::~vector((vector<std::pair<Sexy::Point,Sexy::RtWeakPtr<Effect_PopAnim>>,std::allocator<std::pair<Sexy::Point,Sexy::RtWeakPtr<Effect_PopAnim>>>>
             *)(this + 0x108));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
  std::vector<Sexy::SexyTransform2D,std::allocator<Sexy::SexyTransform2D>>::~vector
            ((vector<Sexy::SexyTransform2D,std::allocator<Sexy::SexyTransform2D>> *)(this + 0xb8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to EagleclawLightningBall::~EagleclawLightningBall() */

void __thiscall EagleclawLightningBall::~EagleclawLightningBall(EagleclawLightningBall *this)

{
  ~EagleclawLightningBall(this + -0x10);
  return;
}


/* EagleclawLightningBall::~EagleclawLightningBall() */

void __thiscall EagleclawLightningBall::~EagleclawLightningBall(EagleclawLightningBall *this)

{
  ~EagleclawLightningBall(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EagleclawLightningBall::~EagleclawLightningBall() */

void __thiscall EagleclawLightningBall::~EagleclawLightningBall(EagleclawLightningBall *this)

{
  ~EagleclawLightningBall(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::DrawLightingBall(Sexy::Graphics*) */

void EagleclawLightningBall::DrawLightingBall(Graphics *param_1)

{
  vector<Sexy::SexyTransform2D,std::allocator<Sexy::SexyTransform2D>> *this;
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ResourceInfo *this_00;
  ulong uVar6;
  SexyTransform2D *pSVar7;
  Graphics *in_x1;
  undefined1 in_w4;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  GraphicsAutoState aGStack_c0 [8];
  undefined8 local_b8;
  Color aCStack_b0 [12];
  int local_a4;
  undefined8 local_a0 [2];
  SexyTransform2D aSStack_90 [40];
  undefined8 local_68 [6];
  undefined4 local_38;
  undefined4 uStack_34;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0xb0));
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0xd0))(&local_d0,*(long **)(gLawnApp + 0x9f0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_c8)
  ;
  fVar12 = *(float *)(param_1 + 0x18);
  iVar2 = FUN_042aba4c(local_d0);
  fVar11 = *(float *)(param_1 + 0x1c);
  fVar13 = *(float *)(param_1 + 0x20);
  iVar3 = FUN_042aba4c(local_cc);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_c0,in_x1);
  (**(code **)(*(long *)param_1 + 0xf8))(param_1);
  if (this_00 != (ResourceInfo *)0x0) {
    this = (vector<Sexy::SexyTransform2D,std::allocator<Sexy::SexyTransform2D>> *)(param_1 + 0xb8);
    iVar4 = FUN_042aba4c(local_d0);
    iVar5 = FUN_042aba4c(local_cc);
    fVar12 = (float)FUN_042aba3c((fVar12 + local_c8 + (float)iVar2) - (float)iVar4);
    fVar9 = *(float *)(in_x1 + 0x20);
    fVar10 = *(float *)(in_x1 + 0x18);
    fVar11 = (float)FUN_042aba3c((((fVar11 + local_c4) - fVar13) + (float)iVar3) - (float)iVar5);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)local_a0,(float)(int)((fVar12 - fVar9) * fVar10) + fVar9,
               (float)(int)((fVar11 - *(float *)(in_x1 + 0x24)) * *(float *)(in_x1 + 0x1c)) +
               *(float *)(in_x1 + 0x24));
    uVar8 = 0x3f800000;
    Sexy::FastCurve::SetOutRange((FastCurve *)local_68,1.0,1.0);
    fVar11 = (float)FUN_042aba3c(0xbf800000);
    local_38 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_c8,fVar11);
    uStack_34 = uVar8;
    Sexy::SexyTransform2D::CreateTransformWithPivot
              ((SexyTransform2D *)local_a0,(SexyVector2 *)local_68,0.0,(SexyVector2 *)&local_38,
               (SexyVector2 *)0x0,(bool)in_w4);
    std::vector<Sexy::SexyTransform2D,std::allocator<Sexy::SexyTransform2D>>::push_back
              (this,aSStack_90);
    while (uVar6 = FUN_042ab7bc(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0)),
          8 < uVar6) {
      local_68[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)this);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_38,(__normal_iterator *)local_68);
      std::vector<Sexy::SexyTransform2D,std::allocator<Sexy::SexyTransform2D>>::erase
                (this,CONCAT44(uStack_34,local_38));
    }
    PopAnimRig::GetPAMColor();
    std::set<int,std::less<int>,std::allocator<int>>::set
              ((set<int,std::less<int>,std::allocator<int>> *)local_68,&DAT_05753470,4,
               (FastCurve *)local_a0,
               (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_38);
    std::set<int,std::less<int>,std::allocator<int>>::set
              ((set<int,std::less<int>,std::allocator<int>> *)&local_38,&DAT_05753460,4,
               (rbtree_iterator *)&local_b8,(FastCurve *)local_a0);
    for (local_d4 = 0; iVar2 = local_d4,
        uVar6 = FUN_042ab7bc(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0)),
        (ulong)(long)iVar2 < uVar6; local_d4 = local_d4 + 1) {
      if (param_1[0xea] == (Graphics)0x0) {
        local_b8 = std::set<int,std::less<int>,std::allocator<int>>::find
                             ((set<int,std::less<int>,std::allocator<int>> *)local_68,&local_d4);
        local_a0[0] = std::
                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)local_68);
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_b8,(rbtree_iterator *)local_a0);
        if (bVar1) {
LAB_042b07d8:
          local_a4 = (int)((float)(local_d4 + 1) * 28.333334);
          PopAnimRig::SetPAMColor((PopAnimRig *)this_00,aCStack_b0);
          pSVar7 = (SexyTransform2D *)FUN_042ab7e0(*(undefined8 *)(param_1 + 0xb8),(long)local_d4);
          PopAnimRig::Draw((PopAnimRig *)this_00,in_x1,pSVar7);
        }
      }
      else {
        local_b8 = std::set<int,std::less<int>,std::allocator<int>>::find
                             ((set<int,std::less<int>,std::allocator<int>> *)&local_38,&local_d4);
        local_a0[0] = std::
                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)&local_38);
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_b8,(rbtree_iterator *)local_a0);
        if (bVar1) goto LAB_042b07d8;
      }
    }
    Sexy::Color::Color((Color *)local_a0,1);
    PopAnimRig::SetPAMColor((PopAnimRig *)this_00,(Color *)local_a0);
    std::set<int,std::less<int>,std::allocator<int>>::~set
              ((set<int,std::less<int>,std::allocator<int>> *)&local_38);
    std::set<int,std::less<int>,std::allocator<int>>::~set
              ((set<int,std::less<int>,std::allocator<int>> *)local_68);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::updatePlantfoodSkill() */

void __thiscall EagleclawLightningBall::updatePlantfoodSkill(EagleclawLightningBall *this)

{
  RtWeakPtr *this_00;
  char *__s;
  EagleclawLightningBall EVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  Zombie *this_01;
  ulong uVar8;
  PopAnimRig *this_02;
  Effect_PopAnim *this_03;
  ResourceInfo *pRVar9;
  int *piVar10;
  undefined8 uVar11;
  StandaloneEffect *this_04;
  Plant *this_05;
  ulong uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  int local_170;
  int local_16c;
  undefined4 local_168;
  undefined4 local_164;
  FastCurve aFStack_160 [8];
  undefined4 local_158;
  float local_154;
  undefined4 local_150;
  float local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 local_100;
  SexyTransform2D aSStack_f0 [40];
  undefined8 local_c8 [6];
  undefined8 local_98 [6];
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  undefined4 local_14;
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0xa8);
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo((DamageInfo *)&local_68);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    this_05 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    local_60 = (float)Plant::GetTotalDamageRate(this_05);
    local_60 = local_60 * 300.0;
  }
  else {
    local_60 = 300.0;
  }
  local_58 = 0x80;
  local_68 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  if (this[0xeb] != (EagleclawLightningBall)0x0) {
    local_14 = 0x41200000;
  }
  uVar12 = 0;
  BoardEntity::CalcGridPosition();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_120);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_108);
  Sexy::Insets::Insets((Insets *)local_98,local_170 + -1,local_16c + -1,3,3);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_108,2,
             (Insets *)local_98);
  uVar13 = local_108;
  lVar6 = FUN_042ab760(local_108,local_100);
  if (lVar6 != 0) {
    do {
      puVar7 = (undefined8 *)FUN_042ab76c(uVar13,uVar12);
      this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
      if ((((this_01 != (Zombie *)0x0) && (cVar3 = RealObject::IsOnTeam(this_01,2), cVar3 != '\0'))
          && (cVar3 = (**(code **)(*(long *)this_01 + 0x328))(this_01), cVar3 == '\0')) &&
         ((cVar3 = (**(code **)(*(long *)this_01 + 0x330))(this_01), cVar3 == '\0' &&
          (cVar3 = FUN_042ac59c(*(undefined4 *)(this_01 + 0xcc)), cVar3 == '\0')))) {
        FUN_042ab76c(local_108,uVar12);
        BoardEntity::CalcGridPosition();
        uVar13 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_120);
        uVar11 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_120);
        local_c8[0] = std::
                      find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                                (uVar13,uVar11,(string *)&local_130);
        local_98[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)&local_120);
        bVar2 = __gnu_cxx::operator==((__normal_iterator *)local_c8,(__normal_iterator *)local_98);
        if (bVar2) {
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_120,
                     (Point *)&local_130);
          EVar1 = this[0xeb];
        }
        else {
          EVar1 = this[0xeb];
        }
        if ((EVar1 != (EagleclawLightningBall)0x0) &&
           ((iVar4 = Zombie::GetSizeType(this_01), iVar4 == 0 ||
            (iVar4 = Zombie::GetSizeType(this_01), iVar4 == 1)))) {
          Zombie::ApplyCondition((Zombie *)0x3f800000,0,this_01,6,1);
          Zombie::ApplyCondition((Zombie *)0x3f800000,0,this_01,0x18,1);
        }
        EATextSquish::Vec3::Vec3((Vec3 *)local_98,-3.0,-35.0,0.0);
        Zombie::AddAttachedEffect
                  (this_01,"EagleclawElectric","POPANIM_EFFECTS_EAGLECLAW_EFFECT02","sj_ls",
                   (SexyVector3 *)local_98,1,true);
        (**(code **)(*(long *)this_01 + 0x110))(this_01,(DamageInfo *)&local_68);
      }
      uVar13 = local_108;
      uVar12 = uVar12 + 1;
      uVar8 = FUN_042ab760(local_108,local_100);
    } while (uVar12 < uVar8);
  }
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
            ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_c8);
  bVar2 = false;
  std::string::string((string *)local_98,"sd01");
  ProbabilitySet<std::string>::AddItem
            ((ProbabilitySet<std::string> *)local_c8,(Insets *)local_98,10);
  std::string::~string((string *)local_98);
  nop();
  std::string::string((string *)local_98,"sd02");
  ProbabilitySet<std::string>::AddItem
            ((ProbabilitySet<std::string> *)local_c8,(Insets *)local_98,10);
  std::string::~string((string *)local_98);
  nop();
  std::string::string((string *)local_98,"sd03");
  ProbabilitySet<std::string>::AddItem
            ((ProbabilitySet<std::string> *)local_c8,(Insets *)local_98,10);
  std::string::~string((string *)local_98);
  nop();
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
            ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_98);
  std::string::string((string *)&local_130,"sd01zs");
  ProbabilitySet<std::string>::AddItem
            ((ProbabilitySet<std::string> *)local_98,(string *)&local_130,10);
  std::string::~string((string *)&local_130);
  nop();
  std::string::string((string *)&local_130,"sd02zs");
  ProbabilitySet<std::string>::AddItem
            ((ProbabilitySet<std::string> *)local_98,(string *)&local_130,10);
  std::string::~string((string *)&local_130);
  nop();
  std::string::string((string *)&local_130,"sd03zs");
  ProbabilitySet<std::string>::AddItem
            ((ProbabilitySet<std::string> *)local_98,(string *)&local_130,10);
  std::string::~string((string *)&local_130);
  nop();
  for (uVar12 = 0; uVar8 = FUN_042ab7a8(local_120,local_118), uVar12 < uVar8; uVar12 = uVar12 + 1) {
    this_03 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    __s = "POPANIM_EFFECTS_EAGLECLAW_EFFECT02";
    if (this[0xeb] == (EagleclawLightningBall)0x0) {
      __s = "POPANIM_EFFECTS_EAGLECLAW_EFFECT01";
    }
    std::string::string((string *)&local_138,__s);
    GetPAMByName((string *)&local_138);
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_130);
    Effect_PopAnim::CreatePopAnimRig(this_03,(PopAnim *)pRVar9,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_130);
    std::string::~string((string *)&local_138);
    nop();
    piVar10 = (int *)FUN_042ab7b4(local_120,uVar12);
    iVar4 = BoardTransforms::GridToBoardSpaceX(*piVar10);
    lVar6 = FUN_042ab7b4(local_120,uVar12);
    iVar5 = BoardTransforms::GridToBoardSpaceY(*(int *)(lVar6 + 4));
    EATextSquish::Vec3::Vec3((Vec3 *)&local_130,(float)iVar4,(float)iVar5,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_03,(SexyVector3 *)&local_130,-1);
    FUN_042ab8f0(this_03 + 0x1c);
    if (this[0xeb] == (EagleclawLightningBall)0x0) {
      ProbabilitySet<std::string>::PickItem();
    }
    else {
      ProbabilitySet<std::string>::PickItem();
    }
    Effect_PopAnim::PlaySingleAnimation(this_03,(string *)&local_130,0);
    std::string::~string((string *)&local_130);
    bVar2 = true;
    Effect_PopAnim::SetCentered(this_03,true);
    uVar16 = *(undefined4 *)(this + 0x1c);
    local_138 = FUN_042ab900(*(undefined4 *)(this + 0x18),uVar16,*(undefined4 *)(this + 0x20));
    uVar17 = 0;
    local_134 = uVar16;
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_130,0.0,0.0);
    local_168 = Sexy::SexyVector2::operator+((SexyVector2 *)&local_138,(SexyVector2 *)&local_130);
    local_164 = uVar17;
    piVar10 = (int *)FUN_042ab7b4(local_120,uVar12);
    iVar4 = BoardTransforms::GridToBoardSpaceX(*piVar10);
    lVar6 = FUN_042ab7b4(local_120,uVar12);
    iVar5 = BoardTransforms::GridToBoardSpaceY(*(int *)(lVar6 + 4));
    fVar18 = (float)iVar5;
    Sexy::FastCurve::SetOutRange(aFStack_160,(float)iVar4,fVar18);
    fVar14 = (float)FUN_042aba3c(0x3f800000);
    local_158 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_168,fVar14);
    local_154 = fVar18;
    fVar14 = (float)FUN_042aba3c(0x3f800000);
    local_150 = Sexy::SexyVector2::operator*((SexyVector2 *)aFStack_160,fVar14);
    uVar16 = 0;
    local_14c = fVar18;
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_130,0.0,0.0);
    fVar14 = (float)FUN_042aba3c(0x3f800000);
    local_148 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_130,fVar14);
    uVar17 = 0;
    local_144 = uVar16;
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_130,90.0,0.0);
    fVar14 = (float)FUN_042aba3c(0x3f800000);
    local_140 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_130,fVar14);
    local_13c = uVar17;
    local_138 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_150,(SexyVector2 *)&local_158);
    local_134 = uVar17;
    fVar14 = (float)DVec2::getLength((DVec2 *)&local_138);
    local_130 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_140,(SexyVector2 *)&local_148);
    local_12c = uVar17;
    fVar18 = (float)DVec2::getLength((DVec2 *)&local_130);
    fVar15 = (float)WatergunBeamEntity::getAngleForVector
                              ((WatergunBeamEntity *)this,(SexyVector2 *)&local_138);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_130,fVar14 / fVar18,1.0);
    Sexy::SexyTransform2D::CreateTransformWithPivot
              ((SexyTransform2D *)&local_158,(SexyVector2 *)&local_130,fVar15,
               (SexyVector2 *)&local_148,(SexyVector2 *)0x1,SUB81(aSStack_f0,0));
    Effect_PopAnim::GetPopAnimRigPtr();
    this_02 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_130);
    PopAnimRig::SetRenderTransform(this_02,aSStack_f0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_130);
  }
  uVar12 = 0;
  while( true ) {
    uVar13 = *(undefined8 *)(this + 0x108);
    uVar8 = FUN_042ab794(uVar13,*(undefined8 *)(this + 0x110));
    if (uVar8 <= uVar12) break;
    lVar6 = FUN_042ab7a0(uVar13,uVar12);
    this_04 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 8))
    ;
    StandaloneEffect::SetVisibility(this_04,bVar2);
    uVar12 = uVar12 + 1;
  }
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)local_98);
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)local_c8);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_108);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_120);
  DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::doPlantfoodSkill() */

void __thiscall EagleclawLightningBall::doPlantfoodSkill(EagleclawLightningBall *this)

{
  int iVar1;
  char *__s;
  char cVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  Point *extraout_x1;
  int iVar4;
  int iVar5;
  float fVar6;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  Point aPStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [16];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_68 [48];
  string asStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0xa4) = 4;
  local_8 = ___stack_chk_guard;
  fVar6 = (float)PVZ_T();
  *(float *)(this + 0xe4) = fVar6 + *(float *)(this + 0xe0);
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_68);
  std::string::string(asStack_38,"gridFX1");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_38,10);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"gridFX2");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_38,10);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"gridFX3");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_38,10);
  std::string::~string(asStack_38);
  nop();
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
            ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)asStack_38);
  std::string::string(asStack_78,"gridFX4");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)asStack_38,asStack_78,10);
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"gridFX5");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)asStack_38,asStack_78,10);
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"gridFX6");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)asStack_38,asStack_78,10);
  std::string::~string(asStack_78);
  nop();
  BoardEntity::CalcGridPosition();
  iVar5 = local_98 + -1;
  if (iVar5 <= local_98 + 1) {
    do {
      iVar4 = local_94 + -1;
      if (local_94 + -1 <= local_94 + 1) {
        do {
          while (cVar2 = BoardTransforms::IsGridCoordinateOnBoard(iVar5,iVar4), cVar2 == '\0') {
            iVar4 = iVar4 + 1;
            if (local_94 + 1 < iVar4) goto LAB_042b1490;
          }
          Sexy::Point::Point((Point *)asStack_78,iVar5,iVar4);
          BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)asStack_78,extraout_x1);
          this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
          __s = "POPANIM_EFFECTS_EAGLECLAW_EFFECT01";
          if (this[0xeb] == (EagleclawLightningBall)0x0) {
            __s = "POPANIM_EFFECTS_EAGLECLAW_EFFECT02";
          }
          std::string::string(asStack_80,__s);
          GetPAMByName(asStack_80);
          pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_78);
          Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
          std::string::~string(asStack_80);
          nop();
          EATextSquish::Vec3::Vec3((Vec3 *)asStack_78,(float)local_90,(float)local_8c,0.0);
          StandaloneEffect::SetBoardSpaceOrigin
                    ((StandaloneEffect *)this_00,(SexyVector3 *)asStack_78,-1);
          FUN_042ab8f0(this_00 + 0x1c);
          if (this[0xeb] == (EagleclawLightningBall)0x0) {
            ProbabilitySet<std::string>::PickItem();
          }
          else {
            ProbabilitySet<std::string>::PickItem();
          }
          PVZ_EOT();
          Effect_PopAnim::PlayLoopingAnimation(this_00,asStack_78,0);
          std::string::~string(asStack_78);
          Effect_PopAnim::SetCentered(this_00,true);
          StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,false);
          iVar1 = iVar4 + 1;
          Sexy::Point::Point(aPStack_88,iVar5,iVar4);
          ToolPacketData::GetProps();
          std::pair<Sexy::Point,Sexy::RtWeakPtr<Effect_PopAnim>>::
          pair<Sexy::Point,Sexy::RtWeakPtr<GameObject>,void>
                    ((pair<Sexy::Point,Sexy::RtWeakPtr<Effect_PopAnim>> *)asStack_78,aPStack_88,
                     (RtWeakPtr *)asStack_80);
          std::
          vector<std::pair<Sexy::Point,Sexy::RtWeakPtr<Effect_PopAnim>>,std::allocator<std::pair<Sexy::Point,Sexy::RtWeakPtr<Effect_PopAnim>>>>
          ::push_back((vector<std::pair<Sexy::Point,Sexy::RtWeakPtr<Effect_PopAnim>>,std::allocator<std::pair<Sexy::Point,Sexy::RtWeakPtr<Effect_PopAnim>>>>
                       *)(this + 0x108),(pair *)asStack_78);
          WidgetImg::~WidgetImg((WidgetImg *)asStack_78);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_80);
          iVar4 = iVar1;
        } while (iVar1 <= local_94 + 1);
      }
LAB_042b1490:
      iVar5 = iVar5 + 1;
    } while (iVar5 <= local_98 + 1);
  }
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)asStack_38);
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::updatePosition() */

void EagleclawLightningBall::updatePosition(void)

{
  char cVar1;
  EagleclawLightningBall *in_x0;
  long lVar2;
  PlantEagleclaw *this;
  SexyVector3 *pSVar3;
  code *pcVar4;
  float fVar5;
  int in_s1;
  undefined4 local_68 [4];
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38 [4];
  int local_28;
  int local_24;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0xa4) == 1) {
    fVar5 = (float)PVZ_Dt();
    pSVar3 = (SexyVector3 *)(in_x0 + 0xec);
    pcVar4 = *(code **)(*(long *)in_x0 + 0x78);
    local_68[0] = Sexy::SexyVector3::operator*(pSVar3,fVar5);
    local_58[0] = Sexy::SexyVector3::operator+
                            ((SexyVector3 *)(in_x0 + 0x18),(SexyVector3 *)local_68);
    local_48[0] = Sexy::SexyVector3::operator*((SexyVector3 *)(in_x0 + 0xf8),fVar5);
    local_38[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_48,fVar5);
    local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)local_38,0.5);
    local_18[0] = Sexy::SexyVector3::operator+((SexyVector3 *)local_58,(SexyVector3 *)&local_28);
    (*pcVar4)();
    local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)(in_x0 + 0xf8),fVar5);
    local_18[0] = Sexy::SexyVector3::operator+(pSVar3,(SexyVector3 *)&local_28);
    Sexy::SexyVector3::operator=(pSVar3,(SexyVector3 *)local_18);
    if ((0.0 <= *(float *)(in_x0 + 0xf4)) || (125.0 <= *(float *)(in_x0 + 0x20))) {
      cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(in_x0 + 0xd0));
      if (cVar1 != '\0') {
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0xa8));
        if (cVar1 != '\0') {
          lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xa8));
          this = Sexy::RtObject::Cast<PlantEagleclaw>(*(RtObject **)(lVar2 + 0xa8));
          if (this != (PlantEagleclaw *)0x0) {
            PlantEagleclaw::ClearCoolDown(this);
          }
        }
        disappear(in_x0);
      }
    }
    else {
      doSkill(in_x0);
    }
  }
  else if (*(int *)(in_x0 + 0xa4) == 2) {
    fVar5 = (float)PVZ_Dt();
    pSVar3 = (SexyVector3 *)(in_x0 + 0xec);
    pcVar4 = *(code **)(*(long *)in_x0 + 0x78);
    local_68[0] = Sexy::SexyVector3::operator*(pSVar3,fVar5);
    local_58[0] = Sexy::SexyVector3::operator+
                            ((SexyVector3 *)(in_x0 + 0x18),(SexyVector3 *)local_68);
    local_48[0] = Sexy::SexyVector3::operator*((SexyVector3 *)(in_x0 + 0xf8),fVar5);
    local_38[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_48,fVar5);
    local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)local_38,0.5);
    local_18[0] = Sexy::SexyVector3::operator+((SexyVector3 *)local_58,(SexyVector3 *)&local_28);
    (*pcVar4)();
    local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)(in_x0 + 0xf8),fVar5);
    local_24 = in_s1;
    local_18[0] = Sexy::SexyVector3::operator+(pSVar3,(SexyVector3 *)&local_28);
    Sexy::SexyVector3::operator=(pSVar3,(SexyVector3 *)local_18);
    if (*(float *)(in_x0 + 0xf4) < 0.0) {
      BoardEntity::CalcGridPosition();
      cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)(in_x0 + 0xd8),(TPoint *)local_18);
      if ((cVar1 != '\0') && (*(float *)(in_x0 + 0x20) < 180.0)) {
        BoardTransforms::GridToBoardSpace((Point *)(in_x0 + 0xd8));
        pcVar4 = *(code **)(*(long *)in_x0 + 0x78);
        EATextSquish::Vec3::Vec3((Vec3 *)local_18,(float)local_28,(float)local_24,180.0);
        (*pcVar4)();
        doPlantfoodSkill(in_x0);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EagleclawLightningBall::onUpdate() */

void __thiscall EagleclawLightningBall::onUpdate(EagleclawLightningBall *this)

{
  int iVar1;
  char cVar2;
  ResourceInfo *this_00;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  fVar3 = (float)PVZ_T();
  if (*(float *)(this + 0xe4) < fVar3) {
    uVar5 = PVZ_EOT();
    *(undefined4 *)(this + 0xe4) = uVar5;
    disappear(this);
    updatePosition();
    iVar1 = *(int *)(this + 0xa4);
  }
  else {
    updatePosition();
    iVar1 = *(int *)(this + 0xa4);
  }
  if (iVar1 == 3) {
    UpdateLaser();
  }
  else if (((iVar1 == 4) && (fVar3 = (float)PVZ_T(), *(float *)(this + 0x104) < fVar3)) &&
          (cVar2 = updatePlantfoodSkill(this), cVar2 != '\0')) {
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x104) = fVar3 + 0.5;
  }
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xb0));
  if (this_00 != (ResourceInfo *)0x0) {
    fVar3 = (float)PVZ_T();
    fVar4 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim((PopAnimRig *)this_00,fVar3,fVar4);
  }
  if (*(int *)(this + 0xa4) == 5) {
    (**(code **)(*(long *)this + 0x48))(this);
    return;
  }
  return;
}


/* EagleclawLightningBall::onInitialized() */

void __thiscall EagleclawLightningBall::onInitialized(EagleclawLightningBall *this)

{
  undefined4 uVar1;
  
  BoardEntity::onInitialized((BoardEntity *)this);
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xe0) = 0x40a00000;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xe4) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EagleclawLightningBall::AddToRenderQueue(RenderQueue*) */

void __thiscall
EagleclawLightningBall::AddToRenderQueue(EagleclawLightningBall *this,RenderQueue *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RealObject::AddToRenderQueue((RealObject *)this,param_1);
  cVar1 = FUN_042ac55c(*(undefined4 *)(this + 0x28));
  if (cVar1 == '\0') {
    uVar2 = SharkMinion::getRow((SharkMinion *)this);
    uVar3 = Board::MakeRenderOrder(0x64960,uVar2,0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,DrawLightingBall);
    Sexy::Delegate1<Sexy::Graphics*>::
    Delegate1<EagleclawLightningBall,void(EagleclawLightningBall::*)(Sexy::Graphics*)>
              (aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,uVar3,aDStack_38);
    if (*(int *)(this + 0xa4) == 3) {
      uVar2 = Board::MakeRenderOrder(0x635d8,uVar2,0xffffff9c);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,DrawLaser);
      Sexy::Delegate1<Sexy::Graphics*>::
      Delegate1<EagleclawLightningBall,void(EagleclawLightningBall::*)(Sexy::Graphics*)>
                (aDStack_38,aCStack_50);
      RenderQueue::Add(param_1,uVar2,aDStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

