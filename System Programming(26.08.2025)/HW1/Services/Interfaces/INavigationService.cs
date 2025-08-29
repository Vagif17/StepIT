using GalaSoft.MvvmLight;
namespace HW1.Services.Interfaces;

public interface INavigationService
{
    public void NavigateTo<T>() where T : ViewModelBase;

}