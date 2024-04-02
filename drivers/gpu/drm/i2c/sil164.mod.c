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
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x2b26f667, "i2c_unregister_device" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0x20645642, "drm_debug" },
	{ 0xe6478472, "_dev_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd8ae242b, "drm_i2c_encoder_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x67c6a5ce, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x62a67793, "i2c_new_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";

MODULE_ALIAS("i2c:sil164");

MODULE_INFO(srcversion, "389BA2761A07ED65B9F05B7");
MODULE_INFO(rhelversion, "8.0");
