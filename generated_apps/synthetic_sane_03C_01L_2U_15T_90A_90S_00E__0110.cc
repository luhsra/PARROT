#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task3Subtask9);
DeclareTask(CPU0Task3Subtask10);
DeclareTask(CPU0Task5Subtask4);
DeclareTask(CPU0Task5Subtask5);
DeclareTask(CPU0Task5Subtask12);
DeclareTask(CPU1Task1Subtask1);
DeclareTask(CPU1Task1Subtask2);
DeclareTask(CPU1Task1Subtask13);
DeclareTask(CPU1Task2Subtask7);
DeclareTask(CPU2Task0Subtask3);
DeclareTask(CPU2Task0Subtask8);
DeclareTask(CPU2Task4Subtask0);
DeclareTask(CPU2Task4Subtask6);
DeclareTask(CPU2Task4Subtask11);
DeclareTask(CPU2Task4Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask6 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 91); // 0
  ActivateTask(CPU2Task4Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 144); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 200); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 196); // 0
  ActivateTask(CPU0Task3Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 67); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 111); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 38); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 65); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 81); // 0
  ActivateTask(CPU1Task1Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 169); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 162); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 39); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 12); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 153); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 125); // 0
  ActivateTask(CPU1Task1Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 66); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 173); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 110); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 56); // 0
  ActivateTask(CPU0Task5Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 170); // 0
  ActivateTask(CPU2Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 69); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 139); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 18); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 39); // 0
  ActivateTask(CPU2Task4Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 167); // 0
  ActivateTask(CPU0Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 64); // 0
  ActivateTask(CPU2Task4Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 194); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 185); // 0
  ActivateTask(CPU2Task4Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 29); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask11.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 11); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 59); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 129); // 0
  ActivateTask(CPU0Task5Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 90); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 16); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 136); // 0
  TerminateTask();

}
