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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf97d7de2, "register_sysctl_table" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xffbf2b72, "blk_put_request" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xe2d5a545, "scsi_cmd_blk_ioctl" },
	{ 0xcab60fa6, "blk_rq_unmap_user" },
	{ 0xbef02117, "invalidate_bdev" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xfb578fc5, "memset" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x1d1a0cbb, "blk_rq_map_user" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x319d493d, "proc_dostring" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6be0d38b, "unregister_sysctl_table" },
	{ 0x5ba4171c, "blk_execute_rq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xacaf7ca3, "blk_get_request" },
	{ 0x88db9f48, "__check_object_size" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E5A2049F635B552113240F5");
MODULE_INFO(rhelversion, "8.0");
