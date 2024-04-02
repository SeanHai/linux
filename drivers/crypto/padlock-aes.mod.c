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
	{ 0x8eeedd32, "crypto_blkcipher_type" },
	{ 0x22faa972, "crypto_unregister_alg" },
	{ 0x7ba008ce, "crypto_register_alg" },
	{ 0x27e1a049, "printk" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x177847e, "cpu_info" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x7e995a6d, "crypto_aes_expand_key" },
	{ 0x669e359f, "blkcipher_walk_done" },
	{ 0x8b377995, "blkcipher_walk_virt" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*00A6*");

MODULE_INFO(srcversion, "FB831CDE7E07870A82BCFB6");
MODULE_INFO(rhelversion, "8.0");
