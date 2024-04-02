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
	{ 0x3e97e846, "glue_ctr_req_128bit" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x48c26e52, "crypto_unregister_skciphers" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0x72fe5c98, "glue_ecb_req_128bit" },
	{ 0x42b091a5, "crypto_register_skciphers" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7ba008ce, "crypto_register_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x220b3dae, "glue_cbc_encrypt_req_128bit" },
	{ 0x22faa972, "crypto_unregister_alg" },
	{ 0xf968719c, "glue_cbc_decrypt_req_128bit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=glue_helper";


MODULE_INFO(srcversion, "2AE93D6606D02C6D4F2B62C");
MODULE_INFO(rhelversion, "8.0");
