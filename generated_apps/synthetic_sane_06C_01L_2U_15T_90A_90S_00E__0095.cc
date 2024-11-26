#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task4Subtask2);
DeclareTask(CPU0Task4Subtask9);
DeclareTask(CPU1Task0Subtask0);
DeclareTask(CPU1Task0Subtask10);
DeclareTask(CPU1Task0Subtask13);
DeclareTask(CPU2Task2Subtask7);
DeclareTask(CPU2Task2Subtask12);
DeclareTask(CPU3Task5Subtask4);
DeclareTask(CPU3Task5Subtask5);
DeclareTask(CPU3Task5Subtask6);
DeclareTask(CPU3Task5Subtask8);
DeclareTask(CPU3Task5Subtask11);
DeclareTask(CPU4Task1Subtask1);
DeclareTask(CPU5Task3Subtask3);
DeclareTask(CPU5Task3Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask3 (void);



void AUTOSAR_TASK_FUNC_CPU0Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 169); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 23); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 89); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 33); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 25); // 0
  ActivateTask(CPU1Task0Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 126); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 53); // 0
  ActivateTask(CPU1Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 148); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 136); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 153); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 10); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 192); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 46); // 0
  ActivateTask(CPU2Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 110); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 139); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 80); // 0
  ActivateTask(CPU3Task5Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 129); // 0
  ActivateTask(CPU3Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 31); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 198); // 0
  ActivateTask(CPU1Task0Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 38); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 179); // 0
  ActivateTask(CPU3Task5Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 64); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 143); // 0
  ActivateTask(CPU3Task5Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 199); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 175); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 166); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 75); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 51); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 165); // 0
  ActivateTask(CPU5Task3Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 52); // 0
  TerminateTask();

}
