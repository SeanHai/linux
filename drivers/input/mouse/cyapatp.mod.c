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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5c7c325f, "__pm_runtime_disable" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0xc0d8df72, "__pm_runtime_use_autosuspend" },
	{ 0x754d539c, "strlen" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x15f864fa, "i2c_smbus_read_i2c_block_data" },
	{ 0xf946d9ad, "__pm_runtime_suspend" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0x5494c2, "input_alloc_absinfo" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0x91715312, "sprintf" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb3b42a38, "mutex_trylock" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfe7843b, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xfb6eedf9, "power_group_name" },
	{ 0xdf0bd32, "sysfs_merge_group" },
	{ 0x1e429171, "input_mt_init_slots" },
	{ 0x4962d21a, "sysfs_unmerge_group" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0x9e3f36ab, "devm_add_action" },
	{ 0x6a584776, "i2c_smbus_xfer" },
	{ 0x6d7aac23, "i2c_smbus_read_block_data" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb12f3cb9, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf789deff, "input_register_device" },
	{ 0x34c28e23, "pm_wakeup_dev_event" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0xeddf6d6d, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x67c6a5ce, "i2c_transfer_buffer_flags" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x69acdf38, "memcpy" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x5296e7b0, "devm_input_allocate_device" },
	{ 0x480ba3d3, "input_mt_report_slot_state" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xfd499c29, "pm_runtime_set_autosuspend_delay" },
	{ 0xa1654d34, "input_mt_sync_frame" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xd96ed058, "i2c_smbus_write_i2c_block_data" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0x84277b2a, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=crc-itu-t";

MODULE_ALIAS("acpi*:CYAP0000:*");
MODULE_ALIAS("acpi*:CYAP0001:*");
MODULE_ALIAS("acpi*:CYAP0002:*");
MODULE_ALIAS("i2c:cyapa");

MODULE_INFO(srcversion, "944CF03569DDD77F2325752");
MODULE_INFO(rhelversion, "8.0");
