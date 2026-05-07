// Class: eastl::prime_rehash_policy


/* eastl::prime_rehash_policy::prime_rehash_policy(float) */

void __thiscall
eastl::prime_rehash_policy::prime_rehash_policy(prime_rehash_policy *this,float param_1)

{
  *(float *)this = param_1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0x40000000;
  return;
}


/* eastl::prime_rehash_policy::GetPrevBucketCountOnly(unsigned int) */

uint eastl::prime_rehash_policy::GetPrevBucketCountOnly(uint param_1)

{
  uint *puVar1;
  uint local_4;
  
  local_4 = param_1;
  puVar1 = upper_bound<unsigned_int_const*,unsigned_int>
                     ((uint *)&DAT_0575f7c0,(uint *)&DAT_0575fbc0,&local_4);
  return puVar1[-1];
}


/* eastl::prime_rehash_policy::GetPrevBucketCount(unsigned int) const */

uint __thiscall
eastl::prime_rehash_policy::GetPrevBucketCount(prime_rehash_policy *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint local_4;
  
  local_4 = param_1;
  puVar2 = upper_bound<unsigned_int_const*,unsigned_int>
                     ((uint *)&DAT_0575f7c0,(uint *)&DAT_0575fbc0,&local_4);
  uVar1 = puVar2[-1];
  *(int *)(this + 8) = (int)((float)uVar1 * *(float *)this);
  return uVar1;
}


/* eastl::prime_rehash_policy::GetNextBucketCount(unsigned int) const */

uint __thiscall
eastl::prime_rehash_policy::GetNextBucketCount(prime_rehash_policy *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint local_4;
  
  local_4 = param_1;
  puVar2 = lower_bound<unsigned_int_const*,unsigned_int>
                     ((uint *)&DAT_0575f7c0,(uint *)&DAT_0575fbc0,&local_4);
  uVar1 = *puVar2;
  *(int *)(this + 8) = (int)((float)uVar1 * *(float *)this);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::prime_rehash_policy::GetBucketCount(unsigned int) const */

void __thiscall eastl::prime_rehash_policy::GetBucketCount(prime_rehash_policy *this,uint param_1)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_c = (uint)((float)param_1 / *(float *)this);
  puVar3 = lower_bound<unsigned_int_const*,unsigned_int>
                     ((uint *)&DAT_0575f7c0,(uint *)&DAT_0575fbc0,&local_c);
  uVar1 = *puVar3;
  bVar2 = local_8 == ___stack_chk_guard;
  *(int *)(this + 8) = (int)((float)uVar1 * *(float *)this);
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::prime_rehash_policy::GetRehashRequired(unsigned int, unsigned int, unsigned int) const */

void __thiscall
eastl::prime_rehash_policy::GetRehashRequired
          (prime_rehash_policy *this,uint param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  float *pfVar2;
  uint *puVar3;
  float fVar4;
  bool local_19;
  float local_18;
  uint local_14;
  float local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(uint *)(this + 8) < param_2 + param_3) {
    if (param_1 == 1) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = (float)param_1;
    }
    local_18 = (float)(param_2 + param_3) / *(float *)this;
    if (fVar4 < local_18) {
      local_10 = fVar4 * *(float *)(this + 4);
      pfVar2 = max_alt<float>(&local_18,&local_10);
      local_10 = (float)(int)*pfVar2;
      puVar3 = lower_bound<unsigned_int_const*,unsigned_int>
                         ((uint *)&DAT_0575f7c0,(uint *)&DAT_0575fbc0,(uint *)&local_10);
      local_14 = *puVar3;
      local_19 = true;
      *(int *)(this + 8) = (int)((float)local_14 * *(float *)this);
      pair<bool,unsigned_int>::pair((pair<bool,unsigned_int> *)&local_10,&local_19,&local_14);
      uVar1 = CONCAT44(uStack_c,local_10);
    }
    else {
      local_19 = false;
      local_14 = 0;
      *(int *)(this + 8) = (int)(fVar4 * *(float *)this);
      pair<bool,unsigned_int>::pair((pair<bool,unsigned_int> *)&local_10,&local_19,&local_14);
      uVar1 = CONCAT44(uStack_c,local_10);
    }
  }
  else {
    local_18 = (float)((uint)local_18 & 0xffffff00);
    local_14 = 0;
    pair<bool,unsigned_int>::pair((pair<bool,unsigned_int> *)&local_10,(bool *)&local_18,&local_14);
    uVar1 = CONCAT44(uStack_c,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

