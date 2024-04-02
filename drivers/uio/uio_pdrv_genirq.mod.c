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
	{ 0xd7258a3c, "dev_warn" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x66dea867, "__uio_register_device" },
	{ 0xb12f3cb9, "pm_runtime_enable" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0xc6572c74, "__pm_runtime_idle" },
	{ 0x5c7c325f, "__pm_runtime_disable" },
	{ 0xc4d1388a, "uio_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=uio";


MODULE_INFO(srcversion, "F9FE5D35CB2511406300EAF");
MODULE_INFO(rhelversion, "8.0");
