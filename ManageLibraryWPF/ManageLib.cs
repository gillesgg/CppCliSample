using System;

namespace ManageLibraryWPF
{
    public class ManageLib
    {
        MainWindow _mainWindow = null;
        public void ShowWindow()
        {
            _mainWindow = new MainWindow();

            _mainWindow.Show();
            
        }

        public void SendMessage(string message)
        {
            if (_mainWindow != null)
            {
                _mainWindow.SendMessage(message);
            }
            
        }
    }
}
