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
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x6bddef80, "misc_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97868aef, "__kfifo_alloc" },
	{ 0x85f5e2aa, "krealloc" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x6af0f127, "sensor_hub_register_callback" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0x50a90e8d, "bsearch" },
	{ 0x28318305, "snprintf" },
	{ 0xcc16eac1, "sensor_hub_get_feature" },
	{ 0xbbc80ac0, "sensor_hub_input_attr_get_raw_value" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xe40f271e, "sensor_hub_remove_callback" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x91715312, "sprintf" },
	{ 0x2650e78f, "sensor_hub_device_open" },
	{ 0x33134538, "sensor_hub_device_close" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x373db350, "kstrtoint" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x5ea8e2c0, "sensor_hub_set_feature" },
	{ 0x88d09b15, "hid_sensor_get_usage_index" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-sensor-hub";

MODULE_ALIAS("platform:HID-SENSOR-2000e1");
MODULE_ALIAS("platform:HID-SENSOR-2000e2");

MODULE_INFO(srcversion, "5EDC7084393B47298C82C87");
MODULE_INFO(rhelversion, "8.0");
