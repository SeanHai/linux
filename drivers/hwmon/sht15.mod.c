#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x29686856, "hwmon_device_register" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0xcb44743c, "devm_gpiod_get" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x2b259a46, "hwmon_device_unregister" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x1b17e06c, "kstrtoll" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xa848e02c, "gpiod_to_irq" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x162d2a2a, "gpiod_get_value" },
	{ 0x7bcafccf, "gpiod_direction_input" },
	{ 0xd69e6e56, "gpiod_set_value" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8ee56710, "gpiod_direction_output" },
	{ 0x91715312, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("platform:sht10");
MODULE_ALIAS("platform:sht11");
MODULE_ALIAS("platform:sht15");
MODULE_ALIAS("platform:sht71");
MODULE_ALIAS("platform:sht75");

MODULE_INFO(srcversion, "66E34AEBCA3004B70DC83CB");
MODULE_INFO(rhelversion, "8.0");
