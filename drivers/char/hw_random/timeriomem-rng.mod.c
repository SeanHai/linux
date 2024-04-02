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
	{ 0xf9c388e5, "dev_err" },
	{ 0xe6478472, "_dev_info" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0x8d4abd8, "devm_ioremap_resource" },
	{ 0xdf243169, "hrtimer_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9181e45, "hrtimer_start_range_ns" },
	{ 0xae909197, "hrtimer_forward" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x29361773, "complete" },
	{ 0xf97d1a04, "hrtimer_cancel" },
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Ctimeriomem_rng");
MODULE_ALIAS("of:N*T*Ctimeriomem_rngC*");

MODULE_INFO(srcversion, "40C52A1F985AA144D1EE8F3");
MODULE_INFO(rhelversion, "8.0");
