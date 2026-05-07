// Class: FEAST


/* FEAST::LIB_GetDefaultClient() */

undefined * FEAST::LIB_GetDefaultClient(void)

{
  return &DAT_06a8f448;
}


/* FEAST::LIB_GetClientRef() */

undefined8 * FEAST::LIB_GetClientRef(void)

{
  int iVar1;
  
  if (((DAT_06be4998 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06be4998), iVar1 != 0)) {
    DAT_06be4990 = LIB_GetDefaultClient();
    __cxa_guard_release(&DAT_06be4998);
    return &DAT_06be4990;
  }
  return &DAT_06be4990;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FEAST::LIB_Va(char const*&, char*, ...) */

void FEAST::LIB_Va(char **param_1,char *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  if (*param_1 == (char *)0x0) {
    param_2 = (char *)0x0;
  }
  else {
    if (param_2 == (char *)0x0) {
      param_2 = &DAT_06be49a0;
    }
    local_f0 = &local_30;
    uStack_e8 = 0xffffff80ffffffd0;
    local_100 = (undefined1 *)register0x00000008;
    puStack_f8 = (undefined1 *)register0x00000008;
    vsprintf(param_2,*param_1,&local_100);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


/* FEAST::LIB_ClientMalloc(unsigned long) */

undefined8 * FEAST::LIB_ClientMalloc(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)LIB_GetClientRef();
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)*puVar1)((undefined8 *)*puVar1,param_1 + 8);
  puVar2 = (undefined8 *)LIB_GetClientRef();
  *puVar1 = *puVar2;
  return puVar1 + 1;
}


/* FEAST::LIB_ClientRealloc(void*, unsigned long) */

undefined8 * FEAST::LIB_ClientRealloc(void *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + -8);
  puVar1 = (undefined8 *)
           (**(code **)(*plVar2 + 8))(plVar2,(undefined8 *)((long)param_1 + -8),param_2 + 8);
  *puVar1 = plVar2;
  return puVar1 + 1;
}


/* FEAST::LIB_ClientFree(void*) */

void FEAST::LIB_ClientFree(void *param_1)

{
  if (param_1 != (void *)0x0) {
    (**(code **)(**(long **)((long)param_1 + -8) + 0x10))(*(long **)((long)param_1 + -8));
  }
  return;
}


/* FEAST::LIB_Errorf(char const*, ...) */

void FEAST::LIB_Errorf(char *param_1,...)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  code *pcVar3;
  long *plVar4;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_c8 = param_1;
  local_c0 = in_d0;
  local_b0 = in_d1;
  local_a0 = in_d2;
  local_90 = in_d3;
  local_80 = in_d4;
  local_70 = in_d5;
  local_60 = in_d6;
  local_50 = in_d7;
  local_38 = in_x1;
  local_30 = in_x2;
  local_28 = in_x3;
  local_20 = in_x4;
  local_18 = in_x5;
  local_10 = in_x6;
  local_8 = in_x7;
  puVar1 = (undefined8 *)LIB_GetClientRef();
  plVar4 = (long *)*puVar1;
  pcVar3 = *(code **)(*plVar4 + 0x18);
  uVar2 = LIB_Va(&local_c8,(char *)0x0);
  (*pcVar3)(plVar4,uVar2);
  return;
}


/* FEAST::LIB_SetClient(FEAST::ILibClient*) */

undefined8 FEAST::LIB_SetClient(ILibClient *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)LIB_GetClientRef();
  uVar3 = *puVar1;
  if (param_1 != (ILibClient *)0x0) {
    puVar1 = (undefined8 *)LIB_GetClientRef();
    *puVar1 = param_1;
    return uVar3;
  }
  uVar2 = LIB_GetDefaultClient();
  puVar1 = (undefined8 *)LIB_GetClientRef();
  *puVar1 = uVar2;
  return uVar3;
}


/* FEAST::LIB_GetClient() */

undefined8 FEAST::LIB_GetClient(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)LIB_GetClientRef();
  return *puVar1;
}


/* FEAST::LIB_GetVersion() */

undefined4 FEAST::LIB_GetVersion(void)

{
  return 0x3f851eb8;
}

