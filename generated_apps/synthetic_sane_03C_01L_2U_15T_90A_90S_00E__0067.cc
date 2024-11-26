#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task0Subtask2);
DeclareTask(CPU0Task0Subtask4);
DeclareTask(CPU0Task0Subtask5);
DeclareTask(CPU0Task0Subtask13);
DeclareTask(CPU0Task1Subtask1);
DeclareTask(CPU0Task1Subtask8);
DeclareTask(CPU0Task1Subtask11);
DeclareTask(CPU0Task2Subtask0);
DeclareTask(CPU0Task2Subtask7);
DeclareTask(CPU1Task3Subtask12);
DeclareTask(CPU2Task4Subtask6);
DeclareTask(CPU2Task4Subtask9);
DeclareTask(CPU2Task5Subtask3);
DeclareTask(CPU2Task5Subtask10);
DeclareTask(CPU2Task5Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask3 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 130); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 116); // 0
  ActivateTask(CPU0Task0Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 161); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 174); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 121); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 26); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 100); // 0
  ActivateTask(CPU0Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 132); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 22); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 85); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 102); // 0
  ActivateTask(CPU0Task1Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 85); // 0
  ActivateTask(CPU0Task1Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 180); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 78); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 175); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 7); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 18); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 84); // 0
  ActivateTask(CPU0Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 192); // 0
  ActivateTask(CPU1Task3Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 18); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 156); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 156); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 199); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 5); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 28); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 115); // 0
  ActivateTask(CPU2Task4Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 36); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 110); // 0
  ActivateTask(CPU2Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 115); // 0
  ActivateTask(CPU0Task0Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 156); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 12); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 19); // 0
  ActivateTask(CPU0Task1Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 143); // 0
  ActivateTask(CPU2Task5Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 47); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 150); // 0
  TerminateTask();

}
