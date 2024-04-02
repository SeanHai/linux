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
	{ 0x402b8281, "__request_module" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xea2b701b, "up_read" },
	{ 0xc7f4b92, "single_open" },
	{ 0x754d539c, "strlen" },
	{ 0x985ca3e0, "single_release" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x5e87e75, "device_destroy" },
	{ 0x44e9a829, "match_token" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x4b94a99b, "seq_read" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x91185511, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb67fec0e, "uuid_parse" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6bddef80, "misc_register" },
	{ 0x8cae237f, "__nvme_submit_sync_cmd" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x9166fada, "strncpy" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x2df52479, "device_create" },
	{ 0x4e3567f7, "match_int" },
	{ 0x85142f62, "up_write" },
	{ 0x65baf559, "down_write" },
	{ 0x69e683de, "uuid_gen" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xa047947, "class_destroy" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x28318305, "snprintf" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x85075cb1, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nvme-core";


MODULE_INFO(srcversion, "DF1CEE26A13AC46A3D41A52");
MODULE_INFO(rhelversion, "8.0");
