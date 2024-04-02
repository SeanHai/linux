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
	{ 0xca1da9fc, "nft_unregister_expr" },
	{ 0x5c224ed5, "nft_unregister_obj" },
	{ 0x5974243c, "nft_register_expr" },
	{ 0x6aa9f2aa, "nft_register_obj" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdf40da5f, "nla_put_64bit" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xbd671048, "__alloc_percpu_gfp" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables";


MODULE_INFO(srcversion, "6B17C407C25F9B74D9B9840");
MODULE_INFO(rhelversion, "8.0");
