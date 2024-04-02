#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x2d3385d3, "system_wq" },
	{ 0x15191c9a, "hid_sensor_batch_mode_supported" },
	{ 0x652689ce, "iio_trigger_unregister" },
	{ 0x5c7c325f, "__pm_runtime_disable" },
	{ 0xc0d8df72, "__pm_runtime_use_autosuspend" },
	{ 0xf946d9ad, "__pm_runtime_suspend" },
	{ 0x454168e8, "iio_trigger_alloc" },
	{ 0xcc16eac1, "sensor_hub_get_feature" },
	{ 0x2650e78f, "sensor_hub_device_open" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0x91715312, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x26f6b499, "iio_str_to_fixpoint" },
	{ 0xf958a677, "hid_sensor_read_poll_value" },
	{ 0x33134538, "sensor_hub_device_close" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xbdc3e9e9, "__iio_trigger_register" },
	{ 0x88d09b15, "hid_sensor_get_usage_index" },
	{ 0xb12f3cb9, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xeddf6d6d, "__pm_runtime_set_status" },
	{ 0x5ea8e2c0, "sensor_hub_set_feature" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x85ffabba, "get_device" },
	{ 0xdd2fa3f4, "__module_get" },
	{ 0x47d94df2, "iio_trigger_free" },
	{ 0x28595d31, "iio_buffer_set_attrs" },
	{ 0xb76c0833, "hid_sensor_set_report_latency" },
	{ 0xfd499c29, "pm_runtime_set_autosuspend_delay" },
	{ 0x121da905, "queue_work_on" },
	{ 0x747be1b2, "hid_sensor_get_report_latency" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-sensor-iio-common,hid-sensor-hub";


MODULE_INFO(srcversion, "78F40395FBB407EF4F33745");
MODULE_INFO(rhelversion, "8.0");
