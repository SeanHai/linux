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
	{ 0x69acdf38, "memcpy" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xe6478472, "_dev_info" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0x5792f848, "strlcpy" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x8733236, "intlog10" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0x37a0cba, "kfree" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core";

MODULE_ALIAS("i2c:tc90522sat");
MODULE_ALIAS("i2c:tc90522ter");

MODULE_INFO(srcversion, "D9BBE326FD0547B790409CE");
MODULE_INFO(rhelversion, "8.0");
