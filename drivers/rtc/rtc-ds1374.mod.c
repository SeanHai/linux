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
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xd96ed058, "i2c_smbus_write_i2c_block_data" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xf1f77788, "devm_rtc_device_register" },
	{ 0x7a1144e8, "device_set_wakeup_capable" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x977e0f83, "rtc_update_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x15f864fa, "i2c_smbus_read_i2c_block_data" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xcad615e2, "devm_free_irq" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:ds1374");

MODULE_INFO(srcversion, "D2579312091AABCF13989F2");
MODULE_INFO(rhelversion, "8.0");
