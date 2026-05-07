// Class: ProjectileHelpers


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectileHelpers::RandomizeVectorFromRange(std::vector<ValueRange, std::allocator<ValueRange> >
   const&) */

void ProjectileHelpers::RandomizeVectorFromRange(vector *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ValueRange *pVVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pVVar4 = (ValueRange *)FUN_0434ae10(*(undefined8 *)param_1,0);
  fVar5 = (float)ValueRange::GetRandomValue(pVVar4);
  pVVar4 = (ValueRange *)FUN_0434ae10(*(undefined8 *)param_1,1);
  fVar6 = (float)ValueRange::GetRandomValue(pVVar4);
  pVVar4 = (ValueRange *)FUN_0434ae10(*(undefined8 *)param_1,2);
  fVar7 = (float)ValueRange::GetRandomValue(pVVar4);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,fVar5,fVar6,fVar7);
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* ProjectileHelpers::CheckForCritical(Sexy::TRect<int> const&, Sexy::TRect<int> const&, float
   const&) */

bool ProjectileHelpers::CheckForCritical(TRect *param_1,TRect *param_2,float *param_3)

{
  return *(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) / 2 <=
         (int)((float)*(int *)(param_2 + 4) + (float)*(int *)(param_2 + 0xc) * *param_3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectileHelpers::RandomizeVelocities(Projectile*) */

void ProjectileHelpers::RandomizeVelocities(Projectile *param_1)

{
  long lVar1;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Projectile::GetProps(param_1);
  local_18[0] = RandomizeVectorFromRange((vector *)(lVar1 + 0x78));
  Projectile::SetVelocity(param_1,(SexyVector3 *)local_18);
  local_18[0] = RandomizeVectorFromRange((vector *)(lVar1 + 0x90));
  Projectile::SetAcceleration(param_1,(SexyVector3 *)local_18);
  local_18[0] = RandomizeVectorFromRange((vector *)(lVar1 + 0xa8));
  Projectile::SetVelocityScale(param_1,(SexyVector3 *)local_18);
  ValueRange::GetRandomValue((ValueRange *)(lVar1 + 200));
  FUN_0434add4(param_1 + 200);
  ValueRange::GetRandomValue((ValueRange *)(lVar1 + 200));
  FUN_0434adb0(param_1 + 0xc4);
  ValueRange::GetRandomValue((ValueRange *)(lVar1 + 0xd0));
  FUN_0434adb8(param_1 + 0xcc);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectileHelpers::Integrate(Projectile*, float) */

void ProjectileHelpers::Integrate(Projectile *param_1,float param_2)

{
  char cVar1;
  undefined8 *puVar2;
  SexyVector3 *pSVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78 [4];
  undefined4 local_68 [4];
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_a8 = *puVar2;
  local_a0 = *(undefined4 *)(puVar2 + 1);
  puVar2 = (undefined8 *)Projectile::GetVelocity(param_1);
  local_98 = *puVar2;
  local_90 = *(undefined4 *)(puVar2 + 1);
  puVar2 = (undefined8 *)AssetsManagerManifest::getAssets((AssetsManagerManifest *)param_1);
  local_88 = *puVar2;
  local_80 = *(undefined4 *)(puVar2 + 1);
  cVar1 = Projectile::IsSkipAdditionalAngularVelocity(param_1);
  pcVar4 = *(code **)(*(long *)param_1 + 0x78);
  pSVar3 = (SexyVector3 *)Projectile::GetVelocityScale(param_1);
  local_78[0] = Sexy::SexyVector3::operator*((SexyVector3 *)&local_98,pSVar3);
  local_68[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_78,param_2);
  local_58[0] = Sexy::SexyVector3::operator+((SexyVector3 *)&local_a8,(SexyVector3 *)local_68);
  local_48[0] = Sexy::SexyVector3::operator*((SexyVector3 *)&local_88,param_2);
  local_38[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_48,param_2);
  local_28[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_38,0.5);
  local_18[0] = Sexy::SexyVector3::operator+((SexyVector3 *)local_58,(SexyVector3 *)local_28);
  (*pcVar4)(param_1,(SexyVector3 *)local_18);
  local_28[0] = Sexy::SexyVector3::operator*((SexyVector3 *)&local_88,param_2);
  local_18[0] = Sexy::SexyVector3::operator+((SexyVector3 *)&local_98,(SexyVector3 *)local_28);
  Projectile::SetVelocity(param_1,(SexyVector3 *)local_18);
  if (cVar1 == '\0') {
    fVar5 = (float)FUN_0434ada8(*(undefined4 *)(param_1 + 0xc4));
    fVar6 = (float)FUN_0434adac(*(undefined4 *)(param_1 + 0xcc));
    FUN_0434adb0(fVar5 + param_2 * fVar6,param_1 + 0xc4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectileHelpers::CheckForCollisions(Projectile*) */

void ProjectileHelpers::CheckForCollisions(Projectile *param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  Projectile PVar4;
  int iVar5;
  RtObject *pRVar6;
  undefined8 *puVar7;
  float *pfVar8;
  Zombie *this;
  Insets *pIVar9;
  long lVar10;
  RtObject *this_00;
  float fVar11;
  float fVar12;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  int local_40 [2];
  int local_38;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [4];
  float local_2c;
  float local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = GameObject::IsDestroyed((GameObject *)param_1);
  if (cVar2 != '\0') goto LAB_0434d750;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Projectile::CalcSweptCollisionRectBoardSpace();
  (**(code **)(*(long *)param_1 + 0x188))(param_1,avStack_20,(TRect *)local_40);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  pRVar6 = (RtObject *)(**(code **)(*(long *)param_1 + 0x1a0))(param_1);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar3) {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    this_00 = (RtObject *)*puVar7;
    if (((pRVar6 == this_00) || (pRVar6 == (RtObject *)0x0)) &&
       ((cVar2 = (**(code **)(*(long *)param_1 + 0x1a8))(param_1,this_00), cVar2 != '\0' ||
        (((cVar2 = FUN_0434ace4(this_00[0x80]), cVar2 == '\0' &&
          (cVar2 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,uVar1), cVar2 != '\0')) &&
         (cVar2 = (**(code **)(*(long *)this_00 + 0x168))(this_00,param_1), cVar2 == '\0')))))) {
      cVar2 = Projectile::IsHeadShot(param_1);
      if ((cVar2 != '\0') && (this = Sexy::RtObject::Cast<Zombie>(this_00), this != (Zombie *)0x0))
      {
        pIVar9 = (Insets *)(**(code **)(*(long *)this + 0x178))();
        Sexy::Insets::Insets((Insets *)aRStack_30,pIVar9);
        local_48[0] = Zombie::GetCriticalPos(this);
        PVar4 = (Projectile)
                CheckForCritical((TRect *)local_40,(TRect *)aRStack_30,(float *)local_48);
        param_1[0x34] = PVar4;
        if (PVar4 != (Projectile)0x0) {
          if (*(code **)(*(long *)param_1 + 0x128) != Projectile::OnHeadShot) {
            (**(code **)(*(long *)param_1 + 0x128))(param_1,this_00);
          }
          Projectile::CreateCriticalEffect(param_1);
        }
      }
      iVar5 = FUN_0434adc0(*(undefined4 *)(param_1 + 0x4c));
      if (iVar5 < 1) {
        cVar2 = (**(code **)(*(long *)param_1 + 0x110))(param_1,this_00);
        if (cVar2 != '\0') goto LAB_0434d9a4;
      }
      else {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)local_48);
        cVar2 = BoardEntity::HasBeHitted((BoardEntity *)this_00,aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
        if (cVar2 == '\0') {
          (**(code **)(*(long *)param_1 + 0x110))(param_1,this_00);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)local_48);
          BoardEntity::SetHitted((BoardEntity *)this_00,aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48)
          ;
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  pfVar8 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  cVar2 = (**(code **)(*(long *)param_1 + 0xb8))(param_1,0x100);
  if (cVar2 == '\0') {
LAB_0434d96c:
    if ((((1000 < local_40[0]) || (local_40[0] + local_38 < -200)) || (pfVar8[1] < -200.0)) ||
       (800.0 < pfVar8[1])) {
      if (*(code **)(*(long *)param_1 + 0x138) == Projectile::ignoreDeathBox) {
        cVar2 = Projectile::ignoreDeathBox();
      }
      else {
        cVar2 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
      }
      if (cVar2 == '\0') {
        (**(code **)(*(long *)param_1 + 0x48))(param_1);
      }
    }
  }
  else {
    Projectile::GetCollisionRect();
    fVar12 = pfVar8[2];
    fVar11 = 0.0;
    if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
      fVar11 = (float)Board::calculateRoofOffsetZ(*pfVar8);
    }
    if (((fVar11 < fVar12 - (local_2c + local_24)) ||
        (lVar10 = Projectile::GetVelocity(param_1), 0.0 <= *(float *)(lVar10 + 8))) ||
       (cVar2 = (**(code **)(*(long *)param_1 + 0x118))(param_1), cVar2 == '\0')) goto LAB_0434d96c;
  }
LAB_0434d9a4:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
LAB_0434d750:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

