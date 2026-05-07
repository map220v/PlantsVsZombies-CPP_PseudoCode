// Class: PeaRainDropper


/* PeaRainDropper::Start(float, int) */

void __thiscall PeaRainDropper::Start(PeaRainDropper *this,float param_1,int param_2)

{
  undefined4 uVar1;
  
  *(float *)this = (float)param_2 / param_1;
  uVar1 = PVZ_T();
  *(int *)(this + 0xc) = param_2;
  *(undefined4 *)(this + 8) = 0;
  this[0x14] = (PeaRainDropper)0x1;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PeaRainDropper::Update() */

void __thiscall PeaRainDropper::Update(PeaRainDropper *this)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  SexyTransform2D *this_00;
  SexyTransform2D *this_01;
  undefined8 *puVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  string asStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  float local_58;
  float local_54;
  undefined8 local_50;
  float local_48;
  undefined8 local_40;
  undefined4 local_38;
  SexyTransform2D local_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06aaecf0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06aaecf0), iVar1 != 0)) {
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06aaeb88,700.0,700.0,0.0);
    __cxa_guard_release(&DAT_06aaecf0);
  }
  if (((DAT_06aaeea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06aaeea0), iVar1 != 0)) {
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06aaeec0,0.0,0.0,-200.0);
    __cxa_guard_release(&DAT_06aaeea0);
  }
  fVar6 = (float)PVZ_T();
  local_40 = CONCAT44(local_40._4_4_,*(int *)(this + 0xc) - *(int *)(this + 8));
  local_50 = CONCAT44(local_50._4_4_,
                      (int)((fVar6 - *(float *)(this + 4)) * *(float *)this) - *(int *)(this + 8));
  piVar2 = eastl::min_alt<int>((int *)&local_50,(int *)&local_40);
  iVar1 = *piVar2;
  if (iVar1 < 1) {
    this[0x14] = (PeaRainDropper)0x0;
  }
  else {
    iVar5 = 0;
    fVar6 = (float)Sexy::SexyMath::DegToRad(-87.0);
    do {
      iVar5 = iVar5 + 1;
      fVar7 = (float)Sexy::Rand(800.0);
      fVar8 = (float)Sexy::Rand(40.0);
      uVar9 = RandRangeFloat(8.0,98.0);
      std::string::string(asStack_68,"PeaRain");
      nop();
      uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
      Sexy::ToWString(asStack_68);
      Sexy::RtName::RtName((RtName *)&local_40,(wstring *)&local_50);
      PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_60,uVar3,0xc,(RtName *)&local_40);
      Sexy::RtName::~RtName((RtName *)&local_40);
      FUN_05476c50((wstring *)&local_50);
      uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_60);
      this_00 = (SexyTransform2D *)
                Board::AddProjectile
                          ((Board *)(fVar7 + 40.0),-fVar8,uVar9,uVar3,(RtName *)&local_40,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      this_01 = (SexyTransform2D *)Sexy::SexyTransform2D::SexyTransform2D(local_30);
      Sexy::SexyTransform2D::CreateRotation(this_01,fVar6);
      FUN_036f7568(fVar6,this_00 + 0xc4);
      Projectile::ApplyRotationToVelocity(this_00);
      Projectile::SetAcceleration((Projectile *)this_00,(SexyVector3 *)&DAT_06aaeec0);
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this_00);
      local_50 = *puVar4;
      local_48 = *(float *)(puVar4 + 1);
      fVar7 = sinf((float)*(int *)(this + 8) * 10.0);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,0.0,fVar7 * 5.0);
      local_48 = local_48 - fVar7 * 10.0;
      local_50 = CONCAT44(local_54 + local_50._4_4_,local_58 + (float)local_50);
      (**(code **)(*(long *)this_00 + 0x78))(this_00,(wstring *)&local_50);
      Projectile::SetShadow((Projectile *)this_00,false);
      puVar4 = (undefined8 *)Projectile::GetVelocityScale((Projectile *)this_00);
      local_40 = *puVar4;
      local_38 = *(undefined4 *)(puVar4 + 1);
      fVar7 = (float)Sexy::Rand(0.7);
      local_40 = CONCAT44(local_40._4_4_,(fVar7 + 1.0) * (float)local_40);
      Projectile::SetVelocityScale((Projectile *)this_00,(SexyVector3 *)&local_40);
      FUN_036f76ac(this_00 + 0x24);
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      std::string::~string(asStack_68);
    } while (iVar5 != iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

