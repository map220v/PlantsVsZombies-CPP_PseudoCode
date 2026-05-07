// Class: RainDropper


/* RainDropper::RainDropper() */

void __thiscall RainDropper::RainDropper(RainDropper *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x14] = (RainDropper)0x0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


/* RainDropper::SetSnow(bool) */

void __thiscall RainDropper::SetSnow(RainDropper *this,bool param_1)

{
  this[0x14] = (RainDropper)param_1;
  return;
}


/* RainDropper::Start(float, int) */

void __thiscall RainDropper::Start(RainDropper *this,float param_1,int param_2)

{
  undefined4 uVar1;
  
  *(float *)this = (float)param_2 / param_1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_2;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RainDropper::Update() */

void __thiscall RainDropper::Update(RainDropper *this)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar4;
  RtName *__n;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  string asStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  float local_30;
  float local_2c;
  undefined8 local_28;
  float local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06b0c488 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b0c488), iVar1 != 0)) {
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06b0c460,50.0,700.0,0.0);
    __cxa_guard_release(&DAT_06b0c488);
  }
  if (((DAT_06b0c408 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b0c408), iVar1 != 0)) {
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06b0c418,5.0,20.0,-400.0);
    __cxa_guard_release(&DAT_06b0c408);
  }
  fVar6 = (float)PVZ_T();
  local_18 = CONCAT44(local_18._4_4_,*(int *)(this + 0xc) - *(int *)(this + 8));
  local_28 = CONCAT44(local_28._4_4_,
                      (int)((fVar6 - *(float *)(this + 4)) * *(float *)this) - *(int *)(this + 8));
  piVar2 = eastl::min_alt<int>((int *)&local_28,(int *)&local_18);
  iVar1 = *piVar2;
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      fVar6 = (float)Sexy::Rand(800.0);
      fVar7 = (float)Sexy::Rand(40.0);
      uVar8 = RandRangeFloat(8.0,98.0);
      __n = (RtName *)&local_18;
      std::string::string(asStack_40,"DarkRain");
      nop();
      if (this[0x14] != (RainDropper)0x0) {
        std::string::append(asStack_40,"DarkSnow",(size_t)__n);
      }
      uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
      Sexy::ToWString(asStack_40);
      Sexy::RtName::RtName((RtName *)&local_18,(wstring *)&local_28);
      PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_38,uVar3,0xc,(RtName *)&local_18);
      Sexy::RtName::~RtName((RtName *)&local_18);
      FUN_05476c50((wstring *)&local_28);
      uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_38);
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Board::AddProjectile
                             ((Board *)(fVar6 + 40.0),-fVar7,uVar8,uVar3,(RtName *)&local_18,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      if (this[0x14] == (RainDropper)0x0) {
        Projectile::SetVelocity((Projectile *)this_00,(SexyVector3 *)&DAT_06b0c460);
        Projectile::SetAcceleration((Projectile *)this_00,(SexyVector3 *)&DAT_06b0c418);
      }
      iVar5 = iVar5 + 1;
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_00);
      local_28 = *puVar4;
      local_20 = *(float *)(puVar4 + 1);
      fVar6 = sinf((float)*(int *)(this + 8) * 10.0);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,0.0,fVar6 * 5.0);
      local_20 = local_20 - fVar6 * 10.0;
      local_28 = CONCAT44(local_2c + local_28._4_4_,local_30 + (float)local_28);
      (**(code **)(*(long *)this_00 + 0x78))(this_00,(wstring *)&local_28);
      FUN_044a59a0(*(undefined4 *)(this + 0x10),this_00 + 0xc4);
      Projectile::SetShadow((Projectile *)this_00,false);
      puVar4 = (undefined8 *)Projectile::GetVelocityScale((Projectile *)this_00);
      local_18 = *puVar4;
      local_10 = *(undefined4 *)(puVar4 + 1);
      fVar6 = (float)Sexy::Rand(0.7);
      local_18 = CONCAT44(local_18._4_4_,(fVar6 + 1.0) * (float)local_18);
      Projectile::SetVelocityScale((Projectile *)this_00,(SexyVector3 *)&local_18);
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      std::string::~string(asStack_40);
    } while (iVar5 != iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

