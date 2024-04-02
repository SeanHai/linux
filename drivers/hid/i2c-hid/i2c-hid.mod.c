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
	{ 0x43862d4a, "hid_add_device" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc6572c74, "__pm_runtime_idle" },
	{ 0x5c7c325f, "__pm_runtime_disable" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x2830c41c, "hid_parse_report" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0x572e5012, "acpi_bus_get_device" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0xe8f5b243, "acpi_device_fix_up_power" },
	{ 0x5495392, "hid_debug" },
	{ 0x1a6f54b2, "hid_input_report" },
	{ 0x42c9294a, "acpi_match_device_ids" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x9020c14d, "i2c_smbus_read_byte" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xf6717f46, "irq_get_irq_data" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0x4cf09b5c, "device_property_read_u32_array" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb12f3cb9, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xeddf6d6d, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1c602b69, "hid_destroy_device" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xc3db023b, "hid_allocate_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x67c6a5ce, "i2c_transfer_buffer_flags" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x28318305, "snprintf" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x78843f2d, "is_acpi_device_node" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:hid");
MODULE_ALIAS("i2c:hid-over-i2c");
MODULE_ALIAS("acpi*:ACPI0C50:*");
MODULE_ALIAS("acpi*:PNP0C50:*");

MODULE_INFO(srcversion, "BFA943AD92FD04B725FDCE7");
MODULE_INFO(rhelversion, "8.0");
