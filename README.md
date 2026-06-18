# LDmicro TUI + Keil (با plcLib)

نسخه سبک TUI از LDmicro با رابط Fungal-UI style و تولید کد C برای Keil.

## ساخت
```bash
mkdir build && cd build
cmake ..
make
./ldmicro_tui
```

## ویژگی‌ها
- ویرایشگر ساده Ladder در ترمینال
- شبیه‌سازی پایه
- تولید کد C با المان‌های plcLib (in, out, timerOn و ...)