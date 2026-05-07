// Class: FileWrapper


/* FileWrapper::~FileWrapper() */

void __thiscall FileWrapper::~FileWrapper(FileWrapper *this)

{
  *(undefined ***)this = &PTR__FileWrapper_06a30370;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  if (*(ColourFit **)(this + 0x20) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x20));
    return;
  }
  return;
}


/* FileWrapper::~FileWrapper() */

void __thiscall FileWrapper::~FileWrapper(FileWrapper *this)

{
  ~FileWrapper(this);
  AK::FreeHook(this);
  return;
}


/* FileWrapper::FileWrapper(Sexy::SexyAppBase*, std::string, unsigned int) */

void __thiscall
FileWrapper::FileWrapper(FileWrapper *this,long param_1,undefined8 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uchar *puVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
  lVar5 = *plVar4;
  *(undefined ***)this = &PTR__FileWrapper_06a30370;
  uVar2 = (**(code **)(lVar5 + 0xa8))(plVar4,param_3);
  plVar4 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(this + 8) = uVar2;
  uVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4,param_3);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = uVar2;
  uVar1 = Sexy::GetAlignUp<unsigned_int>(param_4,0x800);
  puVar3 = operator_new__((ulong)(uVar1 + 8));
  *(uchar **)(this + 0x20) = puVar3;
  puVar3 = Sexy::GetAlignUp64<unsigned_char*>(puVar3);
  *(ulong *)(this + 0x30) = (ulong)uVar1;
  *(uchar **)(this + 0x28) = puVar3;
  *(undefined8 *)(this + 0x38) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FileWrapper::Read(unsigned char*, unsigned long) */

void __thiscall FileWrapper::Read(FileWrapper *this,uchar *param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  size_t sVar6;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 8) == 0) || ((*(ulong *)(this + 0x10) & 0x7ff) != 0)) {
LAB_051a7048:
    uVar3 = 0xffffffff;
  }
  else {
    if (param_2 != 0) {
      sVar6 = *(size_t *)(this + 0x38);
      uVar3 = param_2;
      do {
        if (uVar3 <= sVar6) {
          memcpy(param_1,*(void **)(this + 0x28),uVar3);
          sVar6 = *(long *)(this + 0x38) - uVar3;
          *(size_t *)(this + 0x38) = sVar6;
          if (sVar6 != 0) {
            memcpy(*(void **)(this + 0x28),(void *)((long)*(void **)(this + 0x28) + uVar3),sVar6);
            uVar3 = param_2 & 0xffffffff;
            goto LAB_051a704c;
          }
          break;
        }
        if (sVar6 != 0) {
          memcpy(param_1,*(void **)(this + 0x28),sVar6);
          lVar5 = *(long *)(this + 0x38);
          *(undefined8 *)(this + 0x38) = 0;
          uVar3 = uVar3 - lVar5;
          param_1 = param_1 + lVar5;
        }
        local_10 = *(long *)(this + 0x10) - *(long *)(this + 0x18);
        puVar4 = eastl::min_alt<unsigned_long>((ulong *)(this + 0x30),&local_10);
        sVar6 = *puVar4;
        cVar1 = (**(code **)(**(long **)(this + 8) + 0x50))
                          (*(long **)(this + 8),*(undefined8 *)(this + 0x28),sVar6);
        if (cVar1 == '\0') goto LAB_051a7048;
        do {
          iVar2 = (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
        } while (iVar2 == 1);
        iVar2 = (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
        if (iVar2 == 2) goto LAB_051a7048;
        *(size_t *)(this + 0x38) = sVar6;
        *(size_t *)(this + 0x18) = *(long *)(this + 0x18) + sVar6;
      } while (uVar3 != 0);
    }
    uVar3 = param_2 & 0xffffffff;
  }
LAB_051a704c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

