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
	{ 0x5c224ed5, "nft_unregister_obj" },
	{ 0xca1da9fc, "nft_unregister_expr" },
	{ 0x6aa9f2aa, "nft_register_obj" },
	{ 0x5974243c, "nft_register_expr" },
	{ 0x754d539c, "strlen" },
	{ 0x81963de2, "nf_ct_ext_add" },
	{ 0xb6ff3768, "nf_connlabels_replace" },
	{ 0xc3adbc1f, "nf_connlabels_put" },
	{ 0xed946a48, "init_net" },
	{ 0x69278d5e, "nf_connlabels_get" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9166fada, "strncpy" },
	{ 0xb602d7cf, "nf_ct_netns_get" },
	{ 0xaacaeda8, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0xc39a43d9, "nf_ct_tmpl_alloc" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x22948148, "nf_ct_netns_put" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xa7b268e4, "nft_dump_register" },
	{ 0x9861197b, "nf_ct_helper_ext_add" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4ec30c1e, "nf_conntrack_helper_try_module_get" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xc1501271, "nf_conntrack_helper_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables,nf_conntrack";


MODULE_INFO(srcversion, "40F746EF563296F461E7F70");
MODULE_INFO(rhelversion, "8.0");
