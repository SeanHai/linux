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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xf61c3df0, "drm_property_create_range" },
	{ 0x7c0d564d, "drm_crtc_force_disable" },
	{ 0xf0eb808a, "drm_helper_probe_single_connector_modes" },
	{ 0x74b9a534, "drm_object_property_set_value" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xe92eb648, "drm_object_attach_property" },
	{ 0x622aae5b, "drm_mode_duplicate" },
	{ 0x6cb551bd, "drm_mode_create_tv_properties" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xe6478472, "_dev_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd8ae242b, "drm_i2c_encoder_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x67c6a5ce, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x492f102e, "drm_property_destroy" },
	{ 0x81d2c2be, "drm_mode_probed_add" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,drm_kms_helper";

MODULE_ALIAS("i2c:ch7006");

MODULE_INFO(srcversion, "C92A659743586B016095EF7");
MODULE_INFO(rhelversion, "8.0");
