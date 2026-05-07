// Class: __cxxabiv1::__class_type_info


/* __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void**) const */

bool __thiscall
__cxxabiv1::__class_type_info::__do_upcast
          (__class_type_info *this,__class_type_info *param_1,void **param_2)

{
  bool bVar1;
  void *local_18;
  uint local_10;
  undefined4 local_c;
  undefined8 local_8;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  local_c = 0x10;
  local_8 = 0;
  (**(code **)(*(long *)this + 0x30))(this,param_1,*param_2,&local_18);
  bVar1 = (local_10 & 6) == 6;
  if (bVar1) {
    *param_2 = local_18;
  }
  return bVar1;
}


/* __cxxabiv1::__class_type_info::__do_find_public_src(long, void const*,
   __cxxabiv1::__class_type_info const*, void const*) const */

undefined4 __thiscall
__cxxabiv1::__class_type_info::__do_find_public_src
          (__class_type_info *this,long param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  undefined4 uVar1;
  
  uVar1 = 6;
  if (param_4 != param_2) {
    uVar1 = 1;
  }
  return uVar1;
}


/* __cxxabiv1::__class_type_info::~__class_type_info() */

void __thiscall __cxxabiv1::__class_type_info::~__class_type_info(__class_type_info *this)

{
  *(undefined ***)this = &PTR____class_type_info_06a39580;
  nop();
  return;
}


/* __cxxabiv1::__class_type_info::~__class_type_info() */

void __thiscall __cxxabiv1::__class_type_info::~__class_type_info(__class_type_info *this)

{
  ~__class_type_info(this);
  AK::FreeHook(this);
  return;
}


/* __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
   __cxxabiv1::__class_type_info::__upcast_result&) const */

undefined8 __thiscall
__cxxabiv1::__class_type_info::__do_upcast
          (__class_type_info *this,__class_type_info *param_1,void *param_2,__upcast_result *param_3
          )

{
  int iVar1;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (__s1 != *(char **)(param_1 + 8)) {
    if (*__s1 != '*') {
      iVar1 = strcmp(__s1,*(char **)(param_1 + 8));
      if (iVar1 == 0) goto LAB_05478384;
    }
    return 0;
  }
LAB_05478384:
  *(void **)param_3 = param_2;
  *(undefined8 *)(param_3 + 0x10) = 0x10;
  *(undefined4 *)(param_3 + 8) = 6;
  return 1;
}


/* __cxxabiv1::__class_type_info::__do_catch(std::type_info const*, void**, unsigned int) const */

undefined1 __thiscall
__cxxabiv1::__class_type_info::__do_catch
          (__class_type_info *this,type_info *param_1,void **param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (__s1 == *(char **)(param_1 + 8)) {
    return 1;
  }
  if ((*__s1 != '*') && (iVar2 = strcmp(__s1,*(char **)(param_1 + 8)), iVar2 == 0)) {
    return 1;
  }
  if (3 < param_3) {
    return 0;
  }
  uVar1 = (**(code **)(*(long *)param_1 + 0x28))(param_1,this,param_2);
  return uVar1;
}


/* __cxxabiv1::__class_type_info::__do_dyncast(long, __cxxabiv1::__class_type_info::__sub_kind,
   __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
   const*, __cxxabiv1::__class_type_info::__dyncast_result&) const */

undefined8 __thiscall
__cxxabiv1::__class_type_info::__do_dyncast
          (__class_type_info *this,undefined8 param_2,undefined4 param_3,long param_4,long param_5,
          long param_6,long param_7,long *param_8)

{
  int iVar1;
  char *__s2;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (param_5 == param_7) {
    if (__s1 == *(char **)(param_6 + 8)) {
LAB_05478530:
      *(undefined4 *)((long)param_8 + 0xc) = param_3;
      return 0;
    }
    if (*__s1 == '*') {
      if (__s1 != *(char **)(param_4 + 8)) {
        return 0;
      }
      goto LAB_05478510;
    }
    iVar1 = strcmp(__s1,*(char **)(param_6 + 8));
    if (iVar1 == 0) goto LAB_05478530;
    __s2 = *(char **)(param_4 + 8);
    if (__s1 == __s2) goto LAB_05478510;
  }
  else {
    __s2 = *(char **)(param_4 + 8);
    if (__s1 == __s2) goto LAB_05478510;
    if (*__s1 == '*') {
      return 0;
    }
  }
  iVar1 = strcmp(__s1,__s2);
  if (iVar1 != 0) {
    return 0;
  }
LAB_05478510:
  *param_8 = param_5;
  *(undefined4 *)(param_8 + 1) = param_3;
  *(undefined4 *)(param_8 + 2) = 1;
  return 0;
}

