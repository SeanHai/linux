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
	{ 0x104d459d, "crypto_unregister_template" },
	{ 0x3a06d7e3, "crypto_register_template" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x66f221d7, "skcipher_walk_done" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xb4906fc3, "skcipher_walk_virt" },
	{ 0x59e365ee, "skcipher_register_instance" },
	{ 0x89c2ef37, "crypto_inst_setname" },
	{ 0xc5b8e721, "crypto_mod_put" },
	{ 0x54e602e1, "crypto_init_spawn" },
	{ 0x98a8dbc, "crypto_attr_alg2" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x6e034a99, "crypto_spawn_tfm" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x706ade88, "crypto_drop_spawn" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2E806314ABB01988A99AAAC");
MODULE_INFO(rhelversion, "8.0");
