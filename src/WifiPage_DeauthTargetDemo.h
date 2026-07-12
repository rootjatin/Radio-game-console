/*
 * CODE WORKS, BUT DON'T RUN THAT LIVE IN CLASSROOM.
 * USE THIS ONLY FOR AUTHORIZED EQUIPMENT TESTING IN A CONTROLLED LAB.
 *
 * Medical/critical-equipment testing rule:
 *   - Use only your own isolated test router/device, dummy client, or approved lab equipment.
 *   - Do not run near classmates, public networks, patient-care devices, or production systems.
 *   - Keep Serial Monitor open and record operator, date, target device, and professor approval.
 *   - Stop immediately if unintended devices are affected.
 */

/*
 * FILE REPORT: Targeted deauth workflow API
 * EXAM CATEGORY: RISKY AND NOT RECOMMENDED FOR LIVE CLASSROOM DEMO
 *
 * What this file does:
 *   - Declares input workflow callbacks for targeted deauth page.
 *
 * Expected outcome when run:
 *   - No direct output; implementation handles keyboard/OLED flow.
 *
 * Viva explanation:
 *   - Prefer passive detection/audit approach for final submission.
 *
 * TODO / improvement notes:
 *   - Good for discussing responsible testing boundaries.
 *
 * Documentation note:
 *   - This file was documented from the original uploaded code structure.
 *   - No existing page/menu function has been removed by this documentation pass.
 */

#ifndef WIFI_PAGE_DEAUTH_TARGET_DEMO_H
#define WIFI_PAGE_DEAUTH_TARGET_DEMO_H

/**
 * Targeted deauth workflow page.
 *
 * Uses keyboard input as the target label, sanitizes it for OLED rendering, and
 * shows the target-progress sequence used by the menu.
 */
void wifiDeauthTargetAction();
void wifiDeauthTargetResult();
void wifiDeauthTargetAfterInput(const char* inputText);

#endif
