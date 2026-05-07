// Class: FEAST::CLibClient


/* FEAST::CLibClient::LibFree(void*) */

void __thiscall FEAST::CLibClient::LibFree(CLibClient *this,void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
    return;
  }
  return;
}


/* FEAST::CLibClient::LibRealloc(void*, unsigned long) */

void * __thiscall FEAST::CLibClient::LibRealloc(CLibClient *this,void *param_1,ulong param_2)

{
  void *pvVar1;
  
  pvVar1 = realloc(param_1,param_2);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
  (**(code **)(*(long *)this + 0x18))(this,"Out of memory");
  return (void *)0x0;
}


/* FEAST::CLibClient::LibMalloc(unsigned long) */

void * __thiscall FEAST::CLibClient::LibMalloc(CLibClient *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
  (**(code **)(*(long *)this + 0x18))(this,"Out of memory");
  return (void *)0x0;
}


/* FEAST::CLibClient::LibError(char const*) */

void FEAST::CLibClient::LibError(char *param_1)

{
  printf("FEAST Error: %s");
                    /* WARNING: Subroutine does not return */
  exit(1);
}

