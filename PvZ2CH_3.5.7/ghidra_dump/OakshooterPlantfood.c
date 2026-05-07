// Class: OakshooterPlantfood


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakshooterPlantfood::Update(Plant*, Sexy::SexyVector3 const&, float, PlantAction const&) */

void OakshooterPlantfood::Update
               (Plant *param_1,SexyVector3 *param_2,float param_3,PlantAction *param_4)

{
  RtWeakPtrBase *pRVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  Projectile *this;
  float *pfVar7;
  int iVar8;
  long in_x3;
  int iVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float extraout_s0;
  Board *pBVar15;
  float local_38;
  float local_34;
  undefined8 local_28;
  float local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06ae6dd0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_06ae6dd0), param_3 = extraout_s0, iVar2 != 0)) {
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06ae6db0,50.0,700.0,0.0);
    param_3 = (float)__cxa_guard_release(&DAT_06ae6dd0);
  }
  if (((DAT_06ae6d40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(param_3,&DAT_06ae6d40), iVar2 != 0))
  {
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06ae6dc0,5.0,20.0,-400.0);
    __cxa_guard_release(&DAT_06ae6d40);
  }
  fVar11 = (float)PVZ_T();
  local_18 = CONCAT44(local_18._4_4_,*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8));
  local_28 = CONCAT44(local_28._4_4_,
                      (int)((fVar11 - *(float *)(param_1 + 4)) * *(float *)param_1) -
                      *(int *)(param_1 + 8));
  piVar3 = eastl::min_alt<int>((int *)&local_28,(int *)&local_18);
  iVar2 = *piVar3;
  if (0 < iVar2) {
    iVar9 = 0;
    pRVar1 = (RtWeakPtrBase *)(in_x3 + 8);
    do {
      fVar11 = (float)Sexy::Rand(800.0);
      fVar12 = (float)Sexy::Rand(40.0);
      fVar12 = -fVar12;
      fVar13 = (float)RandRangeFloat(8.0,98.0);
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      iVar8 = *(int *)(param_1 + 0x14);
      uVar5 = FUN_03fdc17c(uVar10,*(undefined8 *)(param_1 + 0x28));
      if (((ulong)(long)iVar8 < uVar5) && (*(int *)(param_1 + 8) % 4 == 1)) {
        lVar6 = FUN_03fdc190(uVar10,(long)iVar8);
        if ((*(char *)(lVar6 + 0x10) == '\0') && (*(int *)(lVar6 + 0x14) < 3)) {
          pBVar15._0_4_ = (Board *)(*(float *)(lVar6 + 4) - 60.0);
          DVec3::DVec3((DVec3 *)&local_38);
          DVec3::DVec3((DVec3 *)&local_28);
          EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)pBVar15._0_4_,fVar12,fVar13);
          lVar6 = FUN_03fdc190(*(undefined8 *)(param_1 + 0x20),(long)*(int *)(param_1 + 0x14));
          CalculateTossVelocity
                    ((SexyVector3 *)&local_18,(SexyVector3 *)(lVar6 + 4),0.0,0.4,
                     (SexyVector3 *)&local_38,(SexyVector3 *)&local_28);
          uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_18,pRVar1);
          this = (Projectile *)
                 Board::AddProjectile
                           (pBVar15._0_4_,fVar12,fVar13,uVar10,
                            (RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          uVar14 = Projectile::GetDamageAmount(this);
          *(undefined4 *)(param_1 + 0x18) = uVar14;
          Projectile::SetVelocity(this,(SexyVector3 *)&local_38);
          Projectile::SetAcceleration(this,(SexyVector3 *)&local_28);
          iVar8 = *(int *)(param_1 + 0x14);
          uVar10 = *(undefined8 *)(param_1 + 0x20);
          pfVar7 = (float *)FUN_03fdc190(uVar10,(long)iVar8);
          fVar12 = *(float *)(param_1 + 0x18);
          fVar11 = *pfVar7;
          *pfVar7 = fVar11 - fVar12;
          if (fVar11 - fVar12 <= 0.0) {
            *(undefined1 *)(pfVar7 + 4) = 1;
          }
          pfVar7[5] = (float)((int)pfVar7[5] + 1);
        }
        else {
          uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_18,pRVar1);
          this = (Projectile *)
                 Board::AddProjectile
                           ((Board *)(fVar11 + 240.0),fVar12,fVar13,uVar10,
                            (RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          uVar14 = Projectile::GetDamageAmount(this);
          *(undefined4 *)(param_1 + 0x18) = uVar14;
          Projectile::SetVelocity(this,(SexyVector3 *)&DAT_06ae6db0);
          Projectile::SetAcceleration(this,(SexyVector3 *)&DAT_06ae6dc0);
          iVar8 = *(int *)(param_1 + 0x14);
          uVar10 = *(undefined8 *)(param_1 + 0x20);
        }
        *(int *)(param_1 + 0x14) = iVar8 + 1;
        uVar5 = FUN_03fdc17c(uVar10,*(undefined8 *)(param_1 + 0x28));
        if (uVar5 <= (ulong)(long)(iVar8 + 1)) {
          *(undefined4 *)(param_1 + 0x14) = 0;
        }
      }
      else {
        uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_18,pRVar1);
        this = (Projectile *)
               Board::AddProjectile
                         ((Board *)(fVar11 + 240.0),fVar12,fVar13,uVar10,
                          (RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        uVar14 = Projectile::GetDamageAmount(this);
        *(undefined4 *)(param_1 + 0x18) = uVar14;
        Projectile::SetVelocity(this,(SexyVector3 *)&DAT_06ae6db0);
        Projectile::SetAcceleration(this,(SexyVector3 *)&DAT_06ae6dc0);
      }
      iVar9 = iVar9 + 1;
      uVar10 = FUN_03fdc120(*(undefined8 *)(this + 0xe0));
      uVar10 = operator|(uVar10,0x2000);
      FUN_03fdc124((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0xe0),uVar10);
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      local_28 = *puVar4;
      local_20 = *(float *)(puVar4 + 1);
      fVar11 = sinf((float)*(int *)(param_1 + 8) * 10.0);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,0.0,fVar11 * 5.0);
      local_20 = local_20 - fVar11 * 10.0;
      local_28 = CONCAT44(local_34 + local_28._4_4_,local_38 + (float)local_28);
      (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_28);
      FUN_03fdc118(*(undefined4 *)(param_1 + 0x10),
                   (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0xc4));
      puVar4 = (undefined8 *)Projectile::GetVelocityScale(this);
      local_18 = *puVar4;
      local_10 = *(undefined4 *)(puVar4 + 1);
      fVar11 = (float)Sexy::Rand(0.7);
      local_18 = CONCAT44(local_18._4_4_,(fVar11 + 1.0) * (float)local_18);
      Projectile::SetVelocityScale(this,(SexyVector3 *)&local_18);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    } while (iVar9 != iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OakshooterPlantfood::OakshooterPlantfood() */

void __thiscall OakshooterPlantfood::OakshooterPlantfood(OakshooterPlantfood *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0x43960000;
  std::vector<OakshooterPlantfood::_OakHitItem,std::allocator<OakshooterPlantfood::_OakHitItem>>::
  clear((vector<OakshooterPlantfood::_OakHitItem,std::allocator<OakshooterPlantfood::_OakHitItem>> *
        )(this + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakshooterPlantfood::Start(float, int, Plant*) */

void OakshooterPlantfood::Start(float param_1,int param_2,Plant *param_3)

{
  char cVar1;
  bool bVar2;
  float *pfVar3;
  ulong uVar4;
  RtObject *this;
  RealObject *in_x2;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  DVec3 aDStack_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  float local_20;
  float local_1c [3];
  undefined1 local_10;
  undefined4 local_c;
  long local_8;
  
  pfVar3 = (float *)(ulong)(uint)param_2;
  fVar8 = (float)(int)SUB84(param_3,0);
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  *pfVar3 = fVar8 / param_1;
  fVar7 = (float)PVZ_T();
  pfVar3[3] = SUB84(param_3,0);
  pfVar3[2] = 0.0;
  pfVar3[5] = 0.0;
  pfVar3[1] = fVar7;
  std::vector<OakshooterPlantfood::_OakHitItem,std::allocator<OakshooterPlantfood::_OakHitItem>>::
  clear((vector<OakshooterPlantfood::_OakHitItem,std::allocator<OakshooterPlantfood::_OakHitItem>> *
        )(pfVar3 + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,2);
  uVar6 = local_38;
  uVar4 = FUN_03fdc158(local_38,local_30);
  if (uVar4 != 0) {
    do {
      FUN_03fdc164(uVar6,uVar5);
      nop();
      if (this != (RtObject *)0x0) {
        cVar1 = (**(code **)(*(long *)this + 0x328))();
        if ((((((cVar1 == '\0') &&
               (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) &&
              (bVar2 = Sexy::RtObject::IsA<Zomboss>(this), !bVar2)) &&
             ((bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>(this), !bVar2 &&
              (cVar1 = (**(code **)(*(long *)this + 0x4d8))(this), cVar1 == '\0')))) &&
            ((cVar1 = (**(code **)(*(long *)this + 0x508))(this), cVar1 == '\0' &&
             (cVar1 = BoardEntity::IsOnScreen((BoardEntity *)this), cVar1 != '\0')))) &&
           ((in_x2 == (RealObject *)0x0 ||
            (cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,in_x2), cVar1 != '\0')))) {
          DVec3::DVec3(aDStack_48);
          local_20 = (float)(**(code **)(*(long *)this + 0x3b0))(0x3ecccccd,this);
          local_1c[0] = fVar8;
          Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_48,(SexyVector3 *)&local_20);
          _OakHitItem::_OakHitItem((_OakHitItem *)&local_20);
          fVar7 = (float)FUN_03fdc150(*(undefined4 *)(this + 0x280));
          local_20 = (float)FUN_03fdc154(*(undefined4 *)(this + 0x2a8));
          local_20 = local_20 + fVar7;
          Sexy::SexyVector3::operator=((SexyVector3 *)local_1c,(SexyVector3 *)aDStack_48);
          local_10 = 0;
          local_c = 0;
          std::
          vector<OakshooterPlantfood::_OakHitItem,std::allocator<OakshooterPlantfood::_OakHitItem>>
          ::push_back((vector<OakshooterPlantfood::_OakHitItem,std::allocator<OakshooterPlantfood::_OakHitItem>>
                       *)(pfVar3 + 8),(_OakHitItem *)&local_20);
        }
        uVar6 = local_38;
        uVar4 = FUN_03fdc158(local_38,local_30);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OakshooterPlantfood::~OakshooterPlantfood() */

void __thiscall OakshooterPlantfood::~OakshooterPlantfood(OakshooterPlantfood *this)

{
  std::vector<OakshooterPlantfood::_OakHitItem,std::allocator<OakshooterPlantfood::_OakHitItem>>::
  ~vector((vector<OakshooterPlantfood::_OakHitItem,std::allocator<OakshooterPlantfood::_OakHitItem>>
           *)(this + 0x20));
  return;
}

