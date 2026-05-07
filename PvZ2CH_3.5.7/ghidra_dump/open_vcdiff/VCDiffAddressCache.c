// Class: open_vcdiff::VCDiffAddressCache


/* open_vcdiff::VCDiffAddressCache::FirstNearMode() */

undefined8 open_vcdiff::VCDiffAddressCache::FirstNearMode(void)

{
  return 2;
}


/* open_vcdiff::VCDiffAddressCache::~VCDiffAddressCache() */

void __thiscall open_vcdiff::VCDiffAddressCache::~VCDiffAddressCache(VCDiffAddressCache *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x28));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x10));
  return;
}


/* open_vcdiff::VCDiffAddressCache::DefaultLastMode() */

undefined8 open_vcdiff::VCDiffAddressCache::DefaultLastMode(void)

{
  return 8;
}


/* open_vcdiff::VCDiffAddressCache::FirstSameMode() const */

int __thiscall open_vcdiff::VCDiffAddressCache::FirstSameMode(VCDiffAddressCache *this)

{
  int iVar1;
  
  iVar1 = FUN_05334c80(*(undefined4 *)this);
  return iVar1 + 2;
}


/* open_vcdiff::VCDiffAddressCache::LastMode() const */

int __thiscall open_vcdiff::VCDiffAddressCache::LastMode(VCDiffAddressCache *this)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FirstSameMode(this);
  iVar2 = FUN_05334c84(*(undefined4 *)(this + 4));
  return ((uVar1 & 0xff) - 1) + iVar2;
}


/* open_vcdiff::VCDiffAddressCache::IsSelfMode(unsigned char) */

bool open_vcdiff::VCDiffAddressCache::IsSelfMode(uchar param_1)

{
  return param_1 == '\0';
}


/* open_vcdiff::VCDiffAddressCache::IsHereMode(unsigned char) */

bool open_vcdiff::VCDiffAddressCache::IsHereMode(uchar param_1)

{
  return param_1 == '\x01';
}


/* open_vcdiff::VCDiffAddressCache::IsNearMode(unsigned char) const */

bool __thiscall open_vcdiff::VCDiffAddressCache::IsNearMode(VCDiffAddressCache *this,uchar param_1)

{
  bool bVar1;
  byte bVar2;
  
  bVar2 = FirstNearMode();
  bVar1 = false;
  if (bVar2 <= param_1) {
    bVar2 = FirstSameMode(this);
    bVar1 = param_1 < bVar2;
  }
  return bVar1;
}


/* open_vcdiff::VCDiffAddressCache::IsSameMode(unsigned char) const */

bool __thiscall open_vcdiff::VCDiffAddressCache::IsSameMode(VCDiffAddressCache *this,uchar param_1)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = FirstSameMode(this);
  bVar2 = false;
  if (bVar1 <= param_1) {
    bVar1 = LastMode(this);
    bVar2 = param_1 <= bVar1;
  }
  return bVar2;
}


/* open_vcdiff::VCDiffAddressCache::DecodeHereAddress(int, int) */

int open_vcdiff::VCDiffAddressCache::DecodeHereAddress(int param_1,int param_2)

{
  return param_2 - param_1;
}


/* open_vcdiff::VCDiffAddressCache::NearAddress(int) const */

undefined4 __thiscall
open_vcdiff::VCDiffAddressCache::NearAddress(VCDiffAddressCache *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_053f1adc(*(undefined8 *)(this + 0x10),(long)param_1);
  return *puVar1;
}


/* open_vcdiff::VCDiffAddressCache::DecodeNearAddress(unsigned char, int) const */

int __thiscall
open_vcdiff::VCDiffAddressCache::DecodeNearAddress
          (VCDiffAddressCache *this,uchar param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FirstNearMode();
  iVar2 = NearAddress(this,(uint)param_1 - (uVar1 & 0xff));
  return iVar2 + param_2;
}


/* open_vcdiff::VCDiffAddressCache::SameAddress(int) const */

undefined4 __thiscall
open_vcdiff::VCDiffAddressCache::SameAddress(VCDiffAddressCache *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_053f1adc(*(undefined8 *)(this + 0x28),(long)param_1);
  return *puVar1;
}


/* open_vcdiff::VCDiffAddressCache::DecodeSameAddress(unsigned char, unsigned char) const */

void __thiscall
open_vcdiff::VCDiffAddressCache::DecodeSameAddress
          (VCDiffAddressCache *this,uchar param_1,uchar param_2)

{
  uint uVar1;
  
  uVar1 = FirstSameMode(this);
  SameAddress(this,(uint)param_2 + ((uint)param_1 - (uVar1 & 0xff)) * 0x100);
  return;
}


/* open_vcdiff::VCDiffAddressCache::UpdateCache(int) */

void __thiscall open_vcdiff::VCDiffAddressCache::UpdateCache(VCDiffAddressCache *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (0 < *(int *)this) {
    piVar3 = (int *)FUN_053f1ae4(*(undefined8 *)(this + 0x10),(long)*(int *)(this + 8));
    *piVar3 = param_1;
    iVar1 = *(int *)this;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = (*(int *)(this + 8) + 1) / iVar1;
    }
    *(int *)(this + 8) = (*(int *)(this + 8) + 1) - iVar2 * iVar1;
  }
  if (0 < *(int *)(this + 4)) {
    iVar1 = *(int *)(this + 4) * 0x100;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = param_1 / iVar1;
    }
    piVar3 = (int *)FUN_053f1ae4(*(undefined8 *)(this + 0x28),(long)(param_1 - iVar2 * iVar1));
    *piVar3 = param_1;
  }
  return;
}


/* open_vcdiff::VCDiffAddressCache::EncodeAddress(int, int, int*) */

char __thiscall
open_vcdiff::VCDiffAddressCache::EncodeAddress
          (VCDiffAddressCache *this,int param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (param_1 < 0) {
    uVar6 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar6 = FUN_054603b8(uVar6,"EncodeAddress was passed a negative address: ");
    uVar6 = FUN_0546065c(uVar6,param_1);
  }
  else {
    if (param_1 < param_2) {
      iVar2 = FUN_053f1ad8(*(undefined4 *)(this + 4));
      if (0 < iVar2) {
        iVar2 = iVar2 * 0x100;
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = param_1 / iVar2;
        }
        iVar2 = param_1 - iVar3 * iVar2;
        iVar3 = SameAddress(this,iVar2);
        if (param_1 == iVar3) {
          UpdateCache(this,param_1);
          *param_3 = iVar2 % 0x100;
          cVar1 = FirstSameMode(this);
          iVar3 = iVar2 + 0xff;
          if (-1 < iVar2) {
            iVar3 = iVar2;
          }
          return (char)((uint)iVar3 >> 8) + cVar1;
        }
      }
      iVar2 = param_2 - param_1;
      iVar3 = iVar2;
      if (param_1 <= iVar2) {
        iVar3 = param_1;
      }
      cVar1 = iVar2 < param_1;
      iVar2 = 0;
      iVar4 = FUN_053f1ad4(*(undefined4 *)this);
      if (0 < iVar4) {
        do {
          iVar5 = NearAddress(this,iVar2);
          iVar5 = param_1 - iVar5;
          if ((iVar5 < iVar3) && (-1 < iVar5)) {
            cVar1 = FirstNearMode();
            cVar1 = (char)iVar2 + cVar1;
            iVar3 = iVar5;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar4);
      }
      UpdateCache(this,param_1);
      *param_3 = iVar3;
      return cVar1;
    }
    uVar6 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar6 = FUN_054603b8(uVar6,"EncodeAddress was called with address (");
    uVar6 = FUN_0546065c(uVar6,param_1);
    uVar6 = FUN_054603b8(uVar6,") < here_address (");
    uVar6 = FUN_0546065c(uVar6,param_2);
    uVar6 = FUN_054603b8(uVar6,&DAT_056e31d0);
  }
  FUN_0545f9e8(uVar6,FUN_0545fdc8);
  CheckFatalError();
  *param_3 = 0;
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VCDiffAddressCache::DecodeAddress(int, unsigned char, char const**, char const*) */

void __thiscall
open_vcdiff::VCDiffAddressCache::DecodeAddress
          (VCDiffAddressCache *this,int param_1,uchar param_2,char **param_3,char *param_4)

{
  char cVar1;
  uchar uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong extraout_x0;
  undefined8 uVar6;
  char *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 < 0) {
    uVar6 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar6 = FUN_054603b8(uVar6,"DecodeAddress was passed a negative value for here_address: ");
LAB_053f2154:
    uVar6 = FUN_0546065c(uVar6,param_1);
    FUN_0545f9e8(uVar6,FUN_0545fdc8);
    CheckFatalError();
    uVar5 = 0xffffffff;
  }
  else {
    local_10 = *param_3;
    if (param_4 <= local_10) {
      uVar5 = 0xfffffffe;
      goto LAB_053f2030;
    }
    cVar1 = IsSameMode(this,param_2);
    if (cVar1 == '\0') {
      uVar5 = VarintBE<int>::Parse(param_4,&local_10);
      iVar3 = (int)uVar5;
      if (iVar3 == -2) goto LAB_053f2030;
      if (iVar3 == -1) {
        uVar6 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
        uVar6 = FUN_054603b8(uVar6,"Found invalid variable-length integer as encoded address value")
        ;
        FUN_0545f9e8(uVar6,FUN_0545fdc8);
        CheckFatalError();
        uVar5 = uVar5 & 0xffffffff;
        goto LAB_053f2030;
      }
      cVar1 = IsSelfMode(param_2);
      if (cVar1 == '\0') {
        cVar1 = IsHereMode(param_2);
        if (cVar1 == '\0') {
          cVar1 = IsNearMode(this,param_2);
          if (cVar1 == '\0') {
            uVar6 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
            uVar6 = FUN_054603b8(uVar6,"Invalid mode value (");
            uVar6 = FUN_0546065c(uVar6,param_2);
            uVar6 = FUN_054603b8(uVar6,") passed to DecodeAddress; maximum mode value = ");
            uVar4 = LastMode(this);
            param_1 = uVar4 & 0xff;
            goto LAB_053f2154;
          }
          uVar5 = DecodeNearAddress(this,param_2,iVar3);
          uVar5 = uVar5 & 0xffffffff;
        }
        else {
          uVar5 = DecodeHereAddress(iVar3,param_1);
          uVar5 = uVar5 & 0xffffffff;
        }
      }
      else {
        nop();
        uVar5 = extraout_x0 & 0xffffffff;
      }
    }
    else {
      uVar2 = FUN_053f1ac0(&local_10);
      uVar5 = DecodeSameAddress(this,param_2,uVar2);
      uVar5 = uVar5 & 0xffffffff;
    }
    cVar1 = FUN_053f1c54(uVar5,param_1);
    if (cVar1 == '\0') {
      uVar5 = 0xffffffff;
    }
    else {
      *param_3 = local_10;
      UpdateCache(this,(int)uVar5);
    }
  }
LAB_053f2030:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* open_vcdiff::VCDiffAddressCache::VCDiffAddressCache(int, int) */

void __thiscall
open_vcdiff::VCDiffAddressCache::VCDiffAddressCache
          (VCDiffAddressCache *this,int param_1,int param_2)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(undefined4 *)(this + 8) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* open_vcdiff::VCDiffAddressCache::VCDiffAddressCache() */

void __thiscall open_vcdiff::VCDiffAddressCache::VCDiffAddressCache(VCDiffAddressCache *this)

{
  *(undefined4 *)this = 4;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 3;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VCDiffAddressCache::Init() */

void __thiscall open_vcdiff::VCDiffAddressCache::Init(VCDiffAddressCache *this)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  char *pcVar5;
  int local_c;
  long local_8;
  
  uVar1 = *(uint *)this;
  local_8 = ___stack_chk_guard;
  if (uVar1 < 0xff) {
    uVar4 = *(uint *)(this + 4);
    if (0xfe < uVar4) {
      uVar3 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      uVar3 = FUN_054603b8(uVar3,"Same cache size ");
      uVar2 = *(undefined4 *)(this + 4);
      goto LAB_053f2300;
    }
    if ((int)(uVar1 + uVar4) < 0xff) {
      if (uVar1 != 0) {
        local_c = 0;
        std::vector<int,std::allocator<int>>::assign
                  ((vector<int,std::allocator<int>> *)(this + 0x10),(long)(int)uVar1,&local_c);
        uVar4 = *(uint *)(this + 4);
      }
      if (0 < (int)uVar4) {
        local_c = 0;
        std::vector<int,std::allocator<int>>::assign
                  ((vector<int,std::allocator<int>> *)(this + 0x28),(long)(int)(uVar4 << 8),&local_c
                  );
      }
      *(undefined4 *)(this + 8) = 0;
      uVar3 = 1;
      goto LAB_053f22bc;
    }
    uVar3 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar3 = FUN_054603b8(uVar3,"Using near cache size ");
    uVar3 = FUN_0546065c(uVar3,*(undefined4 *)this);
    uVar3 = FUN_054603b8(uVar3," and same cache size ");
    uVar3 = FUN_0546065c(uVar3,*(undefined4 *)(this + 4));
    uVar3 = FUN_054603b8(uVar3," would exceed maximum number of COPY modes (");
    uVar3 = FUN_0546065c(uVar3,0x100);
    pcVar5 = ")";
  }
  else {
    uVar3 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar3 = FUN_054603b8(uVar3,"Near cache size ");
    uVar2 = *(undefined4 *)this;
LAB_053f2300:
    uVar3 = FUN_0546065c(uVar3,uVar2);
    pcVar5 = " is invalid";
  }
  uVar3 = FUN_054603b8(uVar3,pcVar5);
  FUN_0545f9e8(uVar3,FUN_0545fdc8);
  CheckFatalError();
  uVar3 = 0;
LAB_053f22bc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* open_vcdiff::VCDiffAddressCache::WriteAddressAsVarintForMode(unsigned char) const */

byte __thiscall
open_vcdiff::VCDiffAddressCache::WriteAddressAsVarintForMode(VCDiffAddressCache *this,uchar param_1)

{
  byte bVar1;
  
  bVar1 = IsSameMode(this,param_1);
  return bVar1 ^ 1;
}

