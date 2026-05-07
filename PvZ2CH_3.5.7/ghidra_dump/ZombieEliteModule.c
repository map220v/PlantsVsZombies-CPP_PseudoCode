// Class: ZombieEliteModule


/* ZombieEliteModule::SetMaxHealth(float) */

void __thiscall ZombieEliteModule::SetMaxHealth(ZombieEliteModule *this,float param_1)

{
  *(float *)(this + 0xc) = param_1;
  return;
}


/* ZombieEliteModule::SetCurrentHealth(float) */

void __thiscall ZombieEliteModule::SetCurrentHealth(ZombieEliteModule *this,float param_1)

{
  *(float *)(this + 8) = param_1;
  return;
}


/* ZombieEliteModule::SetHealthImage(Sexy::Image*, Sexy::Image*) */

void __thiscall
ZombieEliteModule::SetHealthImage(ZombieEliteModule *this,Image *param_1,Image *param_2)

{
  *(Image **)(this + 0x18) = param_2;
  *(Image **)(this + 0x20) = param_1;
  return;
}


/* ZombieEliteModule::SetPosition(Sexy::SexyVector3) */

void ZombieEliteModule::SetPosition
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x28),(SexyVector3 *)&local_10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteModule::Render(Sexy::Graphics*) */

void __thiscall ZombieEliteModule::Render(ZombieEliteModule *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_20 [2];
  float local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x34] != (ZombieEliteModule)0x0) {
    fVar5 = (float)FUN_04c66580(0x40200000);
    fVar6 = (float)FUN_04c66580(0x40000000);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x18));
    iVar2 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x18));
    local_18[0] = *(float *)(this + 8) / *(float *)(this + 0xc);
    local_20[0] = 0;
    fVar9 = (float)iVar1 - fVar5 * 2.0;
    iVar4 = (int)((float)iVar2 - fVar6 * 2.0);
    pfVar3 = eastl::max_alt<float>((float *)local_20,local_18);
    local_18[0] = fVar9 * *pfVar3;
    local_20[0] = 0;
    pfVar3 = eastl::max_alt<float>((float *)local_20,local_18);
    fVar10 = *pfVar3;
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)local_20,param_1);
    fVar7 = (float)FUN_04c6655c(*(float *)(this + 0x28) - 55.0);
    fVar8 = (float)FUN_04c6655c(*(float *)(this + 0x2c) + 15.0);
    Sexy::Insets::Insets((Insets *)local_18,(int)fVar7,(int)fVar8,(int)(float)iVar1,iVar2);
    Draw3SliceImage(param_1,(Insets *)local_18,*(undefined8 *)(this + 0x18));
    fVar7 = (float)FUN_04c6655c(*(float *)(this + 0x28) - 55.0);
    fVar8 = (float)FUN_04c6655c(*(float *)(this + 0x2c) + 15.0);
    Sexy::Graphics::ClipRect(param_1,(int)(fVar7 + fVar5),(int)(fVar8 + fVar6),(int)fVar10,iVar4);
    fVar7 = (float)FUN_04c6655c(*(float *)(this + 0x28) - 55.0);
    fVar8 = (float)FUN_04c6655c(*(float *)(this + 0x2c) + 15.0);
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x20),(int)(fVar7 + fVar5),(int)(fVar8 + fVar6),(int)fVar9
               ,iVar4);
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteModule::SpawnZombieEffect(Sexy::SexyVector3) */

void ZombieEliteModule::SpawnZombieEffect(float param_1,float param_2,float param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Effect_PopAnim *this;
  RtWeakPtr aRStack_28 [8];
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"POPANIM_EFFECTS_ELITE_ZOMBIE_SPAWN");
  iVar3 = FUN_04c6656c();
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,param_1,param_2 - (float)iVar3,param_3);
  PopAnimEffectFactory::CreateEffect(aRStack_28,local_18,local_14,local_10,asStack_20,0x64960,0,1);
  std::string::~string(asStack_20);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28), cVar2 != '\0')) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    nop();
    Effect_PopAnim::SetCentered(this,true);
    std::string::string((string *)&local_18,"idle");
    Effect_PopAnim::PlaySingleAnimation(this,(Vec3 *)&local_18,0);
    std::string::~string((string *)&local_18);
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEliteModule::ZombieEliteModule() */

void __thiscall ZombieEliteModule::ZombieEliteModule(ZombieEliteModule *this)

{
  undefined8 uVar1;
  
  EliteModuleBase::EliteModuleBase((EliteModuleBase *)this);
  *(undefined ***)this = &PTR_nop_06991340;
  DVec3::DVec3((DVec3 *)(this + 0x28));
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0x42c80000;
  *(undefined4 *)(this + 8) = 0;
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93c68);
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93d18);
  *(undefined8 *)(this + 0x20) = uVar1;
  this[0x34] = (ZombieEliteModule)0x1;
  return;
}

