// Class: __cxxabiv1::__vmi_class_type_info


/* __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info() */

void __thiscall
__cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info(__vmi_class_type_info *this)

{
  *(undefined ***)this = &PTR____vmi_class_type_info_06a397a0;
  __class_type_info::~__class_type_info((__class_type_info *)this);
  return;
}


/* __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info() */

void __thiscall
__cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info(__vmi_class_type_info *this)

{
  ~__vmi_class_type_info(this);
  AK::FreeHook(this);
  return;
}


/* __cxxabiv1::__vmi_class_type_info::__do_find_public_src(long, void const*,
   __cxxabiv1::__class_type_info const*, void const*) const */

uint __thiscall
__cxxabiv1::__vmi_class_type_info::__do_find_public_src
          (__vmi_class_type_info *this,long param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *__s1;
  long lVar4;
  ulong uVar5;
  __vmi_class_type_info *p_Var6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_2 == param_4) {
    __s1 = *(char **)(this + 8);
    if (__s1 == *(char **)(param_3 + 8)) {
      return 6;
    }
    if ((*__s1 != '*') && (iVar3 = strcmp(__s1,*(char **)(param_3 + 8)), iVar3 == 0)) {
      return 6;
    }
  }
  uVar8 = (ulong)*(uint *)(this + 0x14);
  uVar7 = 1;
  p_Var6 = this + uVar8 * 0x10;
  if (uVar8 != 0) {
    do {
      uVar5 = *(ulong *)(p_Var6 + 0x10);
      if (((uint)uVar5 >> 1 & 1) != 0) {
        lVar4 = (long)uVar5 >> 8;
        if (((uVar5 & 1) == 0) || (param_1 != -3)) {
          if ((uVar5 & 1) != 0) {
            lVar4 = *(long *)(*(long *)param_2 + lVar4);
          }
          uVar2 = (**(code **)(**(long **)(p_Var6 + 8) + 0x40))
                            (*(long **)(p_Var6 + 8),param_1,(long)param_2 + lVar4,param_3,param_4);
          if (3 < (int)uVar2) {
            return uVar2 | (uint)(uVar5 & 1);
          }
        }
      }
      bVar1 = uVar7 != uVar8;
      p_Var6 = p_Var6 + -0x10;
      uVar7 = uVar7 + 1;
    } while (bVar1);
  }
  return 1;
}


/* __cxxabiv1::__vmi_class_type_info::__do_dyncast(long, __cxxabiv1::__class_type_info::__sub_kind,
   __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
   const*, __cxxabiv1::__class_type_info::__dyncast_result&) const */

char __thiscall
__cxxabiv1::__vmi_class_type_info::__do_dyncast
          (__vmi_class_type_info *this,long param_1,uint param_3,long *param_4,long *param_5,
          long param_6,long *param_7,long *param_8)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  char *__s2;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  char *__s1;
  char cVar13;
  ulong uVar14;
  __vmi_class_type_info *p_Var15;
  bool bVar16;
  byte bVar17;
  long local_18;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  if ((*(uint *)((long)param_8 + 0x14) >> 4 & 1) != 0) {
    *(undefined4 *)((long)param_8 + 0x14) = *(undefined4 *)(this + 0x10);
  }
  __s1 = *(char **)(this + 8);
  if (param_5 == param_7) {
    if (__s1 == *(char **)(param_6 + 8)) {
LAB_0547a2cc:
      *(uint *)((long)param_8 + 0xc) = param_3;
      return '\0';
    }
    if (*__s1 == '*') {
      if (__s1 != (char *)param_4[1]) goto LAB_0547a014;
      goto LAB_0547a364;
    }
    iVar3 = strcmp(__s1,*(char **)(param_6 + 8));
    if (iVar3 == 0) goto LAB_0547a2cc;
    __s2 = (char *)param_4[1];
    if (__s1 == __s2) goto LAB_0547a364;
  }
  else {
    __s2 = (char *)param_4[1];
    if (__s2 == __s1) goto LAB_0547a364;
    if (*__s1 == '*') goto LAB_0547a014;
  }
  iVar3 = strcmp(__s1,__s2);
  if (iVar3 != 0) {
LAB_0547a014:
    cVar13 = '\0';
    bVar17 = 0;
    uVar12 = (long)param_7 - param_1;
    if (param_1 < 0) {
      uVar12 = 0;
    }
    bVar16 = true;
    do {
      uVar14 = 0;
      uVar8 = (ulong)*(uint *)(this + 0x14);
      p_Var15 = this + uVar8 * 0x10;
      if (uVar8 != 0) {
        do {
          local_4 = *(uint *)((long)param_8 + 0x14);
          uVar11 = *(ulong *)(p_Var15 + 0x10);
          local_18 = 0;
          local_10 = 0;
          lVar10 = (long)uVar11 >> 8;
          local_c = 0;
          local_8 = 0;
          uVar9 = param_3;
          if ((uVar11 & 1) != 0) {
            lVar10 = *(long *)(*param_5 + lVar10);
            uVar9 = param_3 | 1;
          }
          if ((uVar12 == 0) || (uVar12 < (ulong)((long)param_5 + lVar10) != bVar16)) {
            if (((uint)uVar11 >> 1 & 1) == 0) {
              if ((param_1 == -2) && ((local_4 & 3) == 0)) goto LAB_0547a138;
              uVar9 = uVar9 & 0xfffffffd;
            }
            cVar2 = (**(code **)(**(long **)(p_Var15 + 8) + 0x38))
                              (*(long **)(p_Var15 + 8),param_1,uVar9,param_4,(long)param_5 + lVar10,
                               param_6,param_7,&local_18);
            uVar5 = local_8;
            uVar9 = local_c | *(uint *)((long)param_8 + 0xc);
            *(uint *)((long)param_8 + 0xc) = uVar9;
            if ((local_8 & 0xfffffffb) == 2) {
              *param_8 = local_18;
              *(uint *)(param_8 + 1) = local_10;
              *(uint *)(param_8 + 2) = local_8;
              return cVar2;
            }
            lVar10 = *param_8;
            if (cVar13 == '\0') {
              if (lVar10 == 0) {
                *param_8 = local_18;
                *(uint *)(param_8 + 1) = local_10;
                cVar13 = cVar2;
                if (((uVar9 != 0) && (local_18 != 0)) && ((*(uint *)(this + 0x10) & 1) == 0)) {
                  return cVar2;
                }
              }
              else {
LAB_0547a11c:
                if (lVar10 == local_18) {
                  *(uint *)(param_8 + 1) = *(uint *)(param_8 + 1) | local_10;
                }
                else if ((cVar2 != '\0') || (local_18 != 0)) goto LAB_0547a194;
              }
            }
            else {
              if (lVar10 != 0) goto LAB_0547a11c;
              if (local_18 == 0) goto LAB_0547a130;
LAB_0547a194:
              uVar6 = *(uint *)(param_8 + 2);
              if (((int)uVar9 < 4) ||
                 (((uVar9 & 1) != 0 && ((*(uint *)((long)param_8 + 0x14) >> 1 & 1) != 0)))) {
                if (0 < (int)uVar6) {
LAB_0547a1bc:
                  if (0 < (int)uVar5) {
LAB_0547a1c4:
                    uVar9 = uVar6 ^ uVar5;
                    local_8 = uVar5;
                    goto joined_r0x0547a250;
                  }
                  if ((3 < (int)uVar6) &&
                     (((uVar6 & 1) == 0 || ((*(uint *)(this + 0x10) >> 1 & 1) == 0)))) {
                    if (3 < (int)(uVar6 ^ 1)) {
                      uVar9 = uVar6 & 2;
                      uVar5 = uVar6;
                      goto LAB_0547a1dc;
                    }
                    goto LAB_0547a260;
                  }
                  if (param_1 < 0) {
                    if (param_1 == -2) goto LAB_0547a284;
                    uVar5 = (**(code **)(*param_4 + 0x40))(param_4,param_1,local_18,param_6,param_7)
                    ;
                    goto LAB_0547a1c4;
                  }
                  if (param_7 != (long *)(local_18 + param_1)) {
                    uVar4 = uVar6 ^ 1;
                    goto LAB_0547a288;
                  }
                  local_8 = uVar6 & 6;
                  if (3 < (int)(uVar6 ^ 6)) goto LAB_0547a4c8;
LAB_0547a258:
                  if (3 < (int)local_8) {
                    *param_8 = 0;
                    *(undefined4 *)(param_8 + 2) = 2;
                    return '\x01';
                  }
                  goto LAB_0547a260;
                }
                if (((int)local_8 < 4) ||
                   (((local_8 & 1) != 0 && ((*(uint *)(this + 0x10) >> 1 & 1) != 0)))) {
                  if (param_1 < 0) {
                    if (param_1 != -2) {
                      uVar6 = (**(code **)(*param_4 + 0x40))(param_4,param_1,lVar10,param_6,param_7)
                      ;
                      goto LAB_0547a1bc;
                    }
                    if ((int)local_8 < 1) goto LAB_0547a264;
LAB_0547a3e4:
                    uVar6 = 1;
                    goto LAB_0547a1c4;
                  }
                  if (param_7 == (long *)(lVar10 + param_1)) {
                    uVar6 = 6;
                    if (0 < (int)local_8) goto LAB_0547a1c4;
                    goto LAB_0547a1d8;
                  }
                  if (0 < (int)local_8) goto LAB_0547a3e4;
                  if (param_7 != (long *)(local_18 + param_1)) {
                    uVar6 = 1;
                    uVar4 = 0;
                    goto LAB_0547a288;
                  }
LAB_0547a4c8:
                  uVar5 = 0;
                  uVar9 = 2;
                  local_8 = 6;
                }
                else {
                  uVar6 = 1;
                  if ((int)(local_8 ^ 1) < 4) goto LAB_0547a254;
LAB_0547a210:
                  uVar9 = local_8 & 2;
                  uVar5 = local_8;
                }
                *param_8 = local_18;
                cVar13 = '\0';
                *(uint *)(param_8 + 1) = local_10;
                uVar6 = local_8;
LAB_0547a1dc:
                *(uint *)(param_8 + 2) = uVar6;
                if (uVar9 != 0) {
                  return '\0';
                }
                if ((uVar5 & 1) == 0) {
                  return '\0';
                }
                uVar9 = *(uint *)((long)param_8 + 0xc);
              }
              else {
                if (uVar6 == 0) {
                  if (local_8 != 0) {
                    uVar6 = 1;
LAB_0547a240:
                    uVar9 = uVar6 ^ local_8;
joined_r0x0547a250:
                    if (3 < (int)uVar9) {
                      if (3 < (int)local_8) goto LAB_0547a210;
LAB_0547a1d8:
                      uVar9 = uVar6 & 2;
                      uVar5 = uVar6;
                      goto LAB_0547a1dc;
                    }
LAB_0547a254:
                    local_8 = uVar6 & local_8;
                    goto LAB_0547a258;
                  }
                }
                else {
                  if (local_8 != 0) goto LAB_0547a240;
LAB_0547a284:
                  uVar4 = uVar6 ^ 1;
LAB_0547a288:
                  uVar9 = uVar6 & 2;
                  uVar5 = uVar6;
                  if (3 < (int)uVar4) goto LAB_0547a1dc;
LAB_0547a260:
                  uVar9 = *(uint *)((long)param_8 + 0xc);
                }
LAB_0547a264:
                *param_8 = 0;
                *(undefined4 *)(param_8 + 2) = 1;
                cVar13 = '\x01';
              }
            }
LAB_0547a130:
            if (uVar9 == 4) {
              return cVar13;
            }
          }
          else {
            bVar17 = 1;
          }
LAB_0547a138:
          uVar14 = uVar14 + 1;
          p_Var15 = p_Var15 + -0x10;
        } while (uVar8 != uVar14);
      }
      bVar1 = bVar17 & bVar16;
      bVar17 = 1;
      bVar16 = false;
      if (bVar1 == 0) {
        return cVar13;
      }
    } while( true );
  }
LAB_0547a364:
  *param_8 = (long)param_5;
  *(uint *)(param_8 + 1) = param_3;
  if (param_1 < 0) {
    if (param_1 == -2) {
      *(undefined4 *)(param_8 + 2) = 1;
    }
  }
  else {
    uVar7 = 6;
    if (param_7 != (long *)((long)param_5 + param_1)) {
      uVar7 = 1;
    }
    *(undefined4 *)(param_8 + 2) = uVar7;
  }
  return '\0';
}


/* __cxxabiv1::__vmi_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
   __cxxabiv1::__class_type_info::__upcast_result&) const */

char __thiscall
__cxxabiv1::__vmi_class_type_info::__do_upcast
          (__vmi_class_type_info *this,__class_type_info *param_1,void *param_2,
          __upcast_result *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *__s1;
  ulong uVar4;
  long lVar5;
  __vmi_class_type_info *p_Var6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long local_18;
  uint local_10;
  uint local_c;
  long local_8;
  
  cVar2 = __class_type_info::__do_upcast((__class_type_info *)this,param_1,param_2,param_3);
  if (cVar2 == '\0') {
    uVar8 = *(uint *)(param_3 + 0xc);
    if ((uVar8 >> 4 & 1) != 0) {
      uVar8 = *(uint *)(this + 0x10);
    }
    uVar7 = 0;
    uVar9 = (ulong)*(uint *)(this + 0x14);
    p_Var6 = this + uVar9 * 0x10;
    if (uVar9 != 0) {
      do {
        uVar4 = *(ulong *)(p_Var6 + 0x10);
        local_18 = 0;
        local_10 = 0;
        local_8 = 0;
        if (((uVar4 >> 1 & 1) != 0) || ((uVar8 & 1) != 0)) {
          if (param_2 == (void *)0x0) {
            lVar5 = 0;
          }
          else {
            lVar5 = (long)uVar4 >> 8;
            if ((uVar4 & 1) != 0) {
              lVar5 = *(long *)(*(long *)param_2 + lVar5);
            }
            lVar5 = (long)param_2 + lVar5;
          }
          local_c = uVar8;
          cVar2 = (**(code **)(**(long **)(p_Var6 + 8) + 0x30))
                            (*(long **)(p_Var6 + 8),param_1,lVar5,&local_18);
          if (cVar2 != '\0') {
            if (((uVar4 & 1) != 0) && (local_8 == 0x10)) {
              local_8 = *(long *)(p_Var6 + 8);
            }
            if (((uVar4 >> 1 & 1) == 0) && (3 < (int)local_10)) {
              local_10 = local_10 & 0xfffffffd;
            }
            lVar5 = *(long *)(param_3 + 0x10);
            if (lVar5 == 0) {
              *(long *)param_3 = local_18;
              *(ulong *)(param_3 + 8) = CONCAT44(local_c,local_10);
              *(long *)(param_3 + 0x10) = local_8;
              uVar1 = *(uint *)(param_3 + 8);
              if ((int)uVar1 < 4) {
                return cVar2;
              }
              if ((uVar1 >> 1 & 1) == 0) {
                if ((uVar1 & 1) == 0) {
                  return cVar2;
                }
                uVar1 = *(uint *)(this + 0x10) >> 1;
              }
              else {
                uVar1 = *(uint *)(this + 0x10);
              }
              if ((uVar1 & 1) == 0) {
                return cVar2;
              }
            }
            else {
              if (*(long *)param_3 != local_18) {
                *(undefined8 *)param_3 = 0;
                *(undefined4 *)(param_3 + 8) = 2;
                return cVar2;
              }
              if (*(long *)param_3 == 0) {
                if ((local_8 == 0x10) || (lVar5 == 0x10)) {
LAB_0547a714:
                  *(undefined4 *)(param_3 + 8) = 2;
                  return cVar2;
                }
                __s1 = *(char **)(local_8 + 8);
                if ((__s1 != *(char **)(lVar5 + 8)) &&
                   ((*__s1 == '*' || (iVar3 = strcmp(__s1,*(char **)(lVar5 + 8)), iVar3 != 0))))
                goto LAB_0547a714;
              }
              *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | local_10;
            }
          }
        }
        uVar7 = uVar7 + 1;
        p_Var6 = p_Var6 + -0x10;
      } while (uVar9 != uVar7);
    }
    cVar2 = *(int *)(param_3 + 8) != 0;
  }
  return cVar2;
}

