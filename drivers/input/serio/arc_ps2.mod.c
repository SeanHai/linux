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
	{ 0x1358df84, "__serio_register_port" },
	{ 0x28318305, "snprintf" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0xe6478472, "_dev_info" },
	{ 0x8d4abd8, "devm_ioremap_resource" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xf602575e, "platform_get_irq_byname" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xe484e35f, "ioread32" },
	{ 0xbb786aaf, "serio_interrupt" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xdcc5fb23, "serio_unregister_port" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5F9DDC2623E938DC8774A7B");
MODULE_INFO(rhelversion, "8.0");
