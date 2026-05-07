// Class: PlantGrapeshot


/* PlantGrapeshot::GetCollisionFlags(PlantWeapon) */

void PlantGrapeshot::GetCollisionFlags(void)

{
  operator|(7,8);
  return;
}


/* PlantGrapeshot::StaticGetClass() */

long * PlantGrapeshot::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantGrapeshot",uVar2,StaticNew);
  return sClass;
}


/* PlantGrapeshot::GetClass() const */

long * PlantGrapeshot::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantGrapeshot",uVar2,StaticNew);
  return sClass;
}


/* PlantGrapeshot::PlantGrapeshot() */

void __thiscall PlantGrapeshot::PlantGrapeshot(PlantGrapeshot *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_068105d0;
  return;
}


/* PlantGrapeshot::StaticNew() */

PlantGrapeshot * PlantGrapeshot::StaticNew(void)

{
  PlantGrapeshot *this;
  
  this = ::operator_new(0x28);
  PlantGrapeshot(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrapeshot::Explode() */

void __thiscall PlantGrapeshot::Explode(PlantGrapeshot *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_Grapeshot");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.0);
  Plant::DoSpecial(*(Plant **)(this + 0x10));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrapeshot::AddMucus() */

void __thiscall PlantGrapeshot::AddMucus(PlantGrapeshot *this)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  Board *this_00;
  int local_20;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"mucus");
  BoardEntity::CalcGridPosition();
  BoardEntity::CalcGridPosition();
  iVar1 = FUN_0422d384(*(undefined8 *)(this + 0x10));
  lVar3 = Board::AddGridItem(this_00,asStack_10,local_20,local_14,iVar1);
  std::string::~string(asStack_10);
  nop();
  uVar2 = FUN_0422d36c(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
  FUN_0422d370(lVar3 + 0x24,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGrapeshot::~PlantGrapeshot() */

void __thiscall PlantGrapeshot::~PlantGrapeshot(PlantGrapeshot *this)

{
  *(undefined ***)this = &PTR_GetClass_068105d0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantGrapeshot::~PlantGrapeshot() */

void __thiscall PlantGrapeshot::~PlantGrapeshot(PlantGrapeshot *this)

{
  ~PlantGrapeshot(this);
  AK::FreeHook(this);
  return;
}


/* PlantGrapeshot::UpdateActions() */

void __thiscall PlantGrapeshot::UpdateActions(PlantGrapeshot *this)

{
  char cVar1;
  PopAnimRig *this_00;
  
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar1 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar1 == '\0') {
      Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrapeshot::Initialize() */

void __thiscall PlantGrapeshot::Initialize(PlantGrapeshot *this)

{
  char cVar1;
  long *plVar2;
  PlantAnimRig *pPVar3;
  RealObject *this_00;
  code *pcVar4;
  undefined4 uVar5;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pcVar4 = *(code **)(*plVar2 + 0x130);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    (*pcVar4)(plVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    pPVar3 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PlantAnimRig::SetState(pPVar3,0xe);
    this_00 = *(RealObject **)(this + 0x10);
    uVar5 = PVZ_EOT();
    *(undefined4 *)(this_00 + 0x124) = uVar5;
    std::string::string(asStack_58,"Play_Reverse_Explosion");
    RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrapeshot::SpawnProjectiles() */

void PlantGrapeshot::SpawnProjectiles(void)

{
  undefined4 uVar1;
  long in_x0;
  Projectile *this;
  SexyVector3 *pSVar2;
  GrapeshotProjectile *this_00;
  int iVar3;
  float fVar4;
  double dVar5;
  undefined4 local_40 [4];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  dVar5 = 0.0;
  local_8 = ___stack_chk_guard;
  iVar3 = 8;
  uVar1 = *(undefined4 *)(*(long *)(in_x0 + 0x10) + 0x150);
  *(undefined4 *)(*(long *)(in_x0 + 0x10) + 0x150) = 0;
  do {
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    fVar4 = (float)dVar5;
    dVar5 = dVar5 + 0.7853981852531433;
    Sexy::SexyTransform2D::RotateRad(aSStack_30,fVar4);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_40);
    this = (Projectile *)PlantFramework::Fire();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
    pSVar2 = (SexyVector3 *)Projectile::GetVelocity(this);
    local_40[0] = Sexy::SexyMatrix3::operator*((SexyMatrix3 *)aSStack_30,pSVar2);
    Projectile::SetVelocity(this,(SexyVector3 *)local_40);
    this_00 = Sexy::RtObject::Cast<GrapeshotProjectile>((RtObject *)this);
    GrapeshotProjectile::SetProjectileAnimation(this_00);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(*(long *)(in_x0 + 0x10) + 0x150) = uVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGrapeshot::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

undefined8 PlantGrapeshot::Fire(PlantGrapeshot *param_1)

{
  char cVar1;
  
  Explode(param_1);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
  if (cVar1 != '\0') {
    AddMucus(param_1);
  }
  SpawnProjectiles();
  return 0;
}

