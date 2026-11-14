#include "locale.h"
const Locale LANG_ZH_CN = {
    .TXT_SAVED_LFS = "已保存到闪存",

    // Wi-Fi text
    .TXT_WIFI_AP_ENABLED = "WiFi热点已开启",
    .TXT_WIFI_SSID_NOT_FOUND = "未找到WiFi名称",
    .TXT_WIFI_TIMEOUT = "连接超时",
    .TXT_WIFI_WRONG_PASSWORD = "密码错误",
    .TXT_WIFI_SYNC_FAILED = "同步失败",
    .TXT_WIFI_TIME_SYNCED = "时间已同步",
    .TXT_WIFI_NOT_CONNECTED = "未连接WiFi",
    .TXT_WIFI_BF_LOADED = "已加载：%d",
    .TXT_WIFI_BF_DONE = "已尝试：%d",
    .TXT_WIFI_BF_ALL_NETS = "网络数量：%d",
    .TXT_WIFI_BF_ALL_CRACKED = "成功：%d/%d",
    .TXT_WIFI_NO_NETWORKS = "没有发现网络",
    .TXT_WIFI_EVIL_PORTAL_RUNNING = "钓鱼热点运行中",
    .TXT_WIFI_EVIL_PORTAL_CRED_CAPTURED = "已捕获凭据！",
    .TXT_WIFI_EVIL_TWIN_RUNNING = "伪造热点运行中",
    .TXT_WIFI_WEB_SERVER_RUNNING = "网页服务器运行中",
    .TXT_SETTINGS_WIFI_SSID = "WiFi名称：",
    .TXT_WIFI_HANDSHAKE_PACKETS = "握手数据包：",
    .TXT_WIFI_NO_SCAN_DATA = "请先扫描网络",

    // Bluetooth text
    .TXT_BT_FILE_ERROR = "文件错误",
    .TXT_BT_PRESS_A_TO_RUN = "按A键运行",
    .TXT_BT_RUNNING = "正在运行...",
    .TXT_BT_DONE = "已完成！",

    // USB text
    .TXT_USB_HID_UNSOPPORTED = "不支持USB HID",
    .TXT_USB_STORAGE_NO_SD = "没有SD卡",
    .TXT_USB_STORAGE_ACTIVE = "USB存储已开启",
    .TXT_USB_STORAGE_HINT = "弹出设备后退出",

    // Storage text
    .TXT_STORAGE_LITTLEFS_ERROR = "闪存文件系统错误",
    .TXT_STORAGE_SD_ERROR = "SD卡错误",

    // NFC text
    .TXT_NFC_NO_UID_STORED = "没有保存UID",
    .TXT_NFC_READ_TAG_FIRST = "请先读取标签",
    .TXT_NFC_INVALID_UID = "无效的UID",
    .TXT_NFC_UID_4BYTE_REQUIRED = "需要4字节UID",
    .TXT_NFC_WRITE_SUCCESS = "写入成功！",
    .TXT_NFC_UID_WRITTEN = "UID已写入标签",
    .TXT_NFC_WRITE_FAILED = "写入失败！",
    .TXT_NFC_WRITE_ERROR = "没有标签或写入错误",
    .TXT_NFC_READY_TO_WRITE = "准备写入...",
    .TXT_NFC_PLACE_TAG = "请放置标签",
    .TXT_NFC_READING = "正在读取...",
    .TXT_NFC_SECTORS = "扇区",
    .TXT_NFC_PAGES = "页面",
    .TXT_NFC_SAVE_ERROR = "保存失败",
    .TXT_NFC_WRITING = "正在写入...",
    .TXT_NFC_NOT_CLASSIC = "不是Mifare Classic标签",
    .TXT_NFC_SECTORS_WRITTEN = "扇区写入完成",

    // Settings text
    .TXT_SETTINGS_BRIGHTNESS = "亮度：",
    .TXT_SETTINGS_VOLUME = "音量：",
    .TXT_SETTINGS_COLOR = "颜色：",
    .TXT_SETTINGS_ROTATION = "屏幕旋转",
    .TXT_SETTINGS_SOUND = "声音：",
    .TXT_SETTINGS_STATUS_BAR = "状态栏：",
    .TXT_SETTINGS_PID = "PID：",
    .TXT_SETTINGS_KB_GYRO = "键盘陀螺仪：",
    .TXT_SETTINGS_WEBSERVER_FS = "网页服务器文件系统：",

    .MENU_UART = "串口",
    .MENU_UART_TERMINAL = "终端",
    .MENU_UART_SAVE_LOGS = "保存日志",
};
