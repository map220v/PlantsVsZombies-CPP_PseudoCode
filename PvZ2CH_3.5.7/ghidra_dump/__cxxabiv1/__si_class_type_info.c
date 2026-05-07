// Class: __cxxabiv1::__si_class_type_info


/* __cxxabiv1::__si_class_type_info::~__si_class_type_info() */

void __thiscall __cxxabiv1::__si_class_type_info::~__si_class_type_info(__si_class_type_info *this)

{
  *(undefined ***)this = &PTR____si_class_type_info_06a39710;
  __class_type_info::~__class_type_info((__class_type_info *)this);
  return;
}


/* __cxxabiv1::__si_class_type_info::~__si_class_type_info() */

void __thiscall __cxxabiv1::__si_class_type_info::~__si_class_type_info(__si_class_type_info *this)

{
  ~__si_class_type_info(this);
  AK::FreeHook(this);
  return;
}


/* __cxxabiv1::__si_class_type_info::__do_dyncast(long, __cxxabiv1::__class_type_info::__sub_kind,
   __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
   const*, __cxxabiv1::__class_type_info::__dyncast_result&) const */

undefined1 __thiscall
__cxxabiv1::__si_class_type_info::__do_dyncast
          (__si_class_type_info *this,long param_1,undefined8 param_3,long param_4,long param_5,
          long param_6,long param_7,long *param_8)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (__s1 == *(char **)(param_4 + 8)) {
LAB_05479c7c:
    *param_8 = param_5;
    *(int *)(param_8 + 1) = (int)param_3;
    if (-1 < param_1) {
      uVar4 = 6;
      if (param_7 != param_5 + param_1) {
        uVar4 = 1;
      }
      *(undefined4 *)(param_8 + 2) = uVar4;
      return 0;
    }
    uVar2 = 0;
    if (param_1 == -2) {
      *(undefined4 *)(param_8 + 2) = 1;
    }
  }
  else {
    cVar1 = *__s1;
    if (cVar1 != '*') {
      iVar3 = strcmp(__s1,*(char **)(param_4 + 8));
      if (iVar3 == 0) goto LAB_05479c7c;
    }
    if (param_5 == param_7) {
      if (__s1 == *(char **)(param_6 + 8)) {
LAB_05479d18:
        *(int *)((long)param_8 + 0xc) = (int)param_3;
        return 0;
      }
      if (cVar1 != '*') {
        iVar3 = strcmp(__s1,*(char **)(param_6 + 8));
        if (iVar3 == 0) goto LAB_05479d18;
      }
    }
    uVar2 = (**(code **)(**(long **)(this + 0x10) + 0x38))
                      (*(long **)(this + 0x10),param_1,param_3,param_4,param_5,param_6,param_7);
  }
  return uVar2;
}


/* __cxxabiv1::__si_class_type_info::__do_find_public_src(long, void const*,
   __cxxabiv1::__class_type_info const*, void const*) const */

undefined4 __thiscall
__cxxabiv1::__si_class_type_info::__do_find_public_src
          (__si_class_type_info *this,long param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *__s1;
  
  if (param_4 == param_2) {
    __s1 = *(char **)(this + 8);
    if (__s1 == *(char **)(param_3 + 8)) {
      return 6;
    }
    if ((*__s1 != '*') && (iVar2 = strcmp(__s1,*(char **)(param_3 + 8)), iVar2 == 0)) {
      return 6;
    }
  }
  uVar1 = (**(code **)(**(long **)(this + 0x10) + 0x40))
                    (*(long **)(this + 0x10),param_1,param_2,param_3,param_4);
  return uVar1;
}


/* __cxxabiv1::__si_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
   __cxxabiv1::__class_type_info::__upcast_result&) const */

char __thiscall
__cxxabiv1::__si_class_type_info::__do_upcast
          (__si_class_type_info *this,__class_type_info *param_1,void *param_2,
          __upcast_result *param_3)

{
  char cVar1;
  
  cVar1 = __class_type_info::__do_upcast((__class_type_info *)this,param_1,param_2,param_3);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(long **)(this + 0x10) + 0x30))
                      (*(long **)(this + 0x10),param_1,param_2,param_3);
  }
  return cVar1;
}

