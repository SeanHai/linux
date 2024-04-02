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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x37bf01c8, "i2c_mux_add_adapter" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x67c9254d, "regmap_update_bits_base" },
	{ 0x37a0f757, "i2c_mux_del_adapters" },
	{ 0xc78c5942, "regmap_bulk_read" },
	{ 0x64806ce1, "regmap_bulk_write" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0x671f107d, "i2c_mux_alloc" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9166fada, "strncpy" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2b26f667, "i2c_unregister_device" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xe6478472, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0c5fb07, "__i2c_transfer" },
	{ 0x8733236, "intlog10" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x749fffb4, "regmap_write" },
	{ 0x62a67793, "i2c_new_device" },
	{ 0x84277b2a, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-mux,dvb-core";

MODULE_ALIAS("i2c:m88ds3103");

MODULE_INFO(srcversion, "83B1A072E2FBF4E5D2ECECD");
MODULE_INFO(rhelversion, "8.0");
