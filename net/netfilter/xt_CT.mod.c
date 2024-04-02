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
	{ 0x8e91f949, "xt_unregister_targets" },
	{ 0x532b50b1, "xt_unregister_target" },
	{ 0x77a0f6e, "xt_register_targets" },
	{ 0x1f647f51, "xt_register_target" },
	{ 0xa8cfc05a, "__nf_ct_l4proto_find" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc31db35, "nf_ct_timeout_find_get_hook" },
	{ 0x9861197b, "nf_ct_helper_ext_add" },
	{ 0x4ec30c1e, "nf_conntrack_helper_try_module_get" },
	{ 0xa916b694, "strnlen" },
	{ 0x81963de2, "nf_ct_ext_add" },
	{ 0x10d630de, "nf_ct_tmpl_free" },
	{ 0xc39a43d9, "nf_ct_tmpl_alloc" },
	{ 0xb602d7cf, "nf_ct_netns_get" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x502b4d29, "nf_ct_timeout_put_hook" },
	{ 0x22948148, "nf_ct_netns_put" },
	{ 0xc1501271, "nf_conntrack_helper_put" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "1E3EF41D36419C9C63CC035");
MODULE_INFO(rhelversion, "8.0");
