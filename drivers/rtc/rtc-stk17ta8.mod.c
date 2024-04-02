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
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0x2a1427e2, "__rtc_register_device" },
	{ 0xa2d40b66, "rtc_nvmem_register" },
	{ 0xac5fb70a, "devm_rtc_allocate_device" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0x8d4abd8, "devm_ioremap_resource" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x977e0f83, "rtc_update_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6B3074FA9F6E8517025D00B");
MODULE_INFO(rhelversion, "8.0");
