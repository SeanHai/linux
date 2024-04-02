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
	{ 0xc1f8bbfe, "glue_xts_crypt_128bit_one" },
	{ 0x5b17be06, "cast_s4" },
	{ 0xbd3e7542, "cast_s1" },
	{ 0x60af3957, "simd_unregister_skciphers" },
	{ 0x5609ce41, "cast_s2" },
	{ 0x30b56bcd, "__cast6_setkey" },
	{ 0xdc3c41a8, "__crypto_memneq" },
	{ 0x72fe5c98, "glue_ecb_req_128bit" },
	{ 0x27e1a049, "printk" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x2df86bdd, "__cast6_encrypt" },
	{ 0x591d2461, "simd_register_skciphers_compat" },
	{ 0xe83c8f9e, "glue_xts_req_128bit" },
	{ 0xb0aa812e, "fips_enabled" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x220b3dae, "glue_cbc_encrypt_req_128bit" },
	{ 0x4735b7a5, "cast6_setkey" },
	{ 0xb9cba57f, "cast_s3" },
	{ 0xf968719c, "glue_cbc_decrypt_req_128bit" },
	{ 0xc42e8ab4, "__cast6_decrypt" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=glue_helper,cast_common,crypto_simd,cast6_generic";


MODULE_INFO(srcversion, "5B4E4D86377716F1A5EEB8E");
MODULE_INFO(rhelversion, "8.0");
