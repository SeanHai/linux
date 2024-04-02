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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xe85e1208, "blowfish_setkey" },
	{ 0x48c26e52, "crypto_unregister_skciphers" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0x66f221d7, "skcipher_walk_done" },
	{ 0x42b091a5, "crypto_register_skciphers" },
	{ 0x27e1a049, "printk" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xb4906fc3, "skcipher_walk_virt" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7ba008ce, "crypto_register_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0x22faa972, "crypto_unregister_alg" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=blowfish_common";


MODULE_INFO(srcversion, "6D4842443FCD87D778146B5");
MODULE_INFO(rhelversion, "8.0");
